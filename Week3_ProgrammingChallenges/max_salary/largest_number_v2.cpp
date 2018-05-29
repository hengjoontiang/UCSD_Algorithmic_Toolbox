#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>


using std::vector;
using std::string;

/*
 * Algorithms:
 * 1.sort the numbers just as string
 * 2.When comparing numbers of different length
 * Extend the shorter number by the last number
 * 3. COmbine the numbers to form the product
 * */
 
/*
 * same number return false -> no need to change the order
 * not the same number, check len
 * same len , simply return a < b
 * not the same len
 * 	str_a, str_b
 *  len_a,len_b
 *  
 *  longer_str = len_a > len_b ? str_a : str_b;
 *  shorter_str = len_a > len_b ? str_b : str_a;
 *  longer_len= len(longer_str)
 *  shorter_len= len(shorter_str)
 *  len_diff = longer_len - shorter_len
 *  shorter_str_append = shorter_str + left(longer_str,len_diff)
 *  return len_a > len_b ? longer_str > shorter_str_append : shorter_str_append > longer_str
 * 		
 * */
bool compareByStringValue(const string str_a, const string str_b)
{
	//same number return false -> no need to change the order
	if (str_a.compare(str_b)==0) return false;
	
	//string str_a = std::to_string(a);
	//string str_b = std::to_string(b);
	//std::cout << "str_a="<<str_a<<std::endl;
	//std::cout << "str_b="<<str_b<<std::endl;
	
	int len_a = str_a.length();
	int len_b = str_b.length();
	//std::cout << "len_a="<<len_a<<std::endl;
	//std::cout << "len_b="<<len_b<<std::endl;
	
	if (len_a == len_b) {
		//std::cout << "len_a==len_b" <<std::endl;
		return str_a>str_b;
	}
	
	string longer_str = "", shorter_str="";
	if ( len_a > len_b) {
		longer_str = str_a;
		shorter_str = str_b;
		
	}else {
		longer_str = str_b;
		shorter_str = str_a;
	}
    int longer_len= longer_str.length();
	int shorter_len= shorter_str.length();
   /*
   std::cout << "longer_str="<<longer_str<<std::endl;
   std::cout << "shorter_str="<<shorter_str<<std::endl;
   std::cout << "longer_len="<<longer_len<<std::endl;
   std::cout << "shorter_len="<<shorter_len<<std::endl;
   */
   for (int u= 0 ; u < longer_len; u++){
	    char shorter_char=0,longer_char=0;
  		shorter_char = shorter_str[u >shorter_len - 1 ? shorter_len - 1: u];
		
 		longer_char = longer_str[u];
 		if (shorter_char == longer_char) continue;
 		
  		return ( len_a > len_b) ? longer_char > shorter_char : shorter_char > longer_char;
  	}
    //return str_a > str_b;
    //if matched right up to last character , we use the len to differentiate
    //we will prefer the shorter len
    //return len_a > len_b;
    return len_a < len_b;
}
bool compareByStringValue_v2(const string str_a, const string str_b)
{
	//same number return false -> no need to change the order
	if (str_a.compare(str_b)==0) return false;
	
	//string str_a = std::to_string(a);
	//string str_b = std::to_string(b);
	//std::cout << "str_a="<<str_a<<std::endl;
	//std::cout << "str_b="<<str_b<<std::endl;
	
	int len_a = str_a.length();
	int len_b = str_b.length();
	//std::cout << "len_a="<<len_a<<std::endl;
	//std::cout << "len_b="<<len_b<<std::endl;
	
	if (len_a == len_b) {
		//std::cout << "len_a==len_b" <<std::endl;
		return str_a>str_b;
	}
	
	string longer_str = "", shorter_str="";
	if ( len_a > len_b) {
		longer_str = str_a;
		shorter_str = str_b;
		
	}else {
		longer_str = str_b;
		shorter_str = str_a;
	}
    int longer_len= longer_str.length();
	int shorter_len= shorter_str.length();
   /*
   std::cout << "longer_str="<<longer_str<<std::endl;
   std::cout << "shorter_str="<<shorter_str<<std::endl;
   std::cout << "longer_len="<<longer_len<<std::endl;
   std::cout << "shorter_len="<<shorter_len<<std::endl;
   */
   int shorter_str_index = 0;
   for (int u= 0 ; u < longer_len; u++){
	    char shorter_char=0,longer_char=0;
  		shorter_char = u >shorter_len - 1 ? longer_str[shorter_str_index++]  : shorter_str[u];
		
 		longer_char = longer_str[u];
 		if (shorter_char == longer_char) continue;
 		
  		return ( len_a > len_b) ? longer_char > shorter_char : shorter_char > longer_char;
  	}
    //return str_a > str_b;
    //if matched right up to last character , we have to explictly construct the 2 strings to differentiate
    return str_a + str_b > str_b + str_a;
    //return len_a < len_b;
}
void test_compareByStringValue() {
	//test cases
	//1. same number
	std::cout << compareByStringValue("100","100") << std::endl;
	//2. diff number , but same length
	std::cout << compareByStringValue("35","55") << std::endl;
	//3. diff number, diff len
	std::cout << compareByStringValue("3","55") << std::endl;
	//4. diff number, diff len, repeat
	std::cout << compareByStringValue("553","55") << std::endl;
}
string largest_number(vector<string> a) {
  //check special case in which there is only one element in the vector
  if (a.size() == 1) return a[0];
	
  //write your code here
  std::sort(a.begin(),a.end(),compareByStringValue_v2);
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a) << std::endl;
  //test_compareByStringValue();
}
