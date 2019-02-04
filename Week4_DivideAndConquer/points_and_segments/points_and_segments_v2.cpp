#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using std::vector;
using std::pair;
using std::sort;

vector<int> fast_count_segments(vector<int> starts, vector<int> ends, vector<int> points) {
  vector<int> cnt(points.size());
  //compare the 2 halves of a
  int starts_ends_index = 0; //sync
  int points_index = 0;  
  //int k = 0;
  int starts_len =  starts.size();
  int ends_len = ends.size();
  for (size_t points_index = 0; points_index < points.size(); points_index++) {
      int curr_point = points[points_index];
	  //use the curr point to shift the current window 
	  //found ~ 
	  while (starts_ends_index < ends_len &&  ends[starts_ends_index++]< curr_point ){ } //found end point that satisfy this criteria
		  
  }
  
  return cnt;
}
//need a method to compute starts,ends
//i.e to put the starts and ends together, each range correspond to a number of segments
//note that we dun overlap
//point_start <= point < point_end
//return s map of range, and the number of points

vector<int> naive_count_segments(vector<int> starts, vector<int> ends, vector<int> points) {
  vector<int> cnt(points.size());
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
 
 //assume no coincide in the numbers, i.e range doesnt coincide , else  aprticular number would become undefined
int main() {
  int n, m;
  std::cin >> n >> m;
  vector<int> starts(n), ends(n);
  vector< pair <int,int> > vect_pair; 
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
  vector<int> points(m);
  for (size_t i = 0; i < points.size(); i++) {
    std::cin >> points[i];
  }
  
  //sort the points
  sort(starts.begin(), starts.end());
  sort(ends.begin(), ends.end());
  sort(points.begin(), points.end());
  
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
  vector<int> cnt = fast_count_segments(starts, ends, points);
  
  
  for (size_t i = 0; i < cnt.size(); i++) {
    std::cout << cnt[i] << ' ';
  }
}

