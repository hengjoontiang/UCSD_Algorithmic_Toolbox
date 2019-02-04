#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>

// needed a new version, timing issues

/*
 * Treat all as events
 * a. start points of segments arranged in ascending order
 * b. end points of segments arranged in ascending order
 * c. points of which we are checking
 * 
 * we need a consistent data structure that will store the point of interest, as well as point type, as well as a pointer to its underlying
 * 
 * operations,
 * 
 * EventQueueDatStruct
 * 	point value
 *  point type - interest, segStart,segEnd
 *  pointer to underlying
 * 
 * 
 * We start by placing the start points into the queue 
 *    EventQueueDatStruct - point value =start point, point type= segStart, pointer to underlying 
 * 
 * Then we placed the end points into the queue
 * 	  EventQueueDatStruct - point value =end point, point type= segEnd, pointer to underlying 
 * 
 * Then we placed the points of interest
 * 	  EventQueueDatStruct - point value = point of interest , point type= interest, pointer to each point
 * 
 * Sort the PriorityQueue by point value
 * Keep track of the initial number of points of interest , we stop when all points of interest has been exhausted
 * NumPointOfInterest = n
 * LineSegmentCount = 0
 * Loop start
 * 		Pop the queue element
 * 	    //note sequence is IMPORTANT - this can be done by ensuring that priority queue will pop in the sequence segStart,point of interest, segEnd
 * 		if point type == segStart 
 * 				LineSegmentCount++
 * 		if point type == interest
 * 				insert/skip map [point of interest, LineSegementCount) //check if there has been prior point of interest
 * 		if point type = segEnd
 * 				LineSegmentCount--
 * 		
 * */
using std::priority_queue;
using std::vector;
using std::pair;
using std::sort;


class PriorityQueueElement {
public:
	PriorityQueueElement();
	long pointOfInterest;
	long underlyingType; //start 0 , point 1, end 2
};
PriorityQueueElement::PriorityQueueElement(){}

struct CustomCompare
{
    
    bool operator()(const PriorityQueueElement&  i1, const PriorityQueueElement&  i2) 
	{
  
		if (i1.pointOfInterest == i2.pointOfInterest) {
			//start 0 , point 1, end 2
			return i1.underlyingType > i2.underlyingType;
		}
		return (i1.pointOfInterest > i2.pointOfInterest); 
	}
};
/*
bool comparePriorityQueueElementPointAsc(const PriorityQueueElement&  i1, const PriorityQueueElement&  i2) 
	{
  
		if (i1.pointOfInterest == i2.pointOfInterest) {
			//start 0 , point 1, end 2
			return i1.underlyingType < i2.underlyingType;
		}
		return (i1.pointOfInterest < i2.pointOfInterest); 
	}
*/
std::vector<long>  fast_count_segments_v4(vector<long> starts, vector<long> ends, vector<long> points) {
  //std::vector<PriorityQueueElement> pqvect;
  std::map<long,long>  cnt; //must not init size
  
	std::priority_queue<PriorityQueueElement,std::vector<PriorityQueueElement>, CustomCompare > pq;
	
	//convert the array into vectors
	for (int k=0;k<starts.size();k++){
		
		PriorityQueueElement pqe_start;
		pqe_start.pointOfInterest = starts[k];
		pqe_start.underlyingType= 0;
		pq.push(pqe_start);
		
		PriorityQueueElement pqe_end;
		pqe_end.pointOfInterest = ends[k];
		pqe_end.underlyingType= 2;
		pq.push(pqe_end);
		
	}
	
	for (int n=0;n<points.size();n++){
		
		PriorityQueueElement pqe_point;
		pqe_point.pointOfInterest = points[n];
		pqe_point.underlyingType= 1;
		pq.push(pqe_point);
		
		
		
	}
	
	
	
	
	
	
	
	//keep track of number of ponts, stop when all points are done
	long count_segment = 0;
	long numPointsProcessed = 0;
	while(!pq.empty()) {
        PriorityQueueElement current_point_pqe =  pq.top() ;
        pq.pop();
        //check the underlying type
		//start 0 , point 1, end 2
		
		if (current_point_pqe.underlyingType == 0) {
			count_segment++;
			//std::cout << "current_point="<<current_point_pqe.pointOfInterest << std::endl;
			//std::cout << "current_point_type="<<current_point_pqe.underlyingType << std::endl;
		}
		if (current_point_pqe.underlyingType == 1) {
			numPointsProcessed++;
			//std::cout << "current_point="<<current_point_pqe.pointOfInterest << std::endl;
			//std::cout << "current_point_type="<<current_point_pqe.underlyingType << std::endl;
			//add results of the current point
			std::pair<long,long> p = std::make_pair(current_point_pqe.pointOfInterest,count_segment);
			cnt.insert(p);
			if (numPointsProcessed == points.size()) {
				break; //get out of the processing loop for the priority queue
			}
		}
		if (current_point_pqe.underlyingType == 2) {
			count_segment--;
			//std::cout << "current_point="<<current_point_pqe.pointOfInterest << std::endl;
			//std::cout << "current_point_type="<<current_point_pqe.underlyingType << std::endl;
		}
        
    }
	 
		
		
		
		
   
	
  
	
  //we will need a separate return due to return points being not sorted, as well as there might be repetitions	
  std::vector<long> return_cnt(points.size());
  for (size_t i = 0; i < points.size(); i++) {
	  
	
	
    return_cnt[i] = cnt[points[i]];
  }
  
  return return_cnt;
}


int main_1() {
	long n, m;
	n=3;
	m=2;
	vector<long> starts(n), ends(n);
	starts[0] = 0;
	ends[0] = 5;
	starts[1] = -3;
	ends[1] = 2;
	starts[2] = 7;
	ends[2] = 10;
	
	vector<long> points(m);
	//points[0] = 11;
	points[0] = 0;
	points[1] = 11;
	std::vector<long>  cnt =fast_count_segments_v4(starts,ends,points);
    for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
     std::cout << cnt[i] << ' ';
   }
  return 0;
}

int main_2() {
	long n, m;
	n=2;
	m=3;
	vector<long> starts(n), ends(n);
	starts[0] = 0;
	ends[0] = 5;
	starts[1] = 7;
	ends[1] = 10;
	
	vector<long> points(m);
	//points[0] = 11;
	points[0] = 1;
	points[1] = 6;
	points[2] = 11;
	std::vector<long>  cnt =fast_count_segments_v4(starts,ends,points);
    for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
     std::cout << cnt[i] << ' ';
   }
  return 0;
}
int main_3() {
	long n, m;
	n=1;
	m=3;
	vector<long> starts(n), ends(n);
	starts[0] = -10;
	ends[0] = 10;
	
	
	vector<long> points(m);
	//points[0] = -100;
	
	
	points[0] = -100;
	points[1] = 100;
	points[2] = 0;
	
	//std::cout << "Invoking fast_count_segments_v3 " << std::endl;
	std::vector<long>  cnt =fast_count_segments_v4(starts,ends,points);
    for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
     std::cout << cnt[i] << ' ';
   }
  return 0;
}
int main_4() {
	long n, m;
	n=2;
	m=3;
	vector<long> starts(n), ends(n);
	starts[0] = -10;
	ends[0] = 10;
	starts[1] = -10;
	ends[1] = 20;
	
	vector<long> points(m);
	//points[0] = -100;
	
	
	points[0] = -100;
	points[1] = 100;
	points[2] = 0;
	
	//points[0] = 0;//correct answer 2; now giving ans=0
	//std::cout << "Invoking fast_count_segments_v4 " << std::endl;
	std::vector<long>  cnt =fast_count_segments_v4(starts,ends,points);
    for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
     std::cout << cnt[i] << ' ';
   }
  return 0;
}
int main() {
  long n, m;
  std::cin >> n >> m;
  
  //check that n,m >= 1
  if (n < 1 || m < 1) return 0;
  vector<long> starts(n), ends(n);
  vector< pair <long,long> > vect_pair; 
  for (size_t i = 0; i < starts.size(); i++) {
    std::cin >> starts[i] >> ends[i];
    
  }
  
  vector<long> points(m);
  //vector<int> orig_points(m);
  for (size_t i = 0; i < points.size(); i++) {
    std::cin >> points[i];
    
  }
  
  
  
  
  
  
 
  std::vector<long>  cnt = fast_count_segments_v4(starts, ends, points);
  
  
  
  for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
    std::cout << cnt[i] << ' ';
  }
  
  return 0;
}
