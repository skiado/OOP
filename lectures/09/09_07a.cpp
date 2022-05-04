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
	Derv1 dv1a,dv1b;
	Derv2 dv2a,dv2b;
	Base* ptr[4] ={&dv1a,&dv1b,&dv2a,&dv2b};

	for(int i = 0;i<4; i++){
		ptr[i]->show();
	}	
	
	return 0;
}

// g++ -o 07a 09_07a.cpp
