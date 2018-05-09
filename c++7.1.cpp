//calling.cpp--defining,prototyping, and calling aa function
#include <iostream>
#include <cstring>

void simple();

using namespace std;
int main() {
	cout << "main() will call the simple() function:\n";
	simple();
	cout << "main() is finished with the simple() function.\n";
    return 0;
}

void simple() {
	cout << "I'm but a simple function.\n";
}

