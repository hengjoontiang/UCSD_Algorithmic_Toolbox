#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  //empty
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  //do a sort
  std::sort(&a[left],&a[right]);
  //having sorted, we will go through it once
  int current_max_element = a[left];
  int size_a = right - left;
  int current_max_count = 1; //a[0]
  int max_element = current_max_element;
  int max_count = current_max_count;
  for (int u = 1;u < size_a ; u++){
	  if (a[left+u] == a[left+u-1]) {
		  current_max_count++;
		  
	  }
	  if (a[left+u] != a[left+u-1]) {
		  
		  if (current_max_count > max_count ) {
			  //update the max count and max element if more, else simply drop them
			  max_count = current_max_count;
			  max_element = current_max_element;
		  }
		  //reset the current max count and current max element
		  current_max_count = 1;
		  current_max_element = a[left+u];
	  }
	  
  }
  //do a last comparison after end of element
  if (current_max_count > max_count ) {
			  //update the max count and max element if more, else simply drop them
			  max_count = current_max_count;
			  max_element = current_max_element;
  }
  /*
  std::cout << "max_count="<<max_count<< std::endl;
  std::cout << "max_element="<<max_element<< std::endl;
  std::cout << "left="<<left<< std::endl;
  std::cout << "right="<<right<< std::endl;
  std::cout << "size_a="<<size_a<< std::endl;*/
  if (max_count > size_a / 2) {
	  return max_element;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  //int max_element = get_majority_element(a, 0, a.size()) ;
  //std::cout << "max_element="<<max_element << std::endl;
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
