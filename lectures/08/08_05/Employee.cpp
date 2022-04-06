#include "Employee.h"

Employee::Employee(string n,int s){
	name = n;
	salary = s;
}

string Employee::get_name(){
	return name;
}

int Employee::get_salary(){
	return salary;
}

void Employee::set_salary(int s){
	salary = s;
}
