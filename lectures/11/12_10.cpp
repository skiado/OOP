#include <iostream>
#include <ctime>
#include <list>
using namespace std;

struct my_time{
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
};

struct my_time current_time(time_t* now){
	struct my_time t;
	tm *ltm = localtime(now);
	t.year = 1900 + ltm->tm_year;
	t.month = 1 + ltm->tm_mon;
	t.day = ltm->tm_mday;
	t.hour = ltm->tm_hour;
	t.min = ltm->tm_min;
	t.sec = ltm->tm_sec;
	return t;
}

void show_time(struct my_time t){
	cout << t.day << '/' << t.month << '/' << t.year << " - " << t.hour << ':' << t.min << ':' << t.sec << endl;
}

void show_list(list<struct my_time> t){
	for(struct my_time a : t){
		show_time(a);
	}
}
long fibonacci(int n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
 	
int main() {
   long f;
   list <struct my_time> l;
   time_t now = time(0);
   struct my_time t;
   t = current_time(&now);
   l.push_back(t);
   f = fibonacci(40);
   now = time(0);
   t = current_time(&now);
   l.push_back(t);
   f = fibonacci(45);
   now = time(0);
   t = current_time(&now);
   l.push_back(t);
   f = fibonacci(47);
   now = time(0);
   t = current_time(&now);
   l.push_back(t);
   show_list(l);
   return 0;
}

// g++ -o 10 12_10.cpp
