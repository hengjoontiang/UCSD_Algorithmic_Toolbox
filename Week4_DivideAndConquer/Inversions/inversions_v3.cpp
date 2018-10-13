#include <iostream>
#include <vector>
#include <assert.h>

using std::vector;


long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  //write your code here
  vector<int> aux(right - left);
  int i = left;
  int j = ave;
	
  int k = 0;
  
  //compare the 2 halves of a
  while (i < ave and j < right) {
		if (a[i] <= a[j]) {
			aux[k] = a[i];
			++i;
		}else {
			//see https://www.geeksforgeeks.org/counting-inversions/
			number_of_inversions += (ave - i);
			aux[k] = a[j]; 
			++j;
		}
		++k;
  }
  while (i< ave) {
		//number_of_inversions ++;
		aux[k] = a[i];
		++k;
		++i;
  }
  while (j< right) {
		//number_of_inversions ++;
		aux[k] = a[j];
		++k;
		++j;
  }
	
	//reshuffle the vector
	
	for (int l = 0; l< aux.size() ; l++) {
		a[left + l] = aux[l];
	}
  
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
   /*
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
  //long long number_of_inversions = get_number_of_inversions(a);
  /*std::cout <<"merged a=" << std::endl;
  for (size_t j = 0; j < a.size(); j++) {
    std::cout << a[j] << std::endl;
  }*/
  //std::cout <<"number_of_inversions=" <<number_of_inversions << std::endl;
  std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
  /*std::cout <<"after sorting..."<<std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << a[i] << std::endl;
  }*/
}
