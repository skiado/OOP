#include <iostream>
using namespace std;

class Counter {        //base class
	protected:         //NOTE: not private
		unsigned int count;
	public:
		Counter() : count(0)
			{ }
		Counter(int c) : count(c)
			{ }
		unsigned int get_count() const
			{ return count; }
		Counter operator ++ ()     //incr count (prefix)
			{ return Counter(++count); }
};

int main(){
	Counter c1(37);
	
	cout << c1.get_count() << endl;
	++c1;
	++c1;
	cout << c1.get_count() << endl;
	return 0;
}

// g++ -o 01 07_01.cpp
	
