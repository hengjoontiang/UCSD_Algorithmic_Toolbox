#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
/* This new version will test the limits*/
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double total_value = 0.0;
  int init_size_vec = weights.size();
  //skip if the weight is zero or value is zero
  //in fact we will remove it from the original vector
  //note that index init_size_vec is not included 
  for (int index=init_size_vec-1; index >=0; index--) {
	  if (weights[index] == 0 || values[index] == 0 ) {
		  weights.erase(weights.begin()+index);
		  values.erase(values.begin()+index);
	  }
  }


  int size_vec = weights.size();
  

  vector<double> value_weight_ratio(size_vec);
  // write your code here
  //0. create a vector<int> consisting of the ratio
  for (int index=0; index < size_vec; index++) {
	    //key here is the fraction, we will need to remmember to *1.0 to get a double value
		value_weight_ratio[index] = values[index] * 1.0 / weights[index];
		//std::cout << "values[" << index << "]=" << values[index] << std::endl;
		//std::cout << "weights[" << index << "]=" << weights[index] << std::endl;
		//std::cout << "value_weight_ratio[" << index << "]=" << value_weight_ratio[index] << std::endl;
  }
  
  //1. init the total_weight
  int total_weight_left = capacity;
  while ( total_weight_left > 0  ) {
	  //do take note if there are remaining weights
	  size_vec = weights.size();
	  
	  //no more weights, exit the loop
	  if (size_vec == 0) break; 
	  
	  
	  double largest_ratio = -1.0;
	  int index_largest_ratio = -1;
	  
	  //find largest ratio - best item
	  for (int index=0; index < size_vec; index++) {
		  //find the ratio with largest value
		  if (value_weight_ratio[index] >= largest_ratio ) {
			  largest_ratio = value_weight_ratio[index];
			  index_largest_ratio = index;
			  //std::cout << "largest_ratio="<<largest_ratio <<std::endl;
			  //std::cout << "index_largest_ratio="<<index_largest_ratio <<std::endl;
		  }
		  
	  }
	  
	  //current weight
	  //take all that is given weights[index_largest_ratio] or what ever is left  to hit target weight
	  int weights_largest_ratio = weights[index_largest_ratio];
	  int current_weight = std::min(total_weight_left, weights_largest_ratio);
	  total_value += current_weight * value_weight_ratio[index_largest_ratio];
	  
	  //update the weight
	  total_weight_left -= current_weight;
	  //weights[index_largest_ratio] -= current_weight;
	  //values[index_largest_ratio] -= current_weight;
	  
	  
	  //remove the corresponding index with this ratio
	  weights.erase(weights.begin()+index_largest_ratio);
	  values.erase(values.begin()+index_largest_ratio);
	  value_weight_ratio.erase(value_weight_ratio.begin()+index_largest_ratio);
	  
  }
  
  //std::cout << "value=" << value << std::endl;
  return total_value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  //n=1000;capacity=2000000;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
    //values[i] = 20000;
    //weights[i] = 2000000;
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  
  std::cout <<  std::fixed << std::setprecision(4) << optimal_value << std::endl;
  return 0;
}
