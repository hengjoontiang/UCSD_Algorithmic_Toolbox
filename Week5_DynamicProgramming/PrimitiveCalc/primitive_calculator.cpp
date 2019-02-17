#include <iostream>
#include <vector>
#include <algorithm>


/*
Primitive Calculator:                                                                                
    Failed case #3/16: (Wrong answer)                                                                    
    got: 15 expected: 14                                                                                 
    Input:                                                                                               
    96234                                                                                                
                                                                                                         
    Your output:                                                                                         
    15                                                                                                   
    1 2 4 5 10 11 22 66 198 594 1782 5346 16038 16039 32078 96234                                        
    Correct output:                                                                                      
    14                                                                                                   
    1 3 9 10 11 22 66 198 594 1782 5346 16038 16039 32078 96234                                          
     (Time used: 0.00/1.50, memory used: 3219456/536870912.)    

 * */
using std::vector;

vector<int> optimal_sequence(int n) {
  std::vector<int> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> sequence = optimal_sequence(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
