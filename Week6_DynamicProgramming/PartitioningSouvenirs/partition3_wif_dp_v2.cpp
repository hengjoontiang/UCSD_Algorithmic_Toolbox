#include <iostream>
#include <vector>
#include <map>
#include <string>
using std::vector;

bool partition3_dp(int W1,int W2, int W3,vector<int> &A,int numItems,std::map<std::string, int> &mapOfPart) {
 
  if (W1==0 || W2==0|| W3==0) {
	  //std::cout << "numItems = 0 || W1==0 || W2==0" << std::endl;
	  return true;
  }
  
  if (numItems < 0 ) {
	  //std::cout << "numItems < 0" << std::endl;
	  return false;
  }
  //form unique key
  std::string key = std::to_string(W1) + "_" + std::to_string(W2) + "_" + std::to_string(W3) +"_"+ std::to_string(numItems);
  
  if(mapOfPart.find(key) == mapOfPart.end()) {
  
	bool A1=false;
	if (W1 >= A[numItems-1]) {
		//std::cout << "checking W1 >= A[numItems-1]" << std::endl;
		A1=partition3_dp(W1-A[numItems-1],W2,W3,A,numItems-1,mapOfPart);
	}
	bool A2=false;
	if (!A1 && W2 >= A[numItems-1]) {
		//std::cout << "checking W2 >= A[numItems-1]" << std::endl;
		A2=partition3_dp(W1,W2-A[numItems-1],W3,A,numItems-1,mapOfPart);
	}
	bool A3=false;
	if (!A1 && !A2 && W3 >= A[numItems-1]) {
		//std::cout << "checking W2 >= A[numItems-1]" << std::endl;
		A3=partition3_dp(W1,W2,W3-A[numItems-1],A,numItems-1,mapOfPart);
	}
	mapOfPart[key] = A1 || A2 || A3;
  }
  return mapOfPart[key];
 
}
bool partition3_nondp(int W1,int W2, int W3,vector<int> &A,int numItems) {
 
  if (W1==0 || W2==0|| W3==0) {
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
	  A1=partition3_nondp(W1-A[numItems-1],W2,W3,A,numItems-1);
  }
  bool A2=false;
  if (!A1 && W2 >= A[numItems-1]) {
	  //std::cout << "checking W2 >= A[numItems-1]" << std::endl;
	  A2=partition3_nondp(W1,W2-A[numItems-1],W3,A,numItems-1);
  }
  bool A3=false;
  if (!A1 && !A2 && W3 >= A[numItems-1]) {
	  //std::cout << "checking W2 >= A[numItems-1]" << std::endl;
	  A3=partition3_nondp(W1,W2,W3-A[numItems-1],A,numItems-1);
  }
  return A1 || A2 || A3;
 
}
//uses alternative storage, non sorted map, where the key is an unique key , say defined by A1,A2,n
int main() {
  int p = 3; //number of partitions	
  	
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
  
  
  std::map<std::string, int> mapOfPart;
  
  
  int partitionSum = 0;
  //std::cout << "totalSum=" << totalSum << std::endl;
  if (totalSum % p == 0) {
	partitionSum= totalSum/p;
    //std::cout << "partitionSum=" << partitionSum << std::endl;
  
	//std::cout << partition3_nondp(partitionSum,A,n) << '\n';
	std::cout << partition3_dp(partitionSum,partitionSum,partitionSum,A,n,mapOfPart) << '\n';
  
  }else {
	std::cout << "0" << std::endl;
  }
  
  
  
}
