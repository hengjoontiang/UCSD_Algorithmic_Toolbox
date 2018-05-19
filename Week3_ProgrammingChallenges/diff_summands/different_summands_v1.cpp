#include <iostream>
#include <vector>

using std::vector;
/*
 * Algorithm
 * 1. init vec of summands
 * 2. remainingsum = n
 * 3. while remainingsum > 0 
 * 4. the next summand must be > vec.last(), AND remainingsum- next summand > next summand else next_summand = remainingsum
 * */
vector<int> optimal_summands(int n) {
  //1. init vec of summands
  vector<int> summands;
  //write your code here
  
  //2. remainingsum = n
  int remainingsum = n;
  
  //to store current_summand
  int current_summand = 0;
  int last_summand = 0;
  
  //the make up of n; will skip 0
  //updated to equality to cater for case when n==1
  for (int c=1;c<=n;c++){
	  //std::cout<< "c=" << c << std::endl;
	  last_summand = summands.empty() ? 0: summands.back();
	  
	  //init next_summand
	  current_summand = c;
	  //additional break out condition
	  if (remainingsum == 0) break;
	  if (remainingsum <= 2* current_summand) {
		  current_summand = remainingsum;
	  }
	  
	  //update remainingsum
	  remainingsum -= current_summand;
	  
	  //push next_summand
	  summands.push_back(current_summand);
  }
  
  
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
