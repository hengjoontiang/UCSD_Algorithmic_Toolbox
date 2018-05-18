#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;
/*Algorithm:
 *
 * Sort Segment by leftmost point in increasing order, and length (end - start)
 * while there are still segments
 * 1. if number of points is 0, just add end point of current segment; move on to next segment
 * 2. fetch the current point saved 
 * 3. fetch the current segment, denote the left point and right point
 * 4. if current segment left point > current point saved then add this current segment right point; move on to   next point
 * 5. if current segment right point < current point saved then update current point saved = current segment right point; and move on
 
 * 	  
 * 
 * 
 * */
bool compareByLength(const int a, const int b)
{
    return a < b;
}
bool compareByLeftMostPoint(const int a, const int b)
{
    return a < b;
}
struct Segment {
  int start, end;
};
bool operator < (const Segment & a, const Segment & b)
{
	if (a.start == b.start) {
		int a_len = a.end - a.start;
		int b_len = b.end - b.start;
		return compareByLength(a_len,b_len);
	}
	return compareByLeftMostPoint(a.start,b.start);
}
bool compareByLeftMostPoint_then_Len(const Segment & a, const Segment & b)
{
    return a < b;
}
vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  //write your code here
  
  //do sorting on Segment, by leftmost point , then length
  std::sort(segments.begin(),segments.end(),compareByLeftMostPoint_then_Len);
  /*for (size_t i = 0; i < segments.size(); ++i) {
    std::cout << segments[i].start << ":"<<segments[i].end << std::endl;
  }
  return points;*/
  for (size_t i = 0; i < segments.size(); ++i) {
	if (points.empty()) {
		//first time, it should add left most point end
		points.push_back(segments[i].end);
		//move on to next point
		continue;
	}
	//get current point
	int lastpoint_right = points.back();
	//std::cout << "lastpoint_right=" << lastpoint_right << std::endl;
	
	//use start and end of current segment to compare against lastpoint_right
	int currpoint_left = segments[i].start;
	int currpoint_right = segments[i].end;
	//std::cout << "currpoint_left=" << currpoint_left << std::endl;
	//std::cout << "currpoint_right=" << currpoint_right << std::endl;
	
	//check currpoint_left against lastpoint_right
	//no overlap
	
	//new segment right point goes beyond current segment right point
	if (currpoint_left > lastpoint_right) {
		//there is no more overlap, so we would need to add currpoint_right to the list of points
		points.push_back(currpoint_right);
		continue;
	}
	//new segment right point less than current segment right point
	if (currpoint_right < lastpoint_right) {
		//there is no more overlap, so we would need to add currpoint_right to the list of points
		points.back() = currpoint_right;
		continue;
	}
	
	
	
    //points.push_back(segments[i].start);
    //points.push_back(segments[i].end);
  }
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
