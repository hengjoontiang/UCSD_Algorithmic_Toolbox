#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>

using std::vector;

int binary_search_recur_version(const vector<int> &a, int numberToFind,int leftmost){
  //check when we are left with just one element
  //stopping condition
  std::cout << "a.size()="<< a.size() << std::endl;
  std::cout << "numberToFind="<< numberToFind << std::endl;
  if (a.size() <= 1) {
	  if (a[0] == numberToFind )
		return leftmost + 0; //found, index=leftmost
	  else
		return -1; //not found
  }	
  int left = 0, right = a.size(); 
  //write your code here
  int mid = floor((left + right - 1) /2); //right is end + 1
  std::cout << "mid" <<mid << std::endl;
  
  //when a.size() > 1
  //match , we return the index mid
  std::cout << "a[mid]="<< a[mid]<< std::endl;
  if ( numberToFind == a[mid] ) return mid + leftmost;
  //no match, we check if we should go left or right
  if ( numberToFind < a[mid] ) {
 	left = 0;
    right = mid;	 //always 1 element aafter the last; not inclusive
    //check right and adjust if they are equal
    if (left == right) {
		right +=1 ;
	}
    //leftmost += left;
	std::cout << "x < a[mid]" <<std::endl;
	std::cout << "left=" << left <<std::endl;
	std::cout << "right=" << right <<std::endl;
	std::cout << "leftmost=" << leftmost <<std::endl;
	vector<int> leftVec(&a[left], &a[right]);
	std::cout << "leftVec created =" <<std::endl;
	return binary_search_recur_version(leftVec,numberToFind,leftmost + left);
  }else { // x > a[mid]
	left = mid + 1;
    right = a.size();	//always 1 element aafter the last; not inclusive 
    //check right and adjust if they are equal
    if (left == right) {
		right +=1 ;
	}
    //leftmost += left;
	std::cout << "x > a[mid]" <<std::endl;
	std::cout << "left=" << left <<std::endl;
	std::cout << "right=" << right <<std::endl;
	std::cout << "leftmost=" << leftmost <<std::endl;
	//vector<int> leftVec(&a[0], &a[right]);
	//return binary_search(leftVec,x);
	vector<int> rightVec(&a[left], &a[right]);
	std::cout << "rightVec created =" <<std::endl;
	return binary_search_recur_version(rightVec,numberToFind,leftmost + left);
  }
}
int binary_search(const vector<int> &a, int x) {
  

  return binary_search_recur_version(a,x,0);
  
  
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}
int test_passa2(const vector<int> &a) {
  std::cout << "test_passa2" << std::endl;
  std::cout << "a.size()=" << a.size() << std::endl;
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << "i=" << a[i] << std::endl;
  }
  return -1;
}
int test_passa(const vector<int> &a) {
  std::cout << "test_passa" << std::endl;
  std::cout << "a.size()=" << a.size() << std::endl;
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << "i=" << a[i] << std::endl;
  }
  vector<int> rightVec(&a[0], &a[1]);
  test_passa2(rightVec);
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    //std::cout << linear_search(a, b[i]) << ' ';
    std::cout << binary_search(a, b[i]) << ' ';
  }
  //std::cout << binary_search(a, b[0]) << ' ';
  /*
  std::cout << "a[1]=" << a[1] << std::endl;
  std::cout << "a[2]=" << a[2] << std::endl;
  vector<int> rightVec(&a[0], &a[4]);
  test_passa(rightVec);*/
}
