#include <iostream>
using namespace std;
  
class Base {
	public:
		virtual void show() = 0 ;
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
//	Base b1;
	Derv1 dv1a,dv1b;
	Derv2 dv2a,dv2b;
	Base* ptr[4] ={&dv1a,&dv1b,&dv2a,&dv2b};

	for(int i = 0;i<4; i++){
		ptr[i]->show();
	}	
	return 0;
}

// g++ -o 09 09_09.cpp
