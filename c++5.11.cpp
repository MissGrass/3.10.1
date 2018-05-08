//compstr1.cpp--comparing strings using arrays
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++) {//	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
    return 0;
}

