#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;
struct mid_boundary {
	int l;
	int h;
};

int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  return j;
}
//TESTED : the pivot is maintained initially at the front, and then eventually swap to the middle
//CHECKED: the boundaries
mid_boundary partition3(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  int s = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
	  //note that under both conditions; we update j
	  //but the swapping is done separately
      j++;
      
      //considered as a[i] <= x
      if (a[i] == x) {
		
		//j++;
		s++;
		swap(a[i], a[j]);
		swap(a[j], a[s]);
		//j++; 
      }else {
		  swap(a[i], a[j]);
	  }
    }
    
  }
  //include current
  int count_swap  = s + 1 - l  ; //<= j ? s : j  - l ; //find min of s and j
  //std::cout << "count_swap" << count_swap <<std::endl;
  //std::cout << "j" << j <<std::endl;
  
  for (int k = 0; k < count_swap; k++) {
	swap(a[l+k], a[j-k]);
  }
  mid_boundary m;
  m.l = j -s + 1;
  m.h = j;
  return m;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  //int m = partition3(a, l, r);
  //std::cout << "l=" << l << std::endl;
  //std::cout << "r=" << r << std::endl;
  mid_boundary m = partition3(a, l, r);
  /*for (size_t i = l; i < r; ++i) {
    std::cout << a[i] << ' ';
  }*/

  //std::cout << "m.l"<< m.l << std::endl;
  //std::cout << "m.h"<< m.h << std::endl;
  
  randomized_quick_sort(a, l, m.l - 1);
  randomized_quick_sort(a, m.h + 1, r);
}

int main() {
  int n;
  std::cin >> n;
  //if (n < 0) return 0;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  //check the workings of partition
  //partition3(a,0,a.size() - 1);
  //int j = partition3(a,0,a.size() - 1);
  //std::cout << "j=" << j <<std::endl;
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
