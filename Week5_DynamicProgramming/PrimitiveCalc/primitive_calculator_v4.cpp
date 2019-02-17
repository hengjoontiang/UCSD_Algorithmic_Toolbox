#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
const int MAX_LONG = std::numeric_limits<int>::max();
vector<int> nextSmallerValue;
vector<int> minNumSteps;

/*
 * This uses a mixture of iteration and recursiion dynamic programming
 * reason being that the recusion stack cannot extend too far, hence we would need to build it from the ground up
 * 
 * */
//vector<long> sequence ;

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


Failed case #4/16: Wrong answer                                                                                     
    got: 19 expected: 17 
    
 * */
/*
int get_min_num_steps_bak2(int n) {
	//std::cout << "start get_min_num_steps" << std::endl;
	int minNumStepsNonArray = -1;
	int nextSmallerValueNonArray = -1;
    
    if (n == 0) {
		 
		nextSmallerValue[0] = 0;
  		return minNumSteps[0]=0;
	}
	if (n == 1) {
		
		nextSmallerValue[1] = 1;
  		return minNumSteps[1]=1;
	}
	if (minNumSteps[n] != MAX_LONG ){
		//note that we do not reset the nextSmallerValue as it has already been set the first when we invoke RecursiveChangeDP
		return minNumSteps[n] ;
	}
    
    if ( n - 1 > 1 && (n %2 ==0 || n%3==0)  && (n -1)% 3 == 0) {
		nextSmallerValueNonArray = n -1;
		//std::cout << "invoking n-1" << nextSmallerValueNonArray[0] << std::endl;
		if (minNumSteps[nextSmallerValueNonArray] != MAX_LONG ){
		  minNumStepsNonArray = minNumSteps[nextSmallerValueNonArray] ;
	  }else {
		  minNumStepsNonArray = get_min_num_steps(nextSmallerValueNonArray);
	  }
	}
	
    else
    if ( n % 3 == 0 || n % 2 == 0) {
    //checking n % 3
    if (n % 3 == 0) {
	  
      nextSmallerValueNonArray = n / 3;
      //std::cout << "invoking n%3" << nextSmallerValueNonArray[0] << std::endl;
      if (minNumSteps[nextSmallerValueNonArray] != MAX_LONG ){
		  minNumStepsNonArray = minNumSteps[nextSmallerValueNonArray] ;
	  }else {
		  minNumStepsNonArray = get_min_num_steps(nextSmallerValueNonArray);
	  }
    } 
    
    
    
    if (n % 2 == 0) {
      
      nextSmallerValueNonArray = n / 2;
      //std::cout << "invoking n%2" << nextSmallerValueNonArray[1] << std::endl;
      if (minNumSteps[nextSmallerValueNonArray] != MAX_LONG ){
		  minNumStepsNonArray = minNumSteps[nextSmallerValueNonArray] ;
	  }else {
		  minNumStepsNonArray = get_min_num_steps(nextSmallerValueNonArray);
	  }
    }   
	}//if ( n % 3 == 0 || n % 2 == 0) {
    else {
    if ( n > 1 ) {
		nextSmallerValueNonArray = n -1;
		//std::cout << "invoking n-1" << nextSmallerValueNonArray[2] << std::endl;
		if (minNumSteps[nextSmallerValueNonArray] != MAX_LONG ){
		  minNumStepsNonArray = minNumSteps[nextSmallerValueNonArray] ;
	  }else {
		  minNumStepsNonArray = get_min_num_steps(nextSmallerValueNonArray);
	  }
	}
	}
	    
    
		//std::cout << "index=" << index << std::endl;
		if (minNumStepsNonArray != -1 && minNumStepsNonArray + 1 < minNumSteps[n] ) {
				//std::cout << "check min " << std::endl;
				nextSmallerValue[n] = nextSmallerValueNonArray;
				
				
  				minNumSteps[n] = minNumStepsNonArray + 1;
  				
		}
	
	//std::cout << "end get_min_num_steps" << std::endl;
    return minNumSteps[n] ;
}
*/

int get_min_num_steps(int n) {
	//std::cout << "start get_min_num_steps" << std::endl;
	int minNumStepsNonArray[3] = {-1,-1,-1};
	int nextSmallerValueNonArray[3] = {-1,-1,-1};
    
    if (n == 0) {
		 
		nextSmallerValue[0] = 0;
  		return minNumSteps[0]=0;
	}
	if (n == 1) {
		
		nextSmallerValue[1] = 1;
  		return minNumSteps[1]=1;
	}
	if (minNumSteps[n] != MAX_LONG ){
		//note that we do not reset the nextSmallerValue as it has already been set the first when we invoke RecursiveChangeDP
		return minNumSteps[n] ;
	}
    
    
    //checking n % 3
    if (n % 3 == 0) {
	  
      nextSmallerValueNonArray[0] = n / 3;
      //std::cout << "invoking n%3" << nextSmallerValueNonArray[0] << std::endl;
      if (minNumSteps[nextSmallerValueNonArray[0]] != MAX_LONG ){
		  minNumStepsNonArray[0] = minNumSteps[nextSmallerValueNonArray[0]] ;
	  }else {
		  minNumStepsNonArray[0] = get_min_num_steps(nextSmallerValueNonArray[0]);
	  }
    } 
    
    
    
    if (n % 2 == 0) {
      
      nextSmallerValueNonArray[1] = n / 2;
      //std::cout << "invoking n%2" << nextSmallerValueNonArray[1] << std::endl;
      if (minNumSteps[nextSmallerValueNonArray[1]] != MAX_LONG ){
		  minNumStepsNonArray[1] = minNumSteps[nextSmallerValueNonArray[1]] ;
	  }else {
		  minNumStepsNonArray[1] = get_min_num_steps(nextSmallerValueNonArray[1]);
	  }
    }   
	
    if ( n > 1 ) {
		nextSmallerValueNonArray[2] = n -1;
		//std::cout << "invoking n-1" << nextSmallerValueNonArray[2] << std::endl;
		if (minNumSteps[nextSmallerValueNonArray[2]] != MAX_LONG ){
		  minNumStepsNonArray[2] = minNumSteps[nextSmallerValueNonArray[2]] ;
	  }else {
		  minNumStepsNonArray[2] = get_min_num_steps(nextSmallerValueNonArray[2]);
	  }
	}
	
	    
    for (size_t index= 0; index < 3; index++) {
		//std::cout << "index=" << index << std::endl;
		if (minNumStepsNonArray[index] != -1 && minNumStepsNonArray[index] + 1 < minNumSteps[n] ) {
				//std::cout << "check min " << std::endl;
				nextSmallerValue[n] = nextSmallerValueNonArray[index];
				
				
  				minNumSteps[n] = minNumStepsNonArray[index] + 1;
  				
		}
	}
	//std::cout << "end get_min_num_steps" << std::endl;
    return minNumSteps[n] ;
}

vector<int> optimal_sequence(int n) {
 
  std::vector<int> sequence;
  for (int index=1;index< n ; index++) {
				get_min_num_steps(index);
  }
  
  long minnumsteps =  get_min_num_steps(n);
   
  int steps = n;
  sequence.push_back(n);//the starting value
  while (steps > 1) {
	  sequence.push_back(nextSmallerValue[steps]);
	  steps=nextSmallerValue[steps];
  }

  reverse(sequence.begin(), sequence.end());
  return sequence;
}
void initVec(int n){
	 //std::cout << "money=" << money << std::endl;
	 minNumSteps.push_back(0);
	 nextSmallerValue.push_back(0);
	 for (int index = 1 ; index <= n ; index++ ) {
  		minNumSteps.push_back( MAX_LONG);
  		nextSmallerValue.push_back(-1);
    }
    
    //printVec(MinNumCoins);
 }


int main_body() {
  int n;
  std::cin >> n;
  initVec(n);
  
  vector<int> sequence = optimal_sequence(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}

int main_test() {
	int n = 200000;
	initVec(n);
	for (int index=1;index< n ; index++) {
				get_min_num_steps(index);
	}
	//get_min_num_steps(n/5);
	//get_min_num_steps(n/2);
	//get_min_num_steps(n);
	//optimal_sequence(n);
	vector<int> sequence = optimal_sequence(n);
	std::cout << sequence.size() - 1 << std::endl;
	for (size_t i = 0; i < sequence.size(); ++i) {
		std::cout << sequence[i] << " ";
	}
}
int main() {
	main_body();
}
