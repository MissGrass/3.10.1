#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class Animal {
public:
	Animal(int Height, int Width) {
		cout << "animal construct" << endl;
	}
	~Animal() {
		cout << "animal disconstruct" << endl;
	}
	void eat(){
		cout << "animal eat" << endl;
	}

	void sleep(){
		cout << "animal sleep" << endl;
	}

	virtual void breathe() {
		cout << "animal breathe" << endl;
	}
}; 

class Fish : public Animal {
public:
	Fish() : Animal(400, 300),a(1){
		cout << "fish construct" << endl;
	}
	~Fish(){
		cout << "fish disconstruct" << endl;
	}
//	void breathe(){
//	//	Animal :: breathe();
//		cout << "fish bubble" << endl;
//	}
private:
	const int a;
};

void fn(Animal *pAn) {
	pAn -> breathe();
}

int main() {
//	Animal an;
//	an.eat();
	Fish fh;
	Animal *pAn;
	pAn = &fh;
	fn(pAn);
//	fh.breathe();
//	fh.breathe();
}

