#include <iostream>
#include <vector>
#include <iomanip>
/* This new version will test the limits*/
using std::vector;

double get_optimal_value(long long capacity, vector<long long> weights, vector<long long> values) {
  double value = 0.0;
  long long init_size_vec = weights.size();
  //skip if the weight is zero or value is zero
  //in fact we will remove it from the original vector
  //note that index init_size_vec is not included 
  for (long long index=init_size_vec-1; index >=0; index--) {
	  if (weights[index] == 0 || values[index] == 0 ) {
		  weights.erase(weights.begin()+index);
		  values.erase(values.begin()+index);
	  }
  }


  int size_vec = weights.size();
  

  vector<double> value_weight_ratio(size_vec);
  // write your code here
  //0. create a vector<int> consisting of the ratio
  for (long long index=0; index < size_vec; index++) {
	    
		value_weight_ratio[index] = values[index] / weights[index];
		//std::cout << "values[" << index << "]=" << values[index] << std::endl;
		//std::cout << "weights[" << index << "]=" << weights[index] << std::endl;
		//std::cout << "value_weight_ratio[" << index << "]=" << value_weight_ratio[index] << std::endl;
  }
  
  //1. init the total_weight
  double total_weight = 0.0;
  while ( total_weight <= capacity ) {
	  //do take note if there are remaining weights
	  size_vec = weights.size();
	  
	  //no more weights, exit the loop
	  if (size_vec == 0) break; 
	  
	  
	  double largest_ratio = -1.0;
	  int index_largest_ratio = -1;
	  
	  for (int index=0; index < size_vec; index++) {
		  //find the ratio with largest value
		  if (value_weight_ratio[index] >= largest_ratio ) {
			  largest_ratio = value_weight_ratio[index];
			  index_largest_ratio = index;
			  //std::cout << "largest_ratio="<<largest_ratio <<std::endl;
			  //std::cout << "index_largest_ratio="<<index_largest_ratio <<std::endl;
		  }
		  
	  }
	  
	  if ( total_weight + weights[index_largest_ratio] <= capacity ){
		  //take the full amount of the values indexed by index_largest_ratio
		  value += values[index_largest_ratio];
		  total_weight += weights[index_largest_ratio];
		  
	  }else {
		  //since remain weight is less than current weight, we will only take a fraction
		  //of current weight = remain_weight
		  //std::cout << "remain_weight="<< remain_weight<<std::endl;
		  //std::cout << "weights["<< index_largest_ratio << "]="<< weights[index_largest_ratio]<<std::endl;
		  //std::cout << "values["<< index_largest_ratio << "]="<< values[index_largest_ratio]<<std::endl;
		  double weight_used = capacity - total_weight;
		  double ratio = weight_used / weights[index_largest_ratio]  ;
		  value +=  ratio * values[index_largest_ratio];
		  total_weight += weight_used;
	  }
	  
	  //remove the corresponding index with this ratio
	  weights.erase(weights.begin()+index_largest_ratio);
	  values.erase(values.begin()+index_largest_ratio);
	  value_weight_ratio.erase(value_weight_ratio.begin()+index_largest_ratio);
	  
  }
  
  //std::cout << "value=" << value << std::endl;
  return value;
}

int main() {
  long long n;
  long long capacity;
  std::cin >> n >> capacity;
  //n=1000;capacity=2000000;
  vector<long long> values(n);
  vector<long long> weights(n);
  for (long long i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
    //values[i] = 20000;
    //weights[i] = 2000000;
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  
  std::cout <<  std::fixed << std::setprecision(4) << optimal_value << std::endl;
  return 0;
}
