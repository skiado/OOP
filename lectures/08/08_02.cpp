#include <iostream>
using namespace std;

class Base {
	private:
		int pri;
	protected:
		int pro;
	public:
		int pub;
};

class Pub : public Base {
	public :
		Pub(){
//			pri = 10;
			pro = 20;
			pub = 30;
		}
		int get_pro(){
			return pro;
		}
};

int main(){
	Base b;
	
	cout << "Object Base" << endl;
//	b.pri = 10;
//	b.pro = 20;
	b.pub = 30;
	cout // << "pri = " << b.pri 
		 //<< " pro = " << b.pro 
		 << " pub = " << b.pub << endl;
		 
	Pub p;
	cout << "Object Pub" << endl;
	cout //<< "pri = " << p.pri 
		 //<< " pro = " << p.pro 
		 << " get_pro() = " << p.get_pro()
		 << " pub = " << p.pub << endl;
		return 0;
}

// g++ -o 02 08_02.cpp
