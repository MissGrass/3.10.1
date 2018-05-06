#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class point {
public:
	int x;
	int y;
//	int init() {
//		x = 0;
//		y = 0;
//	}

	point() {
		x = 0;
		y = 0; 
	}
	
	point(int a, int b) {
		x = a;
		y = b;
	}
	
	~point() {
		
	}

	int output() { 
		cout << x << endl << y << endl;
	}
	
	int output(int x, int y) {
		this -> x = x;
		this -> y = y;
	}
 };
 
 int main() {
 	point pt(3, 3);
 	pt.output(5, 5);
 //	pt.init();
// 	pt.x = 2;
// 	pt.y = 3;
 	pt.output(); 
 }
