#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using std::vector;
using std::string;
using std::pair;
using std::min;

struct Point {
	long x,y;
};
bool comparePointX(const Point & lp, const Point & rp) {
	return lp.x < rp.x;
}
bool comparePointY(const Point & lp, const Point & rp) {
	return lp.y < rp.y;
}
//double findClosestDistanceFromVectWithinD(vector<Point> dminToMidFromLeftAndRightVec);
double FindDistanceBetweenPoints(Point leftPoint, Point rightPoint) {
	long xDist = leftPoint.x-rightPoint.x;
	long yDist = leftPoint.y-rightPoint.y;
	return sqrt(xDist*xDist + yDist*yDist) ;
}
//applicable when #points <=3
double FindClosestDistanceByBruteForce(vector<Point> pointVec){
	double minDist = -1;
	//only 1 point left
	if (pointVec.size() ==1) { return 0;}
	//go through all of the points, and compute the shortest distance among them
	for (long i=0; i< pointVec.size();i++) {
		Point leftPoint = pointVec[i];
		
		for (long j=i+1; j< pointVec.size();j++) {
			Point rightPoint = pointVec[j];
			double dist = FindDistanceBetweenPoints(leftPoint,rightPoint);
			minDist = (minDist== -1 or dist < minDist )? dist : minDist;
		}
	}
	
	return minDist;
}

void test_FindClosestDistanceByBruteForce() {
	vector<Point> pointVec;
	Point p1;
	p1.x = 0;
	p1.y=0;
	Point p2;
	p2.x = 1;
	p2.y = 1;
	Point p3;
	p3.x = 4;
	p3.y = -3;
	pointVec.push_back(p1);
	pointVec.push_back(p2);
	pointVec.push_back(p3);
	std::cout << "ClosestDistByBruteForce=" << FindClosestDistanceByBruteForce(pointVec)<< std::endl;
}
double findClosestDistanceFromVectWithinD(vector<Point> dminToMidFromLeftAndRightVec, double shortestDist) {
	//based upon the pass in vector, sort by y
	sort(dminToMidFromLeftAndRightVec.begin(), dminToMidFromLeftAndRightVec.end(),comparePointY);
	
	double minDist = shortestDist;
	
	long lenVect = dminToMidFromLeftAndRightVec.size();
	for (long index_p1_i = 0; index_p1_i < lenVect; index_p1_i++) {
		for (long index_p2_i = index_p1_i+1; index_p2_i < lenVect; index_p2_i++) {
			double yDist = dminToMidFromLeftAndRightVec[index_p2_i].y - dminToMidFromLeftAndRightVec[index_p1_i].y;
			double distPt1VsPt2 = FindDistanceBetweenPoints(dminToMidFromLeftAndRightVec[index_p2_i], dminToMidFromLeftAndRightVec[index_p1_i]);
			minDist = min(distPt1VsPt2,minDist);
		}
	}
	
	return minDist;
}


//util to recursively find closest distance based on Points
double FindClosestDistance(const vector<Point> & pointVec){
	//assumption - sorted
	//find midpoint
	long len_pointVec = pointVec.size();
	
	long midIndex = len_pointVec/2;
	if (len_pointVec <= 3) {
		return FindClosestDistanceByBruteForce(pointVec);
	}
	
	
	//split 
	//left half
	vector<Point> leftVec(pointVec.begin(), pointVec.begin() + midIndex); //end point not inclusive, also index based, not absolute size
	//right half
	vector<Point> rightVec(pointVec.begin() + midIndex  , pointVec.end());
	
	
	double dLeft = FindClosestDistance(leftVec);
	double dRight = FindClosestDistance(rightVec);
	
	double dMin_Left_Right = min(dLeft,dRight);
	
	//for those that are within dMin_Left_Right of the split line from left and right
	vector<Point> dminToMidFromLeftAndRightVec;
	//since it is sorted by x, we will start from mid
	long xDistMid = pointVec[midIndex].x;
	for (long dIndex = 0; dIndex < pointVec.size() ; dIndex ++) {
		long abs_xDistMidVsCurr = abs(pointVec[dIndex].x - xDistMid );
		if (abs_xDistMidVsCurr <= dMin_Left_Right) { 
			dminToMidFromLeftAndRightVec.push_back(pointVec[dIndex]);
		}
	}
	
	
	
	return min(dMin_Left_Right,findClosestDistanceFromVectWithinD(dminToMidFromLeftAndRightVec,dMin_Left_Right));
}

//util to print out contents of the vector
void printVec(vector<Point> pointVec) {
	for (int x_index=0; x_index< pointVec.size() ;x_index++){
	  Point currPoint = pointVec[x_index];
	  
	  std::cout << "currPoint.x=" <<currPoint.x <<std::endl;
	  std::cout << "currPoint.y=" <<currPoint.y <<std::endl;
  }
}

double minimal_distance(vector<long> x, vector<long> y) {
  //write your code here
  //iterate over x and y
  //placed it into Point
  vector<Point> vectPoints;
  for (int x_index=0; x_index< x.size() ;x_index++){
	  Point newPoint;
	  newPoint.x = x[x_index];
	  newPoint.y = y[x_index];
	  vectPoints.push_back(newPoint);
  }
  
  //do sort on x
  sort(vectPoints.begin(), vectPoints.end(),comparePointX);
  
  //printVec(vectPoints);
  
  //find the mid point
  double closestDist = FindClosestDistance(vectPoints);
  
  return closestDist;
}
void test_subvector() {
	vector<Point> pointVec;
	Point p1;
	p1.x = 0;
	p1.y = 0;
	Point p2;
	p2.x = 10;
	p2.y = 10;
	Point p3;
	p3.x = 20;
	p3.y = 20;
	Point p4;
	p4.x = 30;
	p4.y = 30;
	pointVec.push_back(p1);
	pointVec.push_back(p2);
	pointVec.push_back(p3);
	pointVec.push_back(p4);
	long midIndex = pointVec.size()/2;
	vector<Point> leftVec(pointVec.begin(), pointVec.begin() + midIndex); //note end point is not inclusive!
	//iterate over leftVec to check
	for (int index_left = 0; index_left < leftVec.size(); index_left ++ ) {
		std::cout << "leftVec[" << index_left << "]=" << leftVec[index_left].x << ","<<leftVec[index_left].y << std::endl;
	}
	vector<Point> rightVec(pointVec.begin() + midIndex,pointVec.end());
	//iterate over leftVec to check
	for (int index_right = 0; index_right < rightVec.size(); index_right ++ ) {
		std::cout << "rightVec[" << index_right << "]=" << rightVec[index_right].x << ","<<rightVec[index_right].y << std::endl;
	}
	
	
	//now we test if the sub vector stores just a "view"
	//we now modify the "source"
	pointVec[0].x = -10;
	pointVec[0].y = -10;
	//iterate over original
	for (int index_orig = 0; index_orig < pointVec.size(); index_orig ++ ) {
		std::cout << "pointVec[" << index_orig << "]=" << pointVec[index_orig].x << ","<<pointVec[index_orig].y << std::endl;
	}
	
	//iterate over leftVec to check
	//no it is not, it is a copy
	for (int index_left = 0; index_left < leftVec.size(); index_left ++ ) {
		std::cout << "leftVec[" << index_left << "]=" << leftVec[index_left].x << ","<<leftVec[index_left].y << std::endl;
	}
}
int main_wanted() {
  size_t n;
  std::cin >> n;
  vector<long> x(n);
  vector<long> y(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> x[i] >> y[i];
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(9) << minimal_distance(x, y) << "\n";
}
//test
int main_test(){
	//test_FindClosestDistanceByBruteForce();
	test_subvector();
	return 0;
}

int main() {
	//return main_test();
	return main_wanted();
}
