#include <iostream>
#include <vector>
//modified by Joon Tiang 20190220 to use pass by ptr
using std::string;

int min3(int num1,int num2, int num3){
	return std::min(std::min(num1,num2),num3);
}
//m ,n indicate the length of str1,str2 respectively
//hence in terms of indices, we will need m-1,n-1
int lcs3(const std::vector<int>& a, const std::vector<int>& b,  const std::vector<int>& c,int m,int n,int o, int *** dist) {
	
  if (dist[m][n][o]!= -1) return dist[m][n][o];
  //since first string of len m is empty, we will need to remove n characters from second string
  if (m == 0) {
	  return dist[m][n][o]=0;
  }
  //since second string of len n is empty, we will need to remove m characters from first string
  if (n == 0) {
	  return dist[m][n][o]=0;
  }
   if (o == 0) {
	  return dist[m][n][o]=0;
  }
  //when last char is the same, it will depend on the rest of the string
  if (a[m-1]==b[n-1] && b[n-1]==c[o-1]) {
	   return dist[m][n][o]= 1+lcs3(a,b,c,m-1,n-1,o-1,dist);
  }
  
  //when last char is not the same, it is +1 , with max of prev operations
  //write your code here
  int dist_n = 0;
  dist_n = lcs3(a,b,c,m,n-1,o,dist);
  
  int dist_m = 0;
  dist_m = lcs3(a,b,c,m-1,n,o,dist);
  
  int dist_o = 0;
  dist_o = lcs3(a,b,c,m,n,o-1,dist);
  
  //In LCS, we do not have the concept of replacement
  /*
  int dist_replace = 0;
  if (dist[m-1][n-1] != -1) { 
	  dist_replace = dist[m-1][n-1];
  }else {
	  dist_replace = dist[m-1][n-1] = edit_distance(str1,str2,m-1,n-1,dist);
  }*/
  
  //we want the longest, hence we get max
  return dist[m][n][o] = std::max(std::max(dist_m,dist_n),dist_o);
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
  
  size_t o;
  std::cin >> o;
  std::vector<int> c(o);
  for (size_t i = 0; i < o; i++) {
    std::cin >> c[i];
  }


  int ***dist=new int**[m+1];
  for (int i=0;i<=m;i++) {
	  dist[i] = new int*[n+1];
	  for (int j=0;j<=n;j++) {
		  dist[i][j] = new int[o+1];
	  }
  }
  //init
  for (int index_m = 0;index_m<= m; index_m++) 
	for (int index_n = 0;index_n<= n; index_n++) 
		for (int index_o = 0;index_o<= o; index_o++) 
			dist[index_m][index_n][index_o] = -1;
		
  //build it up
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
		for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
			lcs3(a, b,c, build_index_m,build_index_n,0,dist); 
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
		for (int build_index_o = 0 ;build_index_o <= o; build_index_o++)
			lcs3(a, b,c, build_index_m,0,build_index_o,dist);
  for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
		for (int build_index_o = 0 ;build_index_o <= o; build_index_o++)
			lcs3(a, b,c, 0,build_index_n,build_index_o,dist);
 
  for (int build_index_m = 0 ;build_index_m <= m; build_index_m++)
	   for (int build_index_n = 0 ;build_index_n <= n; build_index_n++)
			for (int build_index_o = 0 ;build_index_o <= o; build_index_o++)
				lcs3(a, b,c, build_index_m,build_index_n,build_index_o,dist); 
  std::cout << lcs3(a, b,c, m ,n,o,dist) << std::endl;
  
  //deallocate memory
  for (int i=0;i<=m;i++) {
	  
	  for (int j=0;j<=n;j++) {
		  delete[] dist[i][j];
	  }
	  delete[] dist[i];
  }
  delete[] dist;
  
  return 0;
}

int main(){
	main_body();
}
