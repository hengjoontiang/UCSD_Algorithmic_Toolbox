#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using std::vector;
//This uses the hash method
//2n ~ O(n)
int get_majority_element(vector<int> &a, int left, int right) {
  //empty
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  
  //go thru the list of elements
  //and set up the hash
  int a_size = a.size();
  std::map<int, int> mapElement;
  for (size_t i = 0; i < a_size; ++i) {
    mapElement[a[i]]++;
  }
  
  //go thru the hash and find the count that is > a_size/2
  for (auto it=mapElement.begin(); it!=mapElement.end(); ++it) {
    //std::cout << it->first<<":"<<it->second<<std::endl;
    if (it->second > a_size / 2 ) return it->first;
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
