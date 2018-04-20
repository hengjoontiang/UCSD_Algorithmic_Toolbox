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
long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}
int get_fibonacci_partial_sum_fast(long long from, long long to) {
   // if (n == 0 ) return 0;
    //if (n == 1 ) return 1;
    //if (n == 2 ) return 2; 
    
	int sum_from = 0;
    int sum_to = 0;
    int sum = 0;
	sum_from = fibo_sum_modm[ (from - 1) % 60];
	sum_to =  fibo_sum_modm[ to % 60];
	/*if ( sum_to < sum_from ) {
		sum_to += 10;
	}*/
	sum = (sum_to - sum_from) % 10;
	if (sum < 0 ) {
		sum += 10;
	}
	
	
    return sum;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    getPisanoPeriod10();
    getSumPisanoPeriod10();
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
