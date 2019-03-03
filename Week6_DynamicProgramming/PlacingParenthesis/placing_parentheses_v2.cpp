#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <limits>

using std::vector;
using std::string;
using std::max;
using std::min;

const long MAX_LONG = std::numeric_limits<long>::max();
const long MIN_LONG = -MAX_LONG;
long maxOf5(int max,int a,int b,int c,int d) {
	return std::max(std::max(std::max(a,b),std::max(c,d)), max);
}
long minOf5(int min,int a,int b,int c,int d) {
	return std::min(std::min(std::min(a,b),std::min(c,d)),min);
}
long long eval(long long a, long long b, char op) {
  if (op == '*') {
    return a * b;
  } else if (op == '+') {
    return a + b;
  } else if (op == '-') {
    return a - b;
  } else {
    assert(0);
  }
}

//utils to help in translating the indices from 1-based into the the normal zero-based
//also help in getting between operators and the numbers
class NumberOp {
	private:
		string exp;
	public:
		NumberOp(const string &expr) {
			exp = std::string(expr);
			//std::cout<<"constructor check exp=" << exp << std::endl;
		}
		//sn        0 1 2 3 4
		//          1 + 4 - 2
		//index     1   2   3
		//<= n
		char getNumber(int index) {
			//std::cout<<"getNumber check exp=" << exp << std::endl;
			//std::cout<<"getNumber check indices=" << 2*(index-1) << std::endl;
			//std::cout<<"getNumber check value=" << exp[2*(index-1)] << std::endl;
			return exp[2*(index-1)];
		}
		//<= n-1
		char getOperator(int index) {
			//std::cout<<"getOperator check exp=" << exp << std::endl;
			//std::cout<<"getOperator check indices=" << 2*(index-1)+1 << std::endl;
			//std::cout<<"getOperator check value=" << exp[2*(index-1)+1] << std::endl;
			return exp[2*(index-1)+1];
		}
};
class MinMax {
	private:
	    int n;
		long **MinMaxArray; //to be created during the constructor
							//deallocated in the destructor
	//inititialize the matrix, and provides functionality to access its elements in 1 -based manner
	public:
		MinMax(const int numNumbers) {
			n = numNumbers;
			MinMaxArray = new long*[n];
			for (int i=0;i<n;i++)
				MinMaxArray[i] = new long[n];
		}
		~MinMax() {
			//we delete in the opposite manner at which we construct
			for (int i=0;i<n;i++)
				delete[] MinMaxArray[i];
			delete[] MinMaxArray;
		}
		//i<=n, j<=n
		long & getElement(int i,int j) {
			return MinMaxArray[i-1][j-1];
		}
};


//question is the MinMax
/*
 * min <-- +INF
 * max <-- -INF
 * for k from i to j-1:
 * 	a <-- M(i,k) op(k) M(k+1,j)
 *  b <-- M(i,k) op(k) m(k+1,j)
 *  c <-- m(i,k) op(k) M(k+1,j)
 *  d <-- m(i,k) op(k) m(k+1,j)
 *  min <-- min(min,a,b,c,d)
 *  max <-- max(max,a,b,c,d)
 * 
 * return  m(i,j) = min, M(i,j) = max
 * */
long MinAndMax(int i, int j, MinMax & minclass,MinMax & maxclass ,NumberOp& op) {
	long min = MAX_LONG;
	long max = MIN_LONG;
	//std::cout <<"start MinAndMax" <<std::endl;
	for (int k=i;k<= j-1;k++){
		//std::cout<< "i="<< i << std::endl;
		//std::cout<< "k="<< k << std::endl;
		//std::cout<< "maxclass.getElement(i,k)="<< maxclass.getElement(i,k) << std::endl;
		//std::cout<< "maxclass.getElement(k+1,j)="<< maxclass.getElement(k+1,j)  << std::endl;
		//std::cout<< "op.getOperator(k)="<< op.getOperator(k)  << std::endl;
		long a = eval(maxclass.getElement(i,k) ,maxclass.getElement(k+1,j) ,op.getOperator(k));
		//std::cout << "max max a=" << a << std::endl;
		long b = eval(maxclass.getElement(i,k) ,minclass.getElement(k+1,j) ,op.getOperator(k));
		//std::cout << "max min b=" << a << std::endl;
		long c = eval(minclass.getElement(i,k) ,maxclass.getElement(k+1,j) ,op.getOperator(k));
		//std::cout << "min max c=" << a << std::endl;
		long d = eval(minclass.getElement(i,k) ,minclass.getElement(k+1,j) ,op.getOperator(k));
		//std::cout << "min min d=" << a << std::endl;
		min = minOf5(min,a,b,c,d);
		max = maxOf5(max,a,b,c,d);
	}
	minclass.getElement(i,j) = min;
	maxclass.getElement(i,j) = max;
}
/* 
 * for i from 1 to n:
 * 		m(i,i) <-- di, M(i,i) <- di
 * for s from 1 to n-1:
 * 		for i from 1 to n-s:
 *          j <-- i+s
 * 			m(i,j), M(i,j) <-- MinAndMax(i,j)
 * return M(1,n)
 * */
long long get_maximum_value(const string &exp) {
  //write your code here
  //1.parse the string into numbers and operators
  //num1,op1,num2,op2,...num(n-1),op(n-1),num(n)
  long n = (exp.size() - 1)/2;
  //std::cout << "n=" << n <<std::endl;
  NumberOp nop(exp);
  //std::cout << "created NumberOp" << std::endl;
  MinMax max_array(n+1);
  MinMax min_array(n+1);
  for (int i =1;i<= n+1 ; i++) {
	  max_array.getElement(i,i) = nop.getNumber(i)-'0';
	  min_array.getElement(i,i) = nop.getNumber(i)-'0';
  }
  
  //std::cout << "created MinMax" << std::endl;
  for (int s= 1 ;s <= n ;s++) 
 		for (int i =1 ;i<= n+1-s; i++) {
			int j = i+s;
			MinAndMax(i,j, min_array,max_array, nop);
		}
  long results = max_array.getElement(1,n+1);
  return results;
}
int main_test_NumberOpAndMinMax(){
	string s;
    std::cin >> s;
    long n = (s.size() - 1)/2;
    std::cout << "n=" << n <<std::endl;
    NumberOp nop(s);
    std::cout << "created NumberOp" << std::endl;
    //1-based
    for (int u=1;u<=n;u++){
		std::cout << "num=" << nop.getNumber(u) << std::endl;
		std::cout << "op=" << nop.getOperator(u) << std::endl;
	}
	//print last number
	std::cout << "num=" << nop.getNumber(n+1) << std::endl;
	
	
	//back to basics - ok 1+2*3
	/*
	for (int u1=0;u1<s.size();u1++){
		std::cout << "s=" << s[u1] << std::endl;
		
	}*/
	MinMax max_array(n+1); //n is size of number with op, last number + 1
    MinMax min_array(n+1);
    for (int i =1;i<= n +1; i++) {
	  std::cout << "assign maxmin_array.getElement(,)" << i << "=" << nop.getNumber(i) << std::endl;
	  max_array.getElement(i,i) = nop.getNumber(i) - '0';
	  min_array.getElement(i,i) = nop.getNumber(i) - '0';
    }
    //walk through minmax
    std::cout << "check max" << std::endl;
    for (int i =1;i<= n +1; i++) {
		for (int j =1;j<= n +1; j++) {
				std::cout << "i=" << i << std::endl;
				std::cout << "j=" << j << std::endl;
				std::cout << "max_array.getElement(i,j)=" << max_array.getElement(i,j) << std::endl;
				
		}
    }
   
}

int main_body() {
  string s;
  std::cin >> s;
  std::cout << get_maximum_value(s) << '\n';
}

int main_test(){
	main_test_NumberOpAndMinMax();
}

int main() {
	main_body();
}
