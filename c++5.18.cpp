//textin3.cpp--reading chars to end of file
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char ch;
	int count = 0;
//	ch = cin.get();
	cin.get(ch);
	while(cin.fail() == false) {//ch != EOF
		cout << ch;
		++count;
	//	ch = cin.get();
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
    return 0;
}

