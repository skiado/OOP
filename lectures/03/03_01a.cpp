#include <iostream>
#include <string>
using namespace std;

class First{
	private:
		int a;
	public:
		int b;	
		void set_a(int x);
		void set_a();
		void print();
		void print(string s);	
};

void First::set_a(int x){
	a = x;
};

void First::set_a(){
	cout << "a = ";
	cin >> a;
};

void First::print(){
	cout << "a = " << a << "  b = " << b << endl;
};

void First::print(string s){
	cout << s << endl 
		<< "a = " << a << "  b = " << b << endl;
};

int main(){
	First o1,o2;
	
	o1.b = 16;
	o1.set_a(15);
	cout << "o1" << endl;
	o1.print();
	o2.b = 36;
	o2.set_a();
	o2.print("o2");
	return 0;
};

// g++ -o 01a 03_01a.cpp
