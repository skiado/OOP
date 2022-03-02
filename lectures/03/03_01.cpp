#include <iostream>
#include <string>
using namespace std;

class first{
	private:
		int a;
	public:
		int b;
		void set_a(int x){
			a = x;
		};
		void set_a(){
			cout << "a = ";
			cin >> a;
		};
		void print(){
			cout << "a = " << a << "  b = " << b << endl;
		};
		void print(string s){
			cout << s << endl 
				<< "a = " << a << "  b = " << b << endl;
		};
};

int main(){
	first o1,o2;
	
	o1.b = 16;
	o1.set_a(15);
	cout << "o1" << endl;
	o1.print();
	o2.b = 36;
	o2.set_a();
	o2.print("o2");
	return 0;
};

// g++ -o 01 03_01.cpp
