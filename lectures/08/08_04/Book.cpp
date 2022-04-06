#include <iostream>
#include "Book.h"
using namespace std;


Book::Book(){
}

Book::Book(string t, string w, double p){
	title = t;
	writer = w;
	price = p;
}

void Book::set_price(double p){
	price = p;
}

void Book::show(){
	cout << "Τίτλος : " << title 
		<< " Συγγραφέας : " << writer
		<< " Τιμή : " << price << endl;
}

