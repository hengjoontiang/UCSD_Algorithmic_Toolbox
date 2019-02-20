#include <iostream>
#include <string>

using std::string;

int min3(int num1,int num2, int num3){
	return std::min(std::min(num1,num2),num3);
}
//m ,n indicate the length of str1,str2 respectively
//hence in terms of indices, we will need m-1,n-1
int edit_distance(const string &str1, const string &str2, int m,int n, int [][] dist & ) {
	
  if (dist[m][n]!= -1) return dist[m][n];
  //since first string of len m is empty, we will need to remove n characters from second string
  if (m == 0) {
	  return dist[0][n]=n;
  }
  //since second string of len n is empty, we will need to remove m characters from first string
  if (n == 0) {
	  return dist[m][0]=m;
  }
  //when last char is the same, it will depend on the rest of the string
  if (str1[m-1]==str2[n-1]) {
	  if (dist[m-1][n-1] != -1) {
		  return dist[m-1][n-1];
	  }else {
		  return dist[m-1][n-1] = edit_distance(str1,str2,m-1,n-1,dist);
	  }
  }
  
  
  //write your code here
  int dist_insert = 0;
  if (dist[m][n-1] != -1) {
	  dist_insert = dist[m][n-1];
  }else {
	  dist_insert = dist[m][n-1] = edit_distance(str1,str2,m,n-1, dist);
  }
  int dist_remove = 0;
  if (dist[m-1][n] != -1) {
	  dist_remove = dist[m-1][n];
  }else {
	  dist_remove = dist[m-1][n]=edit_distance(str1,str2,m-1,n,dist);
  }
  int dist_replace = 0;
  if (dist[m-1][n-1] != -1) { 
	  dist_replace = dist[m-1][n-1];
  }else {
	  dist_replace = dist[m-1][n-1] = edit_distance(str1,str2,m-1,n-1,dist);
  }
  return dist[m][n] = 1 + min3(dist_insert,dist_remove,dist_replace,dist);
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  int m = str1.length();
  int n = str2.length();
  int dist[m+1][n+1];
  //init
  for (int index_m = 0;index_m<= m; index_m++) 
	for (int index_n = 0;index_n<= n; index_n++) 
		dist[index_m][index_n] = -1;
		
  //build it up
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
	    edit_distance(str1, str2,build_index_m ,0,dist); 
		
  for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
		edit_distance(str1, str2,0 ,build_index_n,dist); 
		
  for (int build_index_m = 1 ;build_index_m <= m; build_index_m++)
	   for (int build_index_n = 1 ;build_index_n <= n; build_index_n++)
		edit_distance(str1, str2,build_index_m,build_index_n,dist); 
  std::cout << edit_distance(str1, str2,m ,n,dist) << std::endl;
  return 0;
}
