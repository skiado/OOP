#include<iostream>
#include "time.h"
using namespace std;

int Time::is_valid(int h,int m, double s){
		int flag = 1;
		if((h<0) || (h>24)){
			flag = 0;
		}
		if((m<0) || (m>60)){
			flag = 0;
		}
		if((s<0.0) || (s>60.0)){
			flag = 0;
		}
		return flag;
}

Time::Time(int h ,int m, double s) {
	if (is_valid(h,m,s)){
		hour = h;
		min = m;
		sec = s;
	}
	else {
		cout << "Λάθος τιμή στην ώρα "<< h <<':'<< m <<':'<< s <<" Αρχικοποίηση σε 0:0:0"<<endl;
		hour = 0;
		min = 0;
		sec = 0.0;
	}
} 	
	
void Time::print_t() const {
	cout << hour << ':' << min << ':' << sec << endl;
}
		
