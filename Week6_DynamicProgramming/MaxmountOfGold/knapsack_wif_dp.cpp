#include <iostream>
#include <vector>

using std::vector;

int optimal_weight_greedy(int W, const vector<int> &w) {
  //write your code here
  int current_weight = 0;
  for (size_t i = 0; i < w.size(); ++i) {
    if (current_weight + w[i] <= W) {
      current_weight += w[i];
    }
  }
  return current_weight;
}

//returns the total value
int optimal_weight_dp(int W, const vector<int> &w, int** value,int numItems) {
  //write your code here
  
  //std::cout << "value["<<numItems-1<<"]="<<value[numItems-1]<<std::endl;
  if (W==0) {
	  
	  return value[W][numItems] = 0;
  }
  if (numItems == 0 ) {
	  
	  return value[W][0] = 0;
  }
  
  //would need to do after to guard against numItems==0, and W==0
  if (value[W][numItems] != -1) {
	  //std::cout << "value[W][numItems] != -1" << std::endl;
	  //std::cout << "value["<<W<<"]"<<"[" << numItems << "]=" <<  value[W][numItems]  << std::endl;
	  return value[W][numItems] ;
  }
  if (w[numItems-1] > W ) { //current item is over the target weight W, we skip the item
	  //std::cout << "W=" << W << std::endl;
	  //std::cout << "w[numItems-1] > W" << std::endl;
	  //std::cout << "w[numItems-1]=" << w[numItems-1] << std::endl;
	  
	  
	  return value[W][numItems] = optimal_weight_dp(W,w,value,numItems-1);
  }
  
  
  return value[W][numItems] =std::max(w[numItems-1]+optimal_weight_dp(W-w[numItems-1],w,value,numItems-1),  optimal_weight_dp(W,w,value,numItems-1));
}
int optimal_weight_nondp(int W, const vector<int> &w, int numItems) {
  //write your code here
  
  if (numItems == 0 || W==0) {
	  //std::cout << "numItems==0 || W==0" << std::endl;
	  return 0;
  }
  
  if (w[numItems-1] > W ) { //current item is over the target weight W, we skip the item
	  //std::cout << "W=" << W << std::endl;
	  //std::cout << "w[numItems-1] > W" << std::endl;
	  //std::cout << "w[numItems-1]=" << w[numItems-1] << std::endl;
	  return optimal_weight_nondp(W,w,numItems-1);
  }
  
  return std::max(w[numItems-1]+optimal_weight_nondp(W-w[numItems-1],w,numItems-1),  optimal_weight_nondp(W,w,numItems-1));
}
int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  
  //we will need a 2 d array for dp purpose
  int ** value = new int*[W+1];
  for (int i=0;i<=W;i++){
	  value[i] = new int[n+1];
  }
  
  for (int i=0;i<=W;i++){
	  for (int j=0;j<=n;j++){
		  value[i][j]=-1;
	  }
  }
  //std::cout << optimal_weight_greedy(W, w) << '\n';
  //build it up
  
  //std::cout << "optimal weight=" << optimal_weight_nondp(W, w,n) << '\n';
  for (int i=0;i<=W;i++){
	  for (int j=0;j<=n;j++){
		  optimal_weight_dp(i, w,value,j);
	  }
  }
  std::cout << optimal_weight_dp(W, w,value,n) << '\n';
  
  //do deallocation
  for (int i=0;i<=W;i++){
	  delete[] value[i];
  }
  delete[] value;
}
