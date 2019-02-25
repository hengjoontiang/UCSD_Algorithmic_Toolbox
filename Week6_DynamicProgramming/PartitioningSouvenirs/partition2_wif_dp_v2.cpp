#include <iostream>
#include <vector>

using std::vector;


bool partition2_nondp(int W1,int W2, vector<int> &A,int numItems) {
 
  if (W1==0 || W2==0) {
	  //std::cout << "numItems = 0 || W1==0 || W2==0" << std::endl;
	  return true;
  }
  
  if (numItems < 0 ) {
	  //std::cout << "numItems < 0" << std::endl;
	  return false;
  }
  
  bool A1=false;
  if (W1 >= A[numItems-1]) {
	  //std::cout << "checking W1 >= A[numItems-1]" << std::endl;
	  A1=partition2_nondp(W1-A[numItems-1],W2,A,numItems-1);
  }
  bool A2=false;
  if (!A1 && W2 >= A[numItems-1]) {
	  //std::cout << "checking W2 >= A[numItems-1]" << std::endl;
	  A2=partition2_nondp(W1,W2-A[numItems-1],A,numItems-1);
  }
  
  return A1 || A2;
 
}
//uses alternative storage, non sorted map, where the key is an unique key , say defined by A1,A2,n
int main() {
  int p = 2; //number of partitions	
  	
  int n;
  std::cin >> n;
  vector<int> A(n);
  int totalSum = 0;
  for (size_t i = 0; i < A.size(); ++i) {
	int currNum;
    std::cin >> currNum ;
    A[i] =currNum ;
    
    totalSum += currNum;
  }
  
  
  
  
  
  int partitionSum = 0;
  //std::cout << "totalSum=" << totalSum << std::endl;
  if (totalSum % p == 0) {
	partitionSum= totalSum/p;
    //std::cout << "partitionSum=" << partitionSum << std::endl;
  
	//std::cout << partition3_nondp(partitionSum,A,n) << '\n';
	std::cout << partition2_nondp(partitionSum,partitionSum,A,n) << '\n';
  
  }else {
	std::cout << "0" << std::endl;
  }
  
  
  
}
