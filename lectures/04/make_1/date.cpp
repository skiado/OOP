#include <iostream>
#include "date.h"
using namespace std;

int Date::is_valid(int d,int m, int y){
		int flag = 1;
		if((d<0) || (d>31)){
			flag = 0;
		}
		if((m<0) || (m>12)){
			flag = 0;
		}
		if(y<0){
			flag = 0;
		}
		return flag;
}

Date::Date(int d ,int m, int y) {
	if (is_valid(d,m,y)){
		day = d;
		month = m;
		year = y;
	}
	else {
		cout << "Λάθος τιμή στην ημερομηνία "<< d <<'/'<< m <<'/'<< y <<" Αρχικοποίηση σε 1/1/1900"<<endl;
		day = 1;
		month = 1;
		year = 1900;
	}
} 

void Date::print_d() const {
	cout << day << '/' << month << '/' << year << endl;
}	
