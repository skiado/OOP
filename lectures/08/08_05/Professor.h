#include <iostream>
#include "Employee.h"
#include "Publication.h"
using namespace std;

class Professor : private Employee , private Publication {
	private:
		string title;
	public:
		Professor(string n,int s,int p,int c,string t);
		void print();
};
