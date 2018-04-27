#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  int size_vec = weights.size();

  vector<double> value_weight_ratio(size_vec);
  // write your code here
  //0. create a vector<int> consisting of the ratio
  for (int index=0; index < size_vec; index++) {
		value_weight_ratio[index] = values[index] / weights[index];
		std::cout << "values[" << index << "]=" << values[index] << std::endl;
		std::cout << "weights[" << index << "]=" << weights[index] << std::endl;
		std::cout << "value_weight_ratio[" << index << "]=" << value_weight_ratio[index] << std::endl;
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
