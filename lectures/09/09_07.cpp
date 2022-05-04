#include <iostream>
using namespace std;
  
class Base {
	public:
		void show(){ 
			cout << "Base" << endl; 
		}
};

class Derv1 : public Base {
	public:
		void show() {
			cout << "Derv1" << endl; 
		}
};

class Derv2 : public Base {
	public:
		void show() {
			cout << "Derv2" << endl; 
		}
};

int main() {
	Derv1 dv1;
	Derv2 dv2;
	Base* ptr;

	ptr = &dv1;
	ptr->show();
	dv1.show();
	
	ptr = &dv2;
	ptr->show();
	dv2.show();
	
	return 0;
}

// g++ -o 07 09_07.cpp
