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

class Pri : private Base {
	public :
		Pri(){
//			pri = 10;
			pro = 20;
			pub = 30;
		}
		int get_pro(){
			return pro;
		}
		int get_pub(){
			return pub;
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
		 
	Pri p;
	cout << "Object Pub" << endl;
	cout //<< "pri = " << p.pri 
		 //<< " get_pri() = " << p.get_pri()
		 //<< " pro = " << p.pro 
		 << " get_pro() = " << p.get_pro()
		 //<< " pub = " << p.pub 
		 << " get_pub() = " << p.get_pub() << endl;
	return 0;
}

// g++ -o 03 08_03.cpp
