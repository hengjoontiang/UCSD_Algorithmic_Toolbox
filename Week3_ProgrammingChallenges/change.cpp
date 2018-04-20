#include <iostream>
//define the array for monetary denominations
//sorted in decreasing order to facilitate greedy algo
int denom[]={10,5,1};
int get_change(int m) {
  int n = 0; //counts no of coins used
  int remainder = m;
  int index = 0; //denotes denom index
  //write your code here
  while (remainder > 0) {
	  
	  int curr_denom = denom[index];
	  if ( remainder >= curr_denom) {
		//increase n when a denom is being used
		//std::cout<<"current_denom used="<<curr_denom <<std::endl;
		int no_curr_denom = remainder / curr_denom ;
		//std::cout<<"no_curr_denom used="<<no_curr_denom <<std::endl;
		n +=  no_curr_denom ;//denotes the number of coins of denom[index] being used
		remainder = remainder % curr_denom; //adjusts remaining amount 
		
		
	  }
	  //note that regardless, we move on to next denom
	  index++; //set the denom to next  in line
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
