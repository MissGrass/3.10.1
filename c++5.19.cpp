//testin4.cpp--reading chars with cin.get()
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int ch;
	int count = 0;
	
	while ((ch = cin.get()) != EOF) {
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
    return 0;
}

