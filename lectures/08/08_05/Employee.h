#include <iostream>
using namespace std;

class Employee {
	private:
		string name;
		int salary;
	public:
		Employee(string n,int s);
		string get_name();
		int get_salary();
		void set_salary(int s);
};
