//not.cpp--using the not operator
#include <iostream>
#include <climits>
bool is_int(double);

using namespace std;
int main() {
	using namespace std;
	double num;
	
	cout << "Yo, dude! Enter an integer value: ";

	cin >> num;
	while (!is_int(num)) {
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int (num);
	cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int (double x) {
//	cout << INT_MIN << " " << INT_MAX;
	if(x <=INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}

