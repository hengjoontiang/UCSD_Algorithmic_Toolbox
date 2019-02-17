#include <iostream>
#include <vector>
#include <algorithm>


const long MAX_LONG = std::numeric_limits<long>::max();
//std::vector<int> sequence;
/*
Primitive Calculator:                                                                                
    Failed case #3/16: (Wrong answer)                                                                    
    got: 15 expected: 14                                                                                 
    Input:                                                                                               
    96234                                                                                                
                                                                                                         
    Your output:                                                                                         
    15                                                                                                   
    1 2 4 5 10 11 22 66 198 594 1782 5346 16038 16039 32078 96234                                        
    Correct output:                                                                                      
    14                                                                                                   
    1 3 9 10 11 22 66 198 594 1782 5346 16038 16039 32078 96234                                          
     (Time used: 0.00/1.50, memory used: 3219456/536870912.)    

 * */
using std::vector;

//create a struct to store the values
//will need the current value, plus the minimum number of steps to reduce it to 1
//maintain a vector of LinkElement

//we can maintain 2 vectors or arrays
//index is the long value
vector<long> nextSmallerValue;
vector<long> minNumSteps;
vector<long> sequence ;

void initVec(long value){
	 //std::cout << "money=" << money << std::endl;
	 minNumSteps.push_back(0);
	 nextSmallerValue.push_back(0);
	 for (long index = 1 ; index <= value ; index++ ) {
  		minNumSteps.push_back( MAX_LONG);
  		nextSmallerValue.push_back(-1);
    }
    
    //printVec(MinNumCoins);
 }

long getWantedSequence(long i, long value) {
	switch (i ){
				case 0: {
					
					return  value / 3;
				}
				case 1: {
					
					return value / 2;
				}
				case 2: {
					//wantedSequence = value -1;
					return value -1;
				}	
	}
}
long RecursiveChangeDP(long value) {
	
	long wantedSequence = -1;
	long nextValue = -1;
   
    //std::cout << "RecursiveChangeDP start" << std::endl;
    //std::cout << "value" << value << std::endl;
  	/*if (value == 0) {
  		return sequence[0]=0;
	}*/
	
	if (value == 0) {
		 
		nextSmallerValue[0] = 0;
  		return minNumSteps[0]=0;
	}
	if (value == 1) {
		
		nextSmallerValue[1] = 1;
  		return minNumSteps[1]=1;
	}
	/*
	if (money == 2) {
  		return MinNumCoins[2]=1;
	}
	if (money == 3) {
  		return MinNumCoins[3]=1;
	}
	if (money == 4) {
  		return MinNumCoins[4]=2;
	}*/
	
	//omly a one-time assignment
	
	//std::cout << "sequence[money]=" << sequence[value] << std::endl;
	if (minNumSteps[value] != MAX_LONG ){
		//note that we do not reset the nextSmallerValue as it has already been set the first when we invoke RecursiveChangeDP
		return minNumSteps[value] ;
	}
	
    //std::cout << "coins.size() =" << coins.size()  << std::endl;
  	for (long i = 0; i < 3 ; i++ ) {
		//std::cout << "coins[" << i << "] = " << coins[i] << std::endl;
		//std::cout << "money" << money <<  std::endl;
		
		
  		if (value > 1) {
			//std::cout << "money >= coins[i]" << std::endl;
			long CurrSequence = MAX_LONG;
			//std::cout << "RecursiveChangeDP(money - coins[i],coins)" << money - coins[i] << ","<< coins[i] << std::endl;
			switch (i ){
				case 0: if (value % 3 == 0) {
					nextValue = value / 3;
					CurrSequence = RecursiveChangeDP(nextValue);
					
					break;
				}
				case 1: if (value % 2 == 0) {
					nextValue = value / 2;
					CurrSequence = RecursiveChangeDP(nextValue);
					break;
				}
				case 2: {
					nextValue = value -1;
					CurrSequence = RecursiveChangeDP(nextValue);
					break;
				}
			}//switch (i ){
			  
  			 
  			//std::cout << "NumCoins=" << NumCoins << std::endl;
  			//std::cout << "MinNumCoins[" << i << "]=" << MinNumCoins[i] << std::endl;
  			//std::cout << "i=" << i << std::endl;
  			if (CurrSequence + 1 < minNumSteps[value] ) {
				//std::cout << "NumCoins + 1 < MinNumCoins[i]" << std::endl;
				//std::cout << "NumCoins + 1 =" << NumCoins + 1 << std::endl;
				//std::cout << "MinNumCoins[i] =" << MinNumCoins[money] << std::endl;
				nextSmallerValue[value] = nextValue;
				
				wantedSequence = i;
  				minNumSteps[value] = CurrSequence + 1;
			}//if (CurrSequence + 1 < MinCount[value] ) {
		}//if (value > 1) {
	}//for (long i = 0; i < 3 ; i++ ) {
	//check wantedSequence
	
	
	//std::cout << "RecursiveChangeDP end" << std::endl;
	//printVec(MinNumCoins);
  	return minNumSteps[value];
}

long get_sequence(long m) {
  //write your code here
  
  //std::cout << "get_change start "<< std::endl;
  RecursiveChangeDP(m);
  
  long steps = m;
  sequence.push_back(m);//the starting value
  while (steps > 1) {
	  sequence.push_back(nextSmallerValue[steps]);
	  steps=nextSmallerValue[steps];
  }
  reverse(sequence.begin(), sequence.end());
}
int main() {
  long n;
  std::cin >> n;
  initVec(n);
  //vector<int> sequence = get_sequence(n);
  //sequence.push_back(n);
  get_sequence(n);
  //sequence.push_back(1);
  //reverse(sequence.begin(), sequence.end());
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
