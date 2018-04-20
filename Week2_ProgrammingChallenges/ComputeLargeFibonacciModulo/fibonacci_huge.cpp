#include <iostream>
#include <cassert>
//#include <array>
using std::cin;
using std::cout;
//using std::array;
int *fibo_modm;//empty not inititalize
int getPisanoPeriod(int modm){
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
	int m_squared = modm * modm;
	//fibo_modm = new long[m_squared];
	for (int index = 2 ; index < m_squared  ; index++ ){
		fibo_modm[index] = 0;
	}
	int period_index = 0;
	
	//start from 0,1 
	//1. init the fibo_modm[0] = 0, fibo_modm[1] = 1
	//2. start to create current = i; fibo_modm[i++]; next = i;
	//3. check if fibo_modm[current] == 0 and fibo_modm[next] == 1 
	//4. period = current - 1
	
	
	
	//initialize current and next
	//long current = 1;
	
	//we will need to go beyond m^2 slightly so that we can check 0,1 properly
	for (int index = 2 ; index <= m_squared +1 ; index++ ){
		//cout << "index=" << index << std::endl;
		fibo_modm[index] = (fibo_modm[index-1] % modm +fibo_modm[index-2] % modm ) % modm ; 
		//cout << fibo_modm[index] << std::endl;
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

int get_fibonacci_huge_fast(int n, int m) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

	//split into 2 cases
	//1. n < m^2
	int m_squared = m*m;
	//long long *fibo_modm;
	//std::array<long long> fibo_modm(m_squared); 
	//std::cout << "creating array" <<std::endl ;
	fibo_modm = new int[m_squared];
	//std::cout << "computing.." <<std::endl ;
	if ( n < m_squared ) { //do as per normal, makes no diff
		for (int i = 0; i < n - 1; ++i) {
			int tmp_previous = previous;
			previous = current;
			current = (tmp_previous + current) % m;
		}
	}else {
		//get the pisano period
		int pisano_period = getPisanoPeriod(m);
		current = fibo_modm[ n % pisano_period ] ;
	}
	delete fibo_modm;
	
    return current;
}
int main() {
    int n,m;
    std::cin >> n >> m;
    
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
    
}
