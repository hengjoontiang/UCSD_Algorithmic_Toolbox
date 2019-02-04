#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

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

void checkAndUpdateOrAddKeyValuePair(std::pair<long,long>& keyValuePair,std::vector<std::pair<long,long>>& aux);
long getAuxIntersectionsIndexWifCurrentPoint(long currPoint, std::vector<std::pair<long,long>>& aux);
std::vector<long>  fast_count_segments_v2(vector<long> starts, vector<long> ends, vector<long> points) {
  std::map<long,long>  cnt; //must not init size
  //compare the 2 halves of a
  long i = 0;
  long j = 0;
  long count_line_segments = 0; 
  
  //sort the points
  sort(starts.begin(), starts.end());
  sort(ends.begin(), ends.end());
  
  //int k = 0;
  long starts_len =  starts.size();
  long ends_len = ends.size();
  std::vector<std::pair<long,long>> aux;//without initial size, let it grow dynamically; first number is the point, second number indicates the nunber of intersections
  while (i < starts_len and j < ends_len) {
		if (starts[i] <= ends[j]) {
			//aux[k] = a[i];
			//aux.push_back(std::make_pair(starts[i],i-j));
			//std::cout << "i="<<i <<std::endl;
			//std::cout << "j="<<j <<std::endl;
			//std::cout << "starts[i]="<<starts[i] <<std::endl;
			//std::cout << "ends[j]="<<ends[j] <<std::endl;
			count_line_segments ++;
			//std::cout << "count_line_segments="<<count_line_segments <<std::endl;
			std::pair<long,long> p = std::make_pair(starts[i],count_line_segments);
			checkAndUpdateOrAddKeyValuePair(p,aux);
			++i;
		}else {
			//see https://www.geeksforgeeks.org/counting-inversions/
			//number_of_inversions += (ave - i);
			//aux[k] = a[j]; 
			//aux.push_back(std::make_pair(ends[j],i-j));
			//std::cout << "i="<<i <<std::endl;
			//std::cout << "j="<<j <<std::endl;
			//std::cout << "starts[i]="<<starts[i] <<std::endl;
			//std::cout << "ends[j]="<<ends[j] <<std::endl;
			count_line_segments --;
			//std::cout << "count_line_segments="<<count_line_segments <<std::endl;
			std::pair<long,long> p = std::make_pair(ends[j],count_line_segments);
			checkAndUpdateOrAddKeyValuePair(p,aux);
			++j;
		}
		//++k;
  }
  
  while (i< starts_len) {
		//number_of_inversions ++;
		//aux[k] = a[i];
		//aux.push_back(std::make_pair(starts[i],i-j));
		//std::cout << "i="<<i <<std::endl;
		//std::cout << "j="<<j <<std::endl;
		//std::cout << "starts[i]="<<starts[i] <<std::endl;
		//std::cout << "ends[j]="<<ends[j] <<std::endl;
		count_line_segments ++;
		//std::cout << "count_line_segments="<<count_line_segments <<std::endl;
		std::pair<long,long> p = std::make_pair(starts[i],count_line_segments);
		checkAndUpdateOrAddKeyValuePair(p,aux);
		//++k;
		++i;
  }
  while (j< ends_len) {
		//number_of_inversions ++;
		//aux[k] = a[j];
		//aux.push_back(std::make_pair(ends[j],i-j));
		//std::cout << "i="<<i <<std::endl;
		//std::cout << "j="<<j <<std::endl;
		//std::cout << "starts[i]="<<starts[i] <<std::endl;
		//std::cout << "ends[j]="<<ends[j] <<std::endl;
		count_line_segments --;
		//std::cout << "count_line_segments="<<count_line_segments <<std::endl;
		std::pair<long,long> p = std::make_pair(ends[j],count_line_segments);
		checkAndUpdateOrAddKeyValuePair(p,aux);
		//++k;
		++j;
  }
	
  //make sure aux is sorted by key
  sort(aux.begin(),aux.end());	
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
  
  //duplicate a copy of points
  vector<long> sorted_points(points); 
  sort(sorted_points.begin(), sorted_points.end());
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
  }
  
  std::vector<long> return_cnt(points.size());
  for (size_t i = 0; i < points.size(); i++) {
	  
	
	
    return_cnt[i] = cnt[points[i]];
  }
  
  return return_cnt;
}
//we will need a function to search for a key in the vector of pairs
//the reason being that if the key is already in existence , then we will simply update the value
//else we will add the key value pair
void checkAndUpdateOrAddKeyValuePair(std::pair<long,long>& keyValuePair,std::vector<std::pair<long,long>>& aux){
	//set up the iterator
	//auto it = std::find_if(aux.begin(),aux.end(),[std::pair<int,int>& ](const std::pair<int,int>& element) { return element.first= keyValuePair.first;});
	//auto it = std::find_if(aux.begin(),aux.end(),isEqual);
	//using a lambda function
	auto foundItem = std::find_if(std::begin(aux),std::end(aux),[keyValuePair](std::pair<int,int> const & item) 
	{
		return item.first == keyValuePair.first;
	});
	
	//check foundItem
	if (foundItem != std::end(aux)) { //found
		//simply update instead of inserting new entry
		//aux[keyValuePair.first].second = keyValuePair.second;
		*foundItem=keyValuePair;
	}else {// insert it like a new entry
		aux.push_back(keyValuePair);
	}
	
}
/*
bool isEqual(const std::pair<int,int>& element) {
	return element.first == ??;
}*/
//returns the number of intersections
long getAuxIntersectionsIndexWifCurrentPoint(long currPoint, std::vector<std::pair<long,long>>& aux) {
	
	//take note we would need to check against extreme points
	//aux.first and aux.last
	//if before aux.first or after aux.last return -1
	if (currPoint < aux[0].first || currPoint > aux[aux.size()-1].first) {
		return -1;
	}
	
	//using the currPoint, we will search for the first point that satisfies
	//use static so that it retains the current index
	static long aux_index = 0;
	std::pair<long,long> curr_pair ;
	std::pair<long,long> next_pair ;
	//condition to match currPoint
	// aux_curr.first    <=currPoint < aux_next.first
	// return aux_curr.second
	while (aux_index <= aux.size()-1) {
		curr_pair = aux[aux_index];
		next_pair= aux[aux_index+1];
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
			return aux_index;
		}
		aux_index++;
	}
	return -1; //have reached the end; not found
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
 
 //assume no coincide in the numbers, i.e range doesnt coincide , else  aprticular number would become undefined
 //enhanced for greater n,m
int main() {
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

