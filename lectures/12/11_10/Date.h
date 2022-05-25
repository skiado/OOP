#include <iostream>
using namespace std;

class Date {
	private:
		int month;
		int day;
		int year;

		static const int days[]; 
    public:
		Date(int m = 1, int d = 1, int y = 1900);
		void setDate(int, int, int);
		void showDate();
};

