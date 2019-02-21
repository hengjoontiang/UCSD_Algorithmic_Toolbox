#include <iostream>
#include <vector>
//modified by Joon Tiang 20190220 to use pass by ptr
using std::string;

int min3(int num1,int num2, int num3){
	return std::min(std::min(num1,num2),num3);
}
//m ,n indicate the length of str1,str2 respectively
//hence in terms of indices, we will need m-1,n-1
int lcs2(const std::vector<int>& a, const std::vector<int>& b, int m,int n, int ** dist) {
	
  if (dist[m][n]!= -1) return dist[m][n];
  //since first string of len m is empty, we will need to remove n characters from second string
  if (m == 0) {
	  return dist[m][n]=0;
  }
  //since second string of len n is empty, we will need to remove m characters from first string
  if (n == 0) {
	  return dist[m][n]=0;
  }
  //when last char is the same, it will depend on the rest of the string
  if (a[m-1]==b[n-1]) {
	   return dist[m][n]= 1+lcs2(a,b,m-1,n-1,dist);
  }
  
  //when last char is not the same, it is +1 , with max of prev operations
  //write your code here
  int dist_insert = 0;
  dist_insert = lcs2(a,b,m,n-1, dist);
  
  int dist_remove = 0;
  dist_remove = lcs2(a,b,m-1,n,dist);
  
  //In LCS, we do not have the concept of replacement
  /*
  int dist_replace = 0;
  if (dist[m-1][n-1] != -1) { 
	  dist_replace = dist[m-1][n-1];
  }else {
	  dist_replace = dist[m-1][n-1] = edit_distance(str1,str2,m-1,n-1,dist);
  }*/
  
  //we want the longest, hence we get max
  return dist[m][n] = std::max(dist_insert,dist_remove);
}

int lcs2_non_dp(const std::vector<int>& a, const std::vector<int>& b, int m,int n) {
	
  
  //since first string of len m is empty, we will need to remove n characters from second string
  if (m == 0) {
	  return 0;
  }
  //since second string of len n is empty, we will need to remove m characters from first string
  if (n == 0) {
	  return 0;
  }
  //when last char is the same, it will depend on the rest of the string
  if (a[m-1]==b[n-1]) {
	   return 1+lcs2_non_dp(a,b,m-1,n-1);
  }
  
  //when last char is not the same, it is +1 , with max of prev operations
  //write your code here
  int dist_insert = 0;
  dist_insert = lcs2_non_dp(a,b,m,n-1);
  
  int dist_remove = 0;
  dist_remove = lcs2_non_dp(a,b,m-1,n);
  
  //In LCS, we do not have the concept of replacement
  /*
  int dist_replace = 0;
  if (dist[m-1][n-1] != -1) { 
	  dist_replace = dist[m-1][n-1];
  }else {
	  dist_replace = dist[m-1][n-1] = edit_distance(str1,str2,m-1,n-1,dist);
  }*/
  
  //we want the longest, hence we get max
  return std::max(dist_insert,dist_remove);
}

int main_body() {
  size_t m;
  std::cin >> m;
  std::vector<int> a(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> a[i];
  }

  size_t n;
  std::cin >> n;
  std::vector<int> b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  int **dist=new int*[m+1];
  for (int i=0;i<=m;i++) {
	  dist[i] = new int[n+1];
  }
  //init
  for (int index_m = 0;index_m<= m; index_m++) 
	for (int index_n = 0;index_n<= n; index_n++) 
		dist[index_m][index_n] = -1;
		
  //build it up
  /*
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
	    lcs2(a, b,build_index_m ,0,dist); 
		
  for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
		lcs2(a, b,0 ,build_index_n,dist); 
*/	
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
	   for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
		lcs2(a, b,build_index_m,build_index_n,dist); 
  std::cout << lcs2(a, b,m ,n,dist) << std::endl;
  return 0;
}
int main_test(){
  size_t m;
  std::cin >> m;
  std::vector<int> a(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> a[i];
  }
  size_t n;
  std::cin >> n;
  std::vector<int> b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }

  
  std::cout << lcs2_non_dp(a, b,m ,n) << std::endl;
  return 0;
}
int main(){
	main_body();
}
