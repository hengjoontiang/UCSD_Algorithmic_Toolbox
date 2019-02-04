#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cassert>
#include <math.h>
/*
 * In this new version ,output cnt is store as map 
 * this is so because the points may not be sorted, as such when we do the sorting, it loses its original order
 * 
 * */
/*
 * 2 3
 * 2 line segments, 3 points to check
 * line seg #1 = 0 5
 * line seg #2 = 7 10
 * points to check = 1 6 11
 * 
 * start = { 0 , 5 }
 * ends  = { 7, 10 }
 * 
 * total = 0
 * 0 +1 ; total = 1
 * 5 -1 ; total = 0
 * 7 +1 ; total = 1
 * 10 -1 ; total = 0
 * */

using std::vector;
using std::pair;
using std::sort;

void getLineIntersections(vector<long> starts, vector<long> ends, std::vector<std::pair<long,long>> &aux);
void checkAndUpdateOrAddKeyValuePair(std::pair<long,long>& keyValuePair,std::vector<std::pair<long,long>>& aux);
long getAuxIntersectionsIndexWifCurrentPoint(long currPoint, std::vector<std::pair<long,long>>& aux);
void getPointsIntersectionCntWifOverlap(vector<long> & points,std::vector<std::pair<long,long>> & aux, std::map<long,long>  & cnt );
std::vector<long>  fast_count_segments_v2(vector<long> starts, vector<long> ends, vector<long> points) {
  std::map<long,long>  cnt; //must not init size
  //compare the 2 halves of a
  
  
  
  std::cout << "fast_count_segments_v2 BEGIN" << std::endl;
  //sort the points
  sort(starts.begin(), starts.end());
  sort(ends.begin(), ends.end());
  std::vector<std::pair<long,long>> aux;//without initial size, let it grow dynamically; first number is the point, second number indicates the nunber of intersections
  
  getLineIntersections(starts, ends, aux);
  
  std::cout << "sorted starts,ends" << std::endl;
  
  
  std::cout << "checkAndUpdateOrAddKeyValuePair end" << std::endl;
  //make sure aux is sorted by key
  sort(aux.begin(),aux.end());	
  std::cout << "sorted aux" << std::endl;
  //already sorted in key in order
  /*
  std::cout << std::endl << "aux" << std::endl;
   for (auto& x: aux) {
    std::cout << x.first << ": " << x.second << '\n';
   }*/
  
  //write your code here
  //walk through points
  size_t s = 0; //for starts
  size_t e = 0; //for ends
  
  long numIntersections = 0;
  //std::cout << "points.size()=" << points.size() << std::endl;
  //std::cout << "cnt.size()=" << cnt.size() << std::endl;
  getPointsIntersectionCntWifOverlap(points,aux, cnt );
  //duplicate a copy of points
  /*
  vector<long> sorted_points(points); 
  sort(sorted_points.begin(), sorted_points.end());
  std::cout << "sorted sorted_points" << std::endl;
  for (size_t i = 0; i < sorted_points.size(); i++) {
	 //std::cout << "current point "<< points[i] <<std::endl;
	//walk through aux
	//check point lie between i and i+1 of aux
	long current_point = sorted_points[i];
	long aux_point = getAuxIntersectionsIndexWifCurrentPoint(current_point,aux);
	//std::cout << "current_point=" << current_point << std::endl;
	//std::cout << "aux_point=" << aux_point << std::endl;
	//check if aux_point == -1
	if (aux_point != -1) { //proceed to update the number of intersections
		std::pair<long,long> p = std::make_pair(current_point,aux[aux_point].second);
		cnt.insert(p);
	}else {
		std::pair<long,long> p= std::make_pair(current_point,0);
		cnt.insert(p);
	}
  }*/
  
  
  std::cout << "set up cnt" << std::endl;
  
  std::vector<long> return_cnt(points.size());
  for (size_t i = 0; i < points.size(); i++) {
	  
	
	
    return_cnt[i] = cnt[points[i]];
  }
  std::cout << "put cnt back into return_cnt(original order)" << std::endl;
  
  std::cout << "fast_count_segments_v2 END" << std::endl;
  return return_cnt;
}

//basic version only 1 index is being returned
//for the advanced version , it will proceed to check for coincidence of the current point with the boundary points of aux
//when it coincides, we will need to check more than 1 region
//eg 5...7, 7..7, 7..10, line segments
//when the point is 7 , then 7 will coincide with the boundary point 7 in the line segment, thus it will overlap 
void getPointsIntersectionCntWifOverlap(vector<long> & points,std::vector<std::pair<long,long>> & aux, std::map<long,long>  & cnt ) {
	//duplicate a copy of points
  vector<long> sorted_points(points); 
  sort(sorted_points.begin(), sorted_points.end());
  std::cout << "sorted sorted_points" << std::endl;
  size_t sorted_points_len = sorted_points.size();
  for (size_t i = 0; i < sorted_points_len; i++) {
	 //std::cout << "current point "<< points[i] <<std::endl;
	//walk through aux
	//check point lie between i and i+1 of aux
	long current_point = sorted_points[i];
	long aux_point = getAuxIntersectionsIndexWifCurrentPoint(current_point,aux);
	//std::cout << "current_point=" << current_point << std::endl;
	//std::cout << "aux_point=" << aux_point << std::endl;
	//check if aux_point == -1
	if (aux_point != -1) { //proceed to update the number of intersections
		
		long sum_aux_point = aux[aux_point].second;
		//will continue to fetch till exhausted
		
		//aux_point = getAuxIntersectionsIndexWifCurrentPoint(current_point,aux);
		
		while ((aux_point = getAuxIntersectionsIndexWifCurrentPoint(current_point,aux) )!=-1) {
			std::cout << "current intersection aux=" << aux_point << std::endl;
			sum_aux_point  += aux[aux_point].second;
		}
		/*
		if (aux_point + 1< aux.size()) {//check in case we have reached the end
			if (current_point == aux[aux_point+1].first) {
				//check next point
				
				sum_aux_point  += aux[aux_point+1].second;
				
			}
	    }*/
		std::pair<long,long> p = std::make_pair(current_point,sum_aux_point);
		cnt.insert(p);
	}else {
		std::pair<long,long> p= std::make_pair(current_point,0);
		cnt.insert(p);
	}
  }
}
//this function will compute aux, which is a mapping of the point : number of line intersections
void getLineIntersections(vector<long> starts, vector<long> ends, std::vector<std::pair<long,long>> &aux){
  long count_line_segments = 0; 
	//int k = 0;
  long i = 0;
  long j = 0;
  
  long starts_len =  starts.size();
  long ends_len = ends.size();
  
  std::cout <<"starts_len=" << starts_len << std::endl;
  std::cout <<"ends_len=" << ends_len << std::endl;
  
  std::cout << "checkAndUpdateOrAddKeyValuePair start" << std::endl;
  //note core dump HERE!
  std::cout << "while (i < starts_len and j < ends_len) START" << std::endl;
  while (i < starts_len and j < ends_len) {
	    
		if (starts[i] <= ends[j]) {
			std::cout << "if (starts[i] <= ends[j]) { START" << std::endl;
			//aux[k] = a[i];
			//aux.push_back(std::make_pair(starts[i],i-j));
			std::cout << "i="<<i <<std::endl;
			std::cout << "j="<<j <<std::endl;
			std::cout << "starts[i]="<<starts[i] <<std::endl;
			std::cout << "ends[j]="<<ends[j] <<std::endl;
			count_line_segments ++;
			std::cout << "count_line_segments="<<count_line_segments <<std::endl;
			std::pair<long,long> p = std::make_pair(starts[i],count_line_segments);
			checkAndUpdateOrAddKeyValuePair(p,aux);
			++i;
			std::cout << "if (starts[i] <= ends[j]) { END" << std::endl;
		}else {
			
			std::cout << "if (starts[i] <= ends[j]) { ELSE START" << std::endl;
			//see https://www.geeksforgeeks.org/counting-inversions/
			//number_of_inversions += (ave - i);
			//aux[k] = a[j]; 
			//aux.push_back(std::make_pair(ends[j],i-j));
			std::cout << "i="<<i <<std::endl;
			std::cout << "j="<<j <<std::endl;
			std::cout << "starts[i]="<<starts[i] <<std::endl;
			std::cout << "ends[j]="<<ends[j] <<std::endl;
			count_line_segments --;
			std::cout << "count_line_segments="<<count_line_segments <<std::endl;
			std::cout << "j="<<j <<std::endl;
			std::cout << "ends[j]="<<ends[j] <<std::endl;
			std::pair<long,long> p = std::make_pair(ends[j],count_line_segments);
			std::cout << "after making pair "<<std::endl;
			checkAndUpdateOrAddKeyValuePair(p,aux);
			++j;
			std::cout << "j="<<j <<std::endl;
			std::cout << "if (starts[i] <= ends[j]) { ELSE END" << std::endl;
		}
		//++k;
		
  }
  std::cout << "while (i < starts_len and j < ends_len) END" << std::endl;
  
  std::cout << "while (i< starts_len) { START" << std::endl;
  while (i< starts_len) {
		//number_of_inversions ++;
		//aux[k] = a[i];
		//aux.push_back(std::make_pair(starts[i],i-j));
		std::cout << "i="<<i <<std::endl;
		std::cout << "j="<<j <<std::endl;
		std::cout << "starts[i]="<<starts[i] <<std::endl;
		std::cout << "ends[j]="<<ends[j] <<std::endl;
		count_line_segments ++;
		std::cout << "count_line_segments="<<count_line_segments <<std::endl;
		std::pair<long,long> p = std::make_pair(starts[i],count_line_segments);
		checkAndUpdateOrAddKeyValuePair(p,aux);
		//++k;
		++i;
  }
  std::cout << "while (i< starts_len) { END" << std::endl;
  
  std::cout << "while (j< ends_len) { START" << std::endl;
  while (j< ends_len) {
		//number_of_inversions ++;
		//aux[k] = a[j];
		//aux.push_back(std::make_pair(ends[j],i-j));
		std::cout << "i="<<i <<std::endl;
		std::cout << "j="<<j <<std::endl;
		std::cout << "starts[i]="<<starts[i] <<std::endl;
		std::cout << "ends[j]="<<ends[j] <<std::endl;
		count_line_segments --;
		std::cout << "count_line_segments="<<count_line_segments <<std::endl;
		std::pair<long,long> p = std::make_pair(ends[j],count_line_segments);
		checkAndUpdateOrAddKeyValuePair(p,aux);
		//++k;
		++j;
  }
  std::cout << "while (j< ends_len) { END" << std::endl;
}

//we will need a function to search for a key in the vector of pairs
//the reason being that if the key is already in existence , then we will simply update the value
//else we will add the key value pair
void checkAndUpdateOrAddKeyValuePair(std::pair<long,long>& keyValuePair,std::vector<std::pair<long,long>>& aux){
	//set up the iterator
	//auto it = std::find_if(aux.begin(),aux.end(),[std::pair<int,int>& ](const std::pair<int,int>& element) { return element.first= keyValuePair.first;});
	//auto it = std::find_if(aux.begin(),aux.end(),isEqual);
	//using a lambda function
	auto foundItem = std::find_if(std::begin(aux),std::end(aux),[keyValuePair](std::pair<long,long> const & item) 
	{
		std::cout << "item found"<<std::endl;
		return item.first == keyValuePair.first;
	});
	
	//check foundItem
	if (foundItem != std::end(aux)) { //found
		std::cout << "update item"<<std::endl;
		//simply update instead of inserting new entry
		std::cout << "keyValuePair.first"<<keyValuePair.first<<std::endl;
		std::cout << "keyValuePair.second"<<keyValuePair.second<<std::endl;
		/*
		 * keyValuePair.first-99,999,000
		   keyValuePair.second10

		 * 
		 * */
		//aux[keyValuePair.first].second = keyValuePair.second;
		*foundItem=keyValuePair;
	}else {// insert it like a new entry
		std::cout << "insert item"<<std::endl;
		aux.push_back(keyValuePair);
	}
	
}
/*
bool isEqual(const std::pair<int,int>& element) {
	return element.first == ??;
}*/


//returns the number of intersections
long getAuxIntersectionsIndexWifCurrentPoint(long currPoint, std::vector<std::pair<long,long>>& aux) {
	
	std::cout << "START getAuxIntersectionsIndexWifCurrentPoint" << std::endl;
	//take note we would need to check against extreme points
	//aux.first and aux.last
	//if before aux.first or after aux.last return -1
	if (currPoint < aux[0].first || currPoint > aux[aux.size()-1].first) {
		return -1;
	}
	
	//using the currPoint, we will search for the first point that satisfies
	//use static so that it retains the current index
	//static long aux_index = 0;
	static long aux_index = 0;
	std::cout << "aux_index after init=" << aux_index << std::endl;
	std::pair<long,long> curr_pair ;
	std::pair<long,long> next_pair ;
	//condition to match currPoint
	// aux_curr.first    <=currPoint < aux_next.first
	// return aux_curr.second
	while (aux_index <= aux.size()-1) {
		curr_pair = aux[aux_index];
		next_pair= aux[aux_index+1];
		//aux_index++;
		//return first point found
		//std::cout<< "currPoint="<< currPoint << std::endl;
		//std::cout<< "curr_pair.first=" << curr_pair.first << std::endl;
		//std::cout<< "next_pair.first=" << next_pair.first << std::endl;
		if (currPoint >= curr_pair.first && currPoint <= next_pair.first ) {
			//std::cout<< "Matching start" <<std::endl;
			//std::cout<< "currPoint="<< currPoint << std::endl;
			//std::cout<< "curr_pair.first=" << curr_pair.first << std::endl;
			//std::cout<< "next_pair.first=" << next_pair.first << std::endl;
			//std::cout<< "curr_pair.second=" << curr_pair.second << std::endl;
			//std::cout<< "Matching end" <<std::endl;
			//note that when we do the return aux_index is not being updated
			//return curr_pair.second;
			
			long ret_index = aux_index;
			aux_index++;
			return ret_index;
		}
		aux_index++;
		std::cout << "aux_index=" << aux_index << std::endl;
	}
	std::cout << "END getAuxIntersectionsIndexWifCurrentPoint" << std::endl;
	return -1; //have reached the end; not found
}
//as a control
vector<long> naive_count_segments(vector<long> starts, vector<long> ends, vector<long> points) {
  vector<long> cnt(points.size());
  for (size_t i = 0; i < points.size(); i++) {
    for (size_t j = 0; j < starts.size(); j++) {
      cnt[i] += starts[j] <= points[i] && points[i] <= ends[j];
    }
  }
  return cnt;
}
/*
 * 2 3
 * 0 5
 * 7 10
 * 1 6 11
 * 
 * 0 1 2 3 4 5 6 7 8 9 10
 * 0 --------5   7-----10
 *   1         6         11 
 * 
 * +1        -1  +1    -1
 * 0         5   7     10
 * */
 //testing
 int main() {
	 
	long n = 5;
	vector<long> starts(n), ends(n);
	long m = 3;
	vector<long> points(m);
	
	//do a check on equal starts and ends 
	starts[0]=-5;ends[0]=10;
	starts[1]=-5;ends[1]=9;
	starts[2]=-5;ends[2]=5;
	starts[3]=5;ends[3]=6;
	starts[4]=5;ends[4]=6;
	
	/*
	 * -5 ---------------------------------10
	 * -5 --------------------------9
	 * -5 --------------5
	 *                  5--6
	 *                  5--6
	 * -5 --------------5 = +3
	 *                  5--6 = 5
	 *                     6 -------9 = 2
	 *                              9 --10 = 1
	 * */
	//output 3,3,4
	//correct output 3,5,4
	//aux output : -5:3, 5:2,10:4,9:3,6:0
	//correct aux output : -5:3, 5:4,6:2,9:1,10:0
	//correct output -1 : 3, 5: 4 , 6 : 2, 9:1, 10: 0 
	//can we infer the correct output from the correct aux output
	// -5<=-1 <= 5 =3 --> ok
	// -5<= 5 <= 5 =3 + 5<= 5 <= 6 = 5 
	
	
	points[0] = -1; points[1] = 5; points[2] = 6;//note that 6 should be matched with 5:4
	std::cout << "about to invoke fast_count_segments_v2" << std::endl;
	
	
	std::vector<std::pair<long,long>> aux;
	getLineIntersections(starts, ends, aux);
	for ( auto k_aux = 0; 	k_aux < aux.size();k_aux++) {
		std::pair<long,long> curr_pair ;
		curr_pair = aux[k_aux];
		std::cout << "curr_pair.first= " << curr_pair.first << std::endl;
		std::cout << "curr_pair.second= " << curr_pair.second << std::endl;
	}
	
	/*
	std::vector<long>  results = naive_count_segments(starts, ends, points);
	for ( auto results_index = 0; results_index< results.size();results_index++) {
		//if ( results[results_index]  > 0) {
			std::cout << "results["<< results_index<< "]" <<results[results_index]  << std::endl;
		//}
	}*/
}
 int main_bak4() {
	 
	long n = 50000;
	vector<long> starts(n), ends(n);
	long m = 50000;
	vector<long> points(m);
	
	//do a check on equal starts and ends 
	
	const long start_init_k = -pow(1,8);
	for ( auto kn = 0; kn< n;kn++) {
		starts[kn] =-1*pow(10,8) +  kn*100;
		ends[kn] = starts[kn] + 1000;
	}
	for ( auto pn = 0; pn< m;pn++) {
		//increase the gap
		points[pn] = -1*pow(10,8) + pn*10000;
		
	}
	
	//override last one
	points[49999] = pow(10,8);
	
	std::cout << "about to invoke fast_count_segments_v2" << std::endl;
	
	
	std::vector<long>  results = fast_count_segments_v2(starts, ends, points);
	for ( auto results_index = 0; results_index< results.size();results_index++) {
		if ( results[results_index]  > 0) {
			std::cout << "results["<< results_index<< "]" <<results[results_index]  << std::endl;
		}
	}
}
 int main_bak2() {
	 /*
	  * 2 3
		0 5
        7 10
        1 6 11
	  * */
	long n = 2;
	vector<long> starts(n), ends(n);
	long m = 4;
	vector<long> points(m);
	
	/*
	const long start_init_k = -pow(1,8);
	for ( auto kn = 0; kn< n;kn++) {
		starts[kn] = start_init_k + kn*30;
		ends[kn] = starts[kn] + 20;
	}
	for ( auto km = 0; km< m;km++) {
		points[km] = km;
	}*/
	starts[0] = 0;
	ends[0] = 5;
	starts[1] = 7;
	ends[1] = 10;
	points[0] = -pow(10,8);
	points[1] = 6;
	points[2] = 11;
	points[3] = pow(10,8);
	
	std::vector<std::pair<long,long>> aux;
	
	
	//starts/ends in sequence 
	//0,5 ,7 ,10
	std::pair<long,long> p1 = std::make_pair(starts[0],1);
	checkAndUpdateOrAddKeyValuePair(p1,aux);
	std::pair<long,long> p2 = std::make_pair(ends[0],0);
	checkAndUpdateOrAddKeyValuePair(p2,aux);
	std::pair<long,long> p3 = std::make_pair(starts[1],1);
	checkAndUpdateOrAddKeyValuePair(p3,aux);
	std::pair<long,long> p4 = std::make_pair(ends[1],0);
	checkAndUpdateOrAddKeyValuePair(p4,aux);
	
	
	//check aux after the update
	/*
	for ( auto k_aux = 0; 	k_aux < aux.size();k_aux++) {
		std::pair<long,long> curr_pair ;
		curr_pair = aux[k_aux];
		std::cout << "curr_pair.first= " << curr_pair.first << std::endl;
		std::cout << "curr_pair.second= " << curr_pair.second << std::endl;
	}*/
	/*
	for ( auto pt_index = 0; pt_index< m;pt_index++) {
		std::cout << "points[pt_index]" <<points[pt_index]  << std::endl;
		long aux_pt_index = getAuxIntersectionsIndexWifCurrentPoint(points[pt_index],aux) ;
		std::cout << "aux_pt_index=" << aux_pt_index << std::endl;
	}*/
	
	std::vector<long>  results = fast_count_segments_v2(starts, ends, points);
	for ( auto results_index = 0; results_index< m;results_index++) {
		std::cout << "results[pt_index]" <<results[results_index]  << std::endl;
		
	}
}
 //assume no coincide in the numbers, i.e range doesnt coincide , else  aprticular number would become undefined
 //enhanced for greater n,m
int main_bak() {
  long n, m;
  std::cin >> n >> m;
  
  //check that n,m >= 1
  if (n < 1 || m < 1) return 0;
  vector<long> starts(n), ends(n);
  vector< pair <long,long> > vect_pair; 
  for (size_t i = 0; i < starts.size(); i++) {
    std::cin >> starts[i] >> ends[i];
    //no need to place it in vector pair, straight away we acn sort independently
    //vect_pair.push_back(std::make_pair(starts[i],ends[i]));
  }
  //do a sort based on first element ascending
  //sort(vect_pair.begin(), vect_pair.end());
  //put it back
  /*
  for (size_t i = 0; i < starts.size(); i++) {
    starts[i] = vect_pair[i].first;
    ends[i] = vect_pair[i].second;
   
  }
  */
  vector<long> points(m);
  //vector<int> orig_points(m);
  for (size_t i = 0; i < points.size(); i++) {
    std::cin >> points[i];
    //we duplicate a copy of points to preserve the original order
    //orig_points[i] = points[i];
  }
  
  
  
  
  
  
  //check that starts has been sorted
  /*
  std::cout << std::endl << "starts" << std::endl;
  for (size_t i_starts = 0; i_starts < starts.size(); i_starts++) {
    std::cout << starts[i_starts]<< " ";
  }
  std::cout << std::endl <<  "ends" << std::endl;
  for (size_t i_ends = 0; i_ends < ends.size(); i_ends++) {
    std::cout << ends[i_ends]<< " ";
  }
  std::cout << std::endl << "points" << std::endl;
  for (size_t i_points = 0; i_points < points.size(); i_points++) {
    std::cout << points[i_points] << " ";
  }*/
  
  //use fast_count_segments
  //vector<int> cnt = naive_count_segments(starts, ends, points);
  //vector<int> cnt = fast_count_segments(starts, ends, points);
  std::vector<long>  cnt = fast_count_segments_v2(starts, ends, points);
  
  //std::cout <<"cnt "<<std::endl;
  //std::cout <<"cnt.size() "<<cnt.size() << std::endl;
  /*for (size_t i = 0; i < orig_points.size(); i++) {
    std::cout << orig_points[i] << ' ';
  }*/
  
  for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
    std::cout << cnt[i] << ' ';
  }
  
  return 0;
}

int main_control_set() {
  long n = 4;
	vector<long> starts(n), ends(n);
	long m = 3;
	vector<long> points(m);
	
	//do a check on equal starts and ends 
	starts[0]=-5;ends[0]=10;
	starts[1]=-5;ends[1]=9;
	starts[2]=-5;ends[2]=7;
	starts[3]=5;ends[3]=6;
	
	
	//output 3,3,3
	//correct output 3,4,4
	//aux output : -5:3 , 10:2 , 11:1, 12:0
	//correct aux: -5: 3 ,5:4, 6:3, 7:2,9:1, 10:0 
	
	points[0] = -1; points[1] = 6; points[2] = 6;//note that 6 should be matched with 5:4
	std::cout << "about to invoke fast_count_segments_v2" << std::endl;
	/*
	std::vector<std::pair<long,long>> aux;
	getLineIntersections(starts, ends, aux);
	for ( auto k_aux = 0; 	k_aux < aux.size();k_aux++) {
		std::pair<long,long> curr_pair ;
		curr_pair = aux[k_aux];
		std::cout << "curr_pair.first= " << curr_pair.first << std::endl;
		std::cout << "curr_pair.second= " << curr_pair.second << std::endl;
	}*/
	
	std::vector<long>  results = naive_count_segments(starts, ends, points);
	for ( auto results_index = 0; results_index< results.size();results_index++) {
		//if ( results[results_index]  > 0) {
			std::cout << "results["<< results_index<< "]" <<results[results_index]  << std::endl;
		//}
	}
	return 0;
}
