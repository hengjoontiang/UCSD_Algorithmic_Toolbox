#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using std::vector;
using std::pair;
using std::sort;

class LineSegment {
public:
	long startpoint, endpoint ;
	bool IsPointInLSeg = false,IsPointInRSeg = false;
	LineSegment();
};
LineSegment::LineSegment() {
}
/*
bool compareLineSegmentStartAsc(LineSegment* i1, LineSegment* i2) 
{ 
	std::cout << "compareLineSegmentStartAsc:i1" <<i1->startpoint << std::endl;
	std::cout << "compareLineSegmentStartAsc:i2" <<i2->startpoint << std::endl;
    return (i1->startpoint < i2->startpoint); 
} 
*/
//template <LineSegment* K, LineSegment* V>
bool compareLineSegmentStartAsc(const LineSegment*  i1, const LineSegment*  i2) 
{
  //std::cout << "Compare:i1->startpoint="<< i1->startpoint << " vs i2->startpoint=" << i2->startpoint << std::endl;
  //std::cout << "i1->startpoint < i2->startpoint result=" << (i1->startpoint < i2->startpoint ) << std::endl;
  return (i1->startpoint < i2->startpoint); 
}
bool compareLineSegmentStartDes(const LineSegment*  i1, const LineSegment*  i2) 
{
  //std::cout << "Compare:i1->startpoint="<< i1->startpoint << " vs i2->startpoint=" << i2->startpoint << std::endl;
  //std::cout << "i1->startpoint < i2->startpoint result=" << (i1->startpoint < i2->startpoint ) << std::endl;
  return (i1->startpoint > i2->startpoint); 
}
bool compareLineSegmentEndAsc(const LineSegment*  i1, const LineSegment*  i2) 
{
  //std::cout << "Compare:i1->endpoint="<< i1->endpoint << " vs i2->endpoint=" << i2->endpoint << std::endl;
  //std::cout << "i1->endpoint < i2->startpoint result=" << (i1->endpoint < i2->endpoint ) << std::endl;
  return (i1->endpoint < i2->endpoint); 
}
bool compareLineSegmentEndDes(const LineSegment*  i1, const LineSegment*  i2) 
{
  //std::cout << "Compare:i1->endpoint="<< i1->endpoint << " vs i2->endpoint=" << i2->endpoint << std::endl;
  //std::cout << "i1->startpoint < i2->endpoint result=" << (i1->endpoint < i2->endpoint ) << std::endl;
  return (i1->endpoint > i2->endpoint); 
}
//returns the matching index 
long getIndexLastMatchingStartLineSegment_Recur(vector<LineSegment*>& starts,long startIndex,long endIndex, long pointToCheck){
	//binary search
	//based on the pointToCheck , first check against the midpoint
	//based on round up
	//midpoint + 1 to endIndex
	
	
	
		
	long midIndex = ( startIndex + endIndex )/2;
	//we will need to check which segment, lower or upper
	long startpoint = starts[startIndex]->startpoint;
	long endpoint = starts[endIndex]->startpoint;
	//std::cout << "startpoint=" <<startpoint <<std::endl;
	//std::cout << "endpoint=" <<endpoint <<std::endl;
	
	
	//std::cout << "startpoint just after =" <<starts[startIndex+1]->startpoint <<std::endl;
	//do this check so that we avoid the same values
	while (startIndex+1 <= endIndex && starts[startIndex+1]->startpoint == startpoint ) {
		startIndex++;
		
		//std::cout << "while loop to check same number for start point" << std::endl;
	}
	
	
	
	//std::cout << "checking startIndex == endIndex" << std::endl;
	if (startIndex == endIndex && pointToCheck > startpoint) return startIndex;
	if (pointToCheck == startpoint) return startIndex;
	if (pointToCheck == endpoint) return endIndex;
	
	//check that there is no coincidental start points
	
	//std::cout << "pointToCheck < startpoint || pointToCheck > endpoint" << std::endl;
	if (pointToCheck < startpoint || pointToCheck > endpoint) 
		return -1;
		
	
	//std::cout << "checking startIndex + 1 == endIndex" << std::endl;
	if (startIndex + 1 == endIndex) return startIndex;
	
	
	long midpoint = starts[midIndex]->startpoint;
	long nextpoint_after_midpoint = starts[midIndex+1]->startpoint;
	//compare the current point with the midpoint
	//std::cout << "checking pointToCheck == midpoint" << std::endl;
	if (pointToCheck == midpoint) return midIndex;
	//sometimes it is not an exact match
	//std::cout << "checking midpoint < pointToCheck && pointToCheck < nextpoint_after_midpoint" << std::endl;
	if ( midpoint < pointToCheck && pointToCheck < nextpoint_after_midpoint) return midIndex;
	
	//std::cout << "checking pointToCheck > midpoint" << std::endl;
	if (pointToCheck > midpoint)
		return getIndexLastMatchingStartLineSegment_Recur(starts,midIndex+1,endIndex, pointToCheck);
		
	
		
	
	
	
	
	//std::cout << "checking pointToCheck < midpoint" << std::endl;
	//startIndex to midpoint
	if (pointToCheck < midpoint)
		return getIndexLastMatchingStartLineSegment_Recur(starts,startIndex,midIndex, pointToCheck);
	
	
	
	return 0;
}
long getIndexLastMatchingStartLineSegment(vector<LineSegment*>& starts,long pointToCheck){
	//binary search
	//based on the pointToCheck , first check against the midpoint
	//based on round up
	return getIndexLastMatchingStartLineSegment_Recur(starts,0,starts.size()-1, pointToCheck);
}



//important that we passed in a refernce, else a copy of the vector of ointers is being passed in 
//meaning that we are actually osrting on the copy , rather than the original copy of the vector
void sortLineSegments(vector<LineSegment*>& starts,bool IsAscend=true, bool IsStart=true){
	//sorts the starts array of LineSegments by start point, note that it contains LineSegments
	//better to have IsAscend = true, for starts, IsAscend  = false for ends
	if (IsStart) {
	if (IsAscend) 
		sort(starts.begin(), starts.end(),compareLineSegmentStartAsc);
	else
		sort(starts.begin(), starts.end(),compareLineSegmentStartDes);
	}else{
	if (IsAscend) 
		sort(starts.begin(), starts.end(),compareLineSegmentEndAsc);
	else
		sort(starts.begin(), starts.end(),compareLineSegmentEndDes);
	}
}
long getCountMatchLineSegments(vector<LineSegment*>& starts,long endIndex, long current_point) {
	long count = 0;
	for (int k=0;k<=endIndex;k++){
		long endpoint = starts[k]->endpoint;
		count+= ( current_point <= endpoint ? 1 : 0);
	}
	return count;
}
std::vector<long>  fast_count_segments_v3(vector<long> starts, vector<long> ends, vector<long> points) {
  std::map<long,long>  cnt; //must not init size
  //duplicate a copy of points
  vector<long> sorted_points(points); 
  sort(sorted_points.begin(), sorted_points.end());
	
	//std::cout << "after sorting points " <<std::endl;
  //init the LineSegments Array
	//vector<LineSegment*> lsArray(n);
	vector<LineSegment*> startsArray ;
	//vector<LineSegment*> endsArray;
	
	
	//convert the array into vectors
	for (int k=0;k<starts.size();k++){
		LineSegment* ls = new LineSegment();
		
		ls->startpoint = starts[k];
		ls->endpoint = ends[k];
		//std::cout << "starts[" << k << "]="<< starts[k] << std::endl;
		//lsArray.push_back(ls);
		startsArray.push_back(ls);
		//endsArray.push_back(ls);
	}
	//std::cout << "after startsArray " <<std::endl;
	
	//now we do the sorting 
	sortLineSegments(startsArray,true, true);
	//std::cout << "after sortLineSegments " <<std::endl;
	
	//sortLineSegments(endsArray,false, false);
	
	//check startsArray
	/*
	for (size_t starts_i = 0; starts_i < startsArray.size(); starts_i++) {
	  
	
	
		std::cout << "startpoint="<<startsArray[starts_i]->startpoint << ' ';
	}*/
	/*
	//check endsArray
	for (size_t ends_i = 0; ends_i < endsArray.size(); ends_i++) {
	  
	
	
		std::cout << "endpoint="<<endsArray[ends_i]->endpoint << ' ';
	}*/
	
	for (size_t i = 0; i < sorted_points.size(); i++) {
	 
		long current_point = sorted_points[i];
		
		//std::cout << "current_point=" << current_point << std::endl;
		
		//long current_point_count = 0;
		//std::pair<long,long> p = std::make_pair(current_point,current_point_count);
		//cnt.insert(p);
		if ((i > 0 && current_point != sorted_points[i-1]) || i==0) { //we only insert unique entries
		
			long matchIndex = getIndexLastMatchingStartLineSegment(startsArray,current_point);
			//std::cout << "matchIndex=" << matchIndex << std::endl;
			long current_point_count = 0;
			if (matchIndex >=0)  
				current_point_count = getCountMatchLineSegments(startsArray,matchIndex,current_point);
			//std::cout << "current_point_count=" << current_point_count << std::endl;
			std::pair<long,long> p = std::make_pair(current_point,current_point_count);
			//check cnt to ensure if there isnt any ,else we dun have to do anything
			cnt.insert(p);
		}
   }
	
  //purge the vector of pointers
	//std::cout <<" deleting startsArray " << std::endl;
	for (vector<LineSegment*>::iterator pObj = startsArray.begin();
        pObj != startsArray.end(); ++pObj) {
      delete *pObj; // Note that this is deleting what pObj points to,
                    // which is a pointer
   }
   //std::cout <<" clearing startsArray " << std::endl;
   startsArray.clear(); // Purge the contents so no one tries to delete them
                // again
   
   //std::cout <<" deleting endsArray " << std::endl;
   /*
   for (vector<LineSegment*>::iterator pObj = endsArray.begin();
        pObj != endsArray.end(); ++pObj) {
      delete *pObj; // Note that this is deleting what pObj points to,
                    // which is a pointer
   }
   //std::cout <<" clearing endsArray " << std::endl;
   endsArray.clear(); // Purge the contents so no one tries to delete them
                // again
   */       	
	
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
	std::vector<long>  cnt =fast_count_segments_v3(starts,ends,points);
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
	std::vector<long>  cnt =fast_count_segments_v3(starts,ends,points);
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
	
	std::cout << "Invoking fast_count_segments_v3 " << std::endl;
	std::vector<long>  cnt =fast_count_segments_v3(starts,ends,points);
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
	//std::cout << "Invoking fast_count_segments_v3 " << std::endl;
	std::vector<long>  cnt =fast_count_segments_v3(starts,ends,points);
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
  
  
  
  
  
  
 
  std::vector<long>  cnt = fast_count_segments_v3(starts, ends, points);
  
  
  
  for (size_t i = 0; i < cnt.size(); i++) {
	  
	
	
    std::cout << cnt[i] << ' ';
  }
  
  return 0;
}
