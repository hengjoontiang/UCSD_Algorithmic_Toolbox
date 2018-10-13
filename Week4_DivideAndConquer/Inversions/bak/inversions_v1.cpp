#include <iostream>
#include <vector>
#include <assert.h>

using std::vector;
//Pre: 0<= left <= mid <right < v.size() , and
//     v[left..mid],v[mid+1..right] are both sorted increasingly
//Post: v[left..right] is now sorted
long long merge(vector<int> &A,vector<int> &B, vector<int> &C){
	int left = B.size();
	int right = C.size();
	
	int n= right + left;
	/*
	std::cout <<"left=" << left << std::endl;
	std::cout <<"right=" << right << std::endl;
	std::cout <<"n=" << n << std::endl;*/
	vector<int> aux(n);
	int i = 0;
	int j = 0;
	
	int k = 0;
	long long num_inversions = 0;
	while (i < left and j < right) {
		if (B[i] <= C[j]) {
			aux[k] = B[i];
			++i;
		}else {
			num_inversions ++;
			aux[k] = C[j]; 
			++j;
		}
		++k;
	}
	/*
	std::cout << "just after while aux" << std::endl;
		for (size_t aux_j = 0; aux_j < aux.size(); aux_j++) {
			std::cout << aux[aux_j] << std::endl;
		}
	std::cout <<"i=" << i << std::endl;
	std::cout <<"j=" << j << std::endl;
	std::cout <<"k=" << k << std::endl;
	*/
	while (i< left) {
		//num_inversions ++;
		aux[k] = B[i];
		++k;
		++i;
	}
	while (j< right) {
		num_inversions ++;
		aux[k] = C[j];
		++k;
		++j;
	}
	/*
	std::cout <<"i=" << i << std::endl;
	std::cout <<"j=" << j << std::endl;
	std::cout <<"k=" << k << std::endl;
	std::cout << "aux" << std::endl;
		for (size_t aux_j = 0; aux_j < aux.size(); aux_j++) {
			std::cout << aux[aux_j] << std::endl;
		}
	*/
	//reshuffle the vector
	int l = 0;
	for (l = 0 ; l< A.size() ; l++) {
		A[l] = aux[l];
	}
	return num_inversions;
	
}
//Pre: 0 <= left <= right < v.size()
//Post: v[left..right] has been sorted increasingly
long long merge_sort(vector<int>& A){
	int left = 0;
	int right = A.size();
	long long num_inversions = 0;
	//check stopping condition
	if (left < right) {
		if (right == 1) { 
			return 0; //no need to proceed further
		}
		int m = (left + right) /2;
		//std::cout << "a_left.." <<std::endl;
		vector<int> a_left(A.cbegin()+left,A.cbegin()+m);
		//std::cout << "a_right.." <<std::endl;
		vector<int> a_right(A.cbegin()+m,A.cbegin()+right);
		//std::cout << "a_left.size()=" <<a_left.size() << std::endl;
		//std::cout << "a_right.size()=" <<a_right.size() << std::endl;
		//assert( a_left.size() == a_right.size());
		
		num_inversions += merge_sort(a_left);
		//std::cout << "merge_sort(a_right).." <<std::endl;
		num_inversions += merge_sort(a_right);
		//std::cout << "merge(A).." <<std::endl;
		num_inversions += merge(A,a_left,a_right);
	}
	return num_inversions;
}

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  //write your code here
  return number_of_inversions;
}
long long get_number_of_inversions_v2(vector<int> &a) {
  long long number_of_inversions = 0;
  number_of_inversions = merge_sort(a);
  //write your code here
  return number_of_inversions;
}
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  /*vector<int> b(a.size());
  int left = 0;
  int right = a.size();
   if (left < right) {
		int m = (left + right) /2;
		vector<int> a_left(a.cbegin()+left,a.cbegin()+m);
		vector<int> a_right(a.cbegin()+m,a.cbegin()+right);
		
		//assert (a_left.size() == a_right.size());
		//check ths split
		/*
		std::cout << "a_left" << std::endl;
		for (size_t a_left_j = 0; a_left_j < a_left.size(); a_left_j++) {
			std::cout << a_left[a_left_j] << std::endl;
		}
		std::cout << "a_right" << std::endl;
		for (size_t a_right_j = 0; a_right_j < a_right.size(); a_right_j++) {
			std::cout << a_right[a_right_j] << std::endl;
		}
		merge_sort(a);
  }*/
  long long number_of_inversions = get_number_of_inversions_v2(a);
  /*std::cout <<"merged a=" << std::endl;
  for (size_t j = 0; j < a.size(); j++) {
    std::cout << a[j] << std::endl;
  }*/
  std::cout <<"number_of_inversions=" <<number_of_inversions << std::endl;
  //std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
}
