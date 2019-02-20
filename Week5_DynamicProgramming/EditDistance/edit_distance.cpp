#include <iostream>
#include <string>

using std::string;

int min3(int num1,int num2, int num3){
	return std::min(std::min(num1,num2),num3);
}
//m ,n indicate the length of str1,str2 respectively
//hence in terms of indices, we will need m-1,n-1
int edit_distance(const string &str1, const string &str2, int m,int n) {
  //since first string of len m is empty, we will need to remove n characters from second string
  if (m == 0) {
	  return n;
  }
  //since second string of len n is empty, we will need to remove m characters from first string
  if (n == 0) {
	  return m;
  }
  //when last char is the same, it will depend on the rest of the string
  if (str1[m-1]==str2[n-1]) {
	  return edit_distance(str1,str2,m-1,n-1);
  }
  
  
  //write your code here
  int dist_insert = edit_distance(str1,str2,m,n-1);
  int dist_remove = edit_distance(str1,str2,m-1,n);
  int dist_replace = edit_distance(str1,str2,m-1,n-1);
  return 1 + min3(dist_insert,dist_remove,dist_replace);
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2, str1.length(),str2.length()) << std::endl;
  return 0;
}
