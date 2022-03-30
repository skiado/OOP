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

class CountDn : public Counter {   //derived class
	public:
		Counter operator -- ()     //decr count (prefix)
			{ return Counter(--count); }
};

int main(){
	CountDn c1;
	
	cout << c1.get_count() << endl;
	++c1;
	++c1;
	cout << c1.get_count() << endl;
	--c1;
	cout << c1.get_count() << endl;
	return 0;
}

// g++ -o 02 07_02.cpp
