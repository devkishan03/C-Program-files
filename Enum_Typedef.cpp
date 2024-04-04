#include <iostream>
using namespace std;

enum day {sun,mon=5,tue,wed,thu,fri,sat};
typedef int marks;
typedef int rollno;

int main() {
	
	day d=tue;
	cout<<d<<"\n";
	
	marks m1,m2,m3=1;
	rollno r1,r2,r3=3;
	
	cout<<m3<<","<<r3;
	
	return 0;
	
	
	
}
