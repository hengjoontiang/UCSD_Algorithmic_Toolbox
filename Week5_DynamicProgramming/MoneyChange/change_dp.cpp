#include <iostream>
#include <vector>
#include <limits>
std::vector<long> coins {1,3,4};
//std::vector<long> coins {1};
std::vector<long> MinNumCoins;
const long MAX_LONG = std::numeric_limits<long>::max();
/*
 * RecursiveChange(money,coins) 
 * 	if money = 0 :
 * 		return 0
 * 	MinNumCoins = Infinity i.e Math.MAX_NUMBER
 * 	for i = 1 to coins.size() ; i++ :
 * 		if (money >= coins[i] :
 * 			NumCoins = RecursiveChange(money - coin[i],coins)
 * 			if NumCoins + 1 < MinNumCoins :
 * 				MinNumCoins = NumCoins + 1
 * 	return MinNumCoins
 * 
 * RecursiveChangeDP(money,coins) 
 *  vector<long> MinNumCoins(money)
 *  MinNumCoins[0] = 0
 * 	if money = 0 :
 * 		return 0
 *  for (index = 1 ; index < money ; index++ ) {
 * 		MinNumCoins]index] = Infinity i.e Math.MAX_NUMBER
 *  }
 *
 * 	for i = 1 to coins.size() ; i++ :
 * 		if (money >= coins[i] :
 * 			NumCoins = RecursiveChangeDP(money - coin[i],coins)
 * 			if NumCoins + 1 < MinNumCoins]i] :
 * 				MinNumCoins[i] = NumCoins + 1
 * 	return MinNumCoins[money]
 * 
 * Note that the storage has not been allocated
 * */
 void printVec(const std::vector<long> & anyVec) {
	for (int index=0; index< anyVec.size() ;index++){
	  
	  
	  std::cout << "anyVec[" << index << "]=" <<anyVec[index] <<std::endl;
	  
	}
}
 void initVec(long money){
	 //std::cout << "money=" << money << std::endl;
	 MinNumCoins.push_back(0);
	 
	 for (long index = 1 ; index <= money ; index++ ) {
  		MinNumCoins.push_back( MAX_LONG);
    }
    
    //printVec(MinNumCoins);
 }
 /*
 long RecursiveChange(long money) {
    long MinNumCoinsGlobal = std::numeric_limits<long>::max();
    std::cout << "RecursiveChange start" << std::endl;
    std::cout << "money" << money << std::endl;
  	if (money == 0) {
  		return 0;
	}
    
 
  	for (long i = 0; i < coins.size() ; i++ ) {
		std::cout << "coins[" << i << "] = " << coins[i] << std::endl;
		std::cout << "money" << money <<  std::endl;
  		if (money >= coins[i] ) {
			std::cout << "RecursiveChange(money - coins[i],coins)" << money - coins[i] << ","<< coins[i] << std::endl;
  			long NumCoins = RecursiveChange(money - coins[i]);
  			std::cout << "NumCoins=" << NumCoins << std::endl;
  			std::cout << "MinNumCoinsGlobal=" << MinNumCoinsGlobal << std::endl;
  			std::cout << "i=" << i << std::endl;
  			if (NumCoins + 1 < MinNumCoinsGlobal) {
				MinNumCoinsGlobal = NumCoins + 1;
				std::cout << "NumCoins + 1 < MinNumCoins[i]" << std::endl;
				std::cout << "NumCoins + 1 =" << NumCoins + 1 << std::endl;
				std::cout << "MinNumCoinsGlobal =" << MinNumCoinsGlobal<< std::endl;
  				
			}
		}
	}
	std::cout << "RecursiveChange end" << std::endl;
	//printVec(MinNumCoins);
  	return MinNumCoinsGlobal;
}*/
 long RecursiveChangeDP(long money) {
   
    //std::cout << "RecursiveChangeDP start" << std::endl;
    //std::cout << "money" << money << std::endl;
  	if (money == 0) {
  		return MinNumCoins[0]=0;
	}
	
	//omly a one-time assignment
	
	//std::cout << "MinNumCoins[money]=" << MinNumCoins[money] << std::endl;
	if (MinNumCoins[money] != MAX_LONG )
		return MinNumCoins[money] ;
	
	/*
	std::vector<long> MinNumCoins;
	MinNumCoins.push_back( 0);
    for (long index = 1 ; index < money ; index++ ) {
  		MinNumCoins.push_back( std::numeric_limits<long>::max());
    }*/
    //std::cout << "coins.size() =" << coins.size()  << std::endl;
  	for (long i = 0; i < coins.size() ; i++ ) {
		//std::cout << "coins[" << i << "] = " << coins[i] << std::endl;
		//std::cout << "money" << money <<  std::endl;
		
		
  		if (money >= coins[i] ) {
			//std::cout << "money >= coins[i]" << std::endl;
			
			//std::cout << "RecursiveChangeDP(money - coins[i],coins)" << money - coins[i] << ","<< coins[i] << std::endl;
  			long NumCoins = RecursiveChangeDP(money - coins[i]);
  			//std::cout << "NumCoins=" << NumCoins << std::endl;
  			//std::cout << "MinNumCoins[" << i << "]=" << MinNumCoins[i] << std::endl;
  			//std::cout << "i=" << i << std::endl;
  			if (NumCoins + 1 < MinNumCoins[money] ) {
				//std::cout << "NumCoins + 1 < MinNumCoins[i]" << std::endl;
				//std::cout << "NumCoins + 1 =" << NumCoins + 1 << std::endl;
				//std::cout << "MinNumCoins[i] =" << MinNumCoins[money] << std::endl;
  				MinNumCoins[money] = NumCoins + 1;
			}
		}
	}
	//std::cout << "RecursiveChangeDP end" << std::endl;
	//printVec(MinNumCoins);
  	return MinNumCoins[money];
}

long get_change(long m) {
  //write your code here
  
  //std::cout << "get_change start "<< std::endl;
  return RecursiveChangeDP(m);
}
/*coins 1,3,4*/

int main() {
  long m;
  std::cin >> m;
  initVec(m);
  std::cout << get_change(m) << '\n';
  //printVec(MinNumCoins);
}
