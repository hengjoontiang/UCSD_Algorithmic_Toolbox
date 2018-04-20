#include <iostream>
#include <cassert>
#include <array>
using std::cin;
using std::cout;
using std::array;
#define MAXSIZE 10000000
std::array<long long,10000000> fibo_modm;//empty not inititalize
long long getPisanoPeriod(long long modm){
	fibo_modm[0] = 0; fibo_modm[1] = 1;
	//for small periods, we return directly)
	if ( modm == 2 ) {
		fibo_modm[2] = 1;
		return 3;
	}
	if ( modm == 3 ) {
		fibo_modm[2] = 1;
		fibo_modm[3] = 2;
		fibo_modm[4] = 0;
		fibo_modm[5] = 2;
		fibo_modm[6] = 2;
		fibo_modm[7] = 1;
		return 8;
	}
	//std::cout << "init m_squared" <<std::endl;
	//long long m_squared = modm * modm;
	//fibo_modm = new long[m_squared];
	//std::cout << "init 0" <<std::endl;
	//std::cout << "m_squared=" <<m_squared <<std::endl;
	/*for (long index = 2 ; index < MAXSIZE  ; index++ ){
		fibo_modm[index] = 0;
	}*/
	long long period_index = 0;
	
	//start from 0,1 
	//1. init the fibo_modm[0] = 0, fibo_modm[1] = 1
	//2. start to create current = i; fibo_modm[i++]; next = i;
	//3. check if fibo_modm[current] == 0 and fibo_modm[next] == 1 
	//4. period = current - 1
	
	
	
	//initialize current and next
	//long current = 1;
	
	//we will need to go beyond m^2 slightly so that we can check 0,1 properly
	//std::cout << "m_suared array" <<std::endl ;
	for (long long index = 2 ; index <= MAXSIZE ; index++ ){
		//std::cout << "index=" << index << std::endl;
		fibo_modm[index] = (fibo_modm[index-1] % modm +fibo_modm[index-2] % modm ) % modm ; 
		//std::cout << fibo_modm[index] << std::endl;
		//check for the period
		if ( fibo_modm[index] == 1) {
			if ( fibo_modm[index-1] == 0 ) {
				period_index = index -2;
				break;
			}
		}
	}
	
	
	return period_index + 1 ; //due to zeroth index 
}
long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

int get_fibonacci_huge_fast(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

	//split into 2 cases
	//1. n < m^2
	long long  m_squared = 0 ;
	if (m <= 100000) { 
		m_squared = m*m;
	}else {
		m_squared = MAXSIZE;
	}
	//long long *fibo_modm;
	//std::array<long long> fibo_modm(m_squared); 
	//std::cout << "creating array" <<std::endl ;
	//fibo_modm = new int[m_squared];
	//std::cout << "computing.." <<std::endl ;
	if ( n < m_squared ) { //do as per normal, makes no diff
		//std::cout << "normal" <<std::endl ;
		for (int i = 0; i < n - 1; ++i) {
			int tmp_previous = previous;
			previous = current;
			current = (tmp_previous + current) % m;
		}
	}else {
		//get the pisano period
		//std::cout << "pisano" <<std::endl ;
		int pisano_period = getPisanoPeriod(m);
		current = fibo_modm[ n % pisano_period ] ;
	}
	//delete fibo_modm;
	
    return current;
}
int main() {
    long long n,m;
    std::cin >> n >> m;
    
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
    
}
