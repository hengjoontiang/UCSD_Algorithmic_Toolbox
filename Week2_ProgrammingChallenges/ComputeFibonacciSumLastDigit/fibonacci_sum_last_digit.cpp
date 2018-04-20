#include <iostream>
#include <cassert>
#include <array>
using std::cin;
using std::cout;
using std::array;
#define MAXSIZE 60
std::array<long long,60> fibo_modm;//empty not inititalize
std::array<long long,60> fibo_sum_modm;
int getPisanoPeriod10(){
	fibo_modm[0] = 0; fibo_modm[1] = 1;
	
	
	for (int index = 2 ; index < MAXSIZE ; index++ ){
		
		fibo_modm[index] = (fibo_modm[index-1]  +fibo_modm[index-2] ) % 10 ; 
		
		
	}
	
	
	return MAXSIZE ; //due to zeroth index 
}
int getSumPisanoPeriod10(){
	fibo_sum_modm[0] = 0; fibo_sum_modm[1] = 1;
	
	
	
	for (int index = 2 ; index <= MAXSIZE ; index++ ){
		fibo_sum_modm[index] =  (fibo_sum_modm[index-1] + fibo_modm[ index % 60 ] ) % 10;
		
		
		
	}
	
	
	return MAXSIZE ; //due to zeroth index 
}
int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}


int fibonacci_sum_fast(long long n) {
   // if (n == 0 ) return 0;
    //if (n == 1 ) return 1;
    //if (n == 2 ) return 2; 
    
	int sum = 0;
    	
	sum = fibo_sum_modm[ n % 60];
		
	
	
	
    return sum;
}


int main() {
    long long n;
    std::cin >> n ;
    getPisanoPeriod10();
    getSumPisanoPeriod10();
    /*
    for (int index = 0 ; index < MAXSIZE ; index++ ){
		
		std::cout << fibo_modm[index] << std::endl;
		
		
	}*/
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << fibonacci_sum_fast(n) << '\n';
    
}
