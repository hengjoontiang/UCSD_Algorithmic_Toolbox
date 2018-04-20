#include <iostream>
#include <cassert>
using std::cin;
using std::cout;
/*
 * Proof - always periodic
 * Proof - period can only be up to m^2
 * a0 = x, a1 = y , for mod m, the cobinaton for the pairs is at most m^2 before the combination x,y returns
 * 
 * 
 * 
 * */
// Algorithm:
//  1. Assume that the period is up to a maximum of m^2 where m is the modulo
//  2. Step up the fibonacci number 
//  3. Let pisano_period=1 for a start
//  4. Set up an array of size m^2 (see pt 1) ; pisano_no = new int[m*m];
//  5. Compute modulo for 1st number , store into pisano_no[0]
//  6.  while (!period_found) {
//      current_index= pisano_period;
//		
//		for int check_next=0;check_next < pisano_period; check_next ++) {
//			fib_mod = getcurrent_fibonacci_modulo(check_next+current_index);
//        	if ( pisano_no[check_next] != fib_mod ) {
//				period_found = false;
//				pisano_period++;
//				//store the additional pisano no
//				pisano_no[check_next+current_index] = getcurrent_fibonacci_modulo(pisano_period);
//				break;
//			}
//       }
//		 period_found = true	
//      } //while 

//Testing m=3
//0 , 1, 1, 2 , 0,0 ,2, 2,1
//period = 8 
//note the start is always 0,1 => we just need to check for 0,1

long* fibo_modm;//empty not inititalize

//assume fibo_modm initialize to all zeros
//returns the period
//note that fibo_mod has been stored
long getPisanoPeriod(long modm){
	long period_index = 0;
	
	//start from 0,1 
	//1. init the fibo_modm[0] = 0, fibo_modm[1] = 1
	//2. start to create current = i; fibo_modm[i++]; next = i;
	//3. check if fibo_modm[current] == 0 and fibo_modm[next] == 1 
	//4. period = current - 1
	
	fibo_modm[0] = 0L; fibo_modm[1] = 1L;
	
	//initialize current and next
	//long current = 1;
	
	//we will need to go beyond m^2 slightly so that we can check 0,1 properly
	for (long index = 2 ; index <= modm * modm +1 ; index++ ){
		cout << "index=" << index << std::endl;
		fibo_modm[index] = (fibo_modm[index-1] % modm +fibo_modm[index-2] % modm ) % modm ; 
		cout << fibo_modm[index] << std::endl;
		//check for the period
		if ( fibo_modm[index] == 1L) {
			if ( fibo_modm[index-1] == 0L ) {
				period_index = index -2;
				break;
			}
		}
	}
	
	
	return period_index + 1 ; //due to zeroth index 
}
int main() {
    long m;
    cin >> m;
    fibo_modm = new long[m*m];
	for (long index = 2 ; index < m * m  ; index++ ){
		fibo_modm[index] = 0;
	}

    long period = getPisanoPeriod(m);
    cout << period<< "\n";
    
    
    for (long chk_index = 0; chk_index < period; chk_index++){ 
		cout << "fibo_modm[" << chk_index << "]=" <<fibo_modm[chk_index] << std::endl;
	}
    return 0;
}


