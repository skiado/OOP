#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

const int Date::days[] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

Date::Date(int day, int month, int year){
    setDate(day, month, year);
}

void Date::setDate(int day, int month, int year){
    if ((month >= 1) && (month <= 12)){
        this->month = month;
    } 
    else {
        throw invalid_argument("month must be within the range [0, 12], you enter : ");
    }
    if (day > 0 && day <= days[month] ){
    	this->day = day;
    }
    else {
    	throw out_of_range("day out of range : ");
    }
    this->year = year;
}

void Date::showDate(){
	cout << day << "/" << month << "/" << year << endl;
}
