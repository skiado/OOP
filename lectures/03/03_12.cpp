#include<iostream>
using namespace std;

class Time {
	private:
		int hour;
		int min;
		double sec;
		int is_valid(int h,int m, double s){
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
	public:
		Time(int h = 0,int m = 0, double s = 0.0) {
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
		void print_t() const {
			cout << hour << ':' << min << ':' << sec << endl;
		}
};

int main() {
   Time t1(11,23,45.0);
   Time t2(25,2,56.3);
   Time t3(23,59,56.34);
   Time t4;
 
   cout << "t1 = " ;
   t1.print_t();
   cout << "t2 = " ;
   t2.print_t();
   cout << "t3 = " ;
   t3.print_t();
   cout << "t4 = " ;
   t4.print_t();
   return 0;
}

// g++ -o 12 03_12.cpp
