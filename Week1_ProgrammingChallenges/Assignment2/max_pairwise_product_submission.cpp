
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int64_t MaxPairwiseProduct(const vector<int>& numbers) {
  int64_t result = 0;
  int n = numbers.size();
  int largest = 0;
  int second_largest = 0;
  for (int i = 0; i < n; ++i) {
    
      if (numbers[i] >= largest) {
        //will need to override largest
        //first we will need to assign to second largest
        second_largest = largest;
        //override largest
        largest  = numbers[i] ;
      }else {
		  //need to update second largest
		  //check for second largest
		  if (numbers[i] >= second_largest) {
			  second_largest = numbers[i];
		  }
	  }
      //cout <<"i="<<i<<std::endl;
      //cout << "largest="<<largest<<std::endl;
      //cout << "second_largest="<<second_largest<<std::endl;
  }
  
  result = int64_t(largest) * int64_t(second_largest);
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int64_t result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
