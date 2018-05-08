//express.cpp--value of expressions
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int x;
	
	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	//x = 100;
	cout << "Now x = " << x << endl;
	cout <<"The expression x < 3 has the value ";
	cout << (x < 3 ) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << " The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << " The expression x > 3 has the value ";
	cout << (x > 3) << endl;
    return 0;
}

