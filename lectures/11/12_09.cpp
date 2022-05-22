#include <iostream>
#include <ctime>
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

int main() {
   // current date/time based on current system
   time_t now = time(0);
   struct my_time t;
   t = current_time(&now);
   show_time(t);
   return 0;
}

// g++ -o 09 12_09.cpp
