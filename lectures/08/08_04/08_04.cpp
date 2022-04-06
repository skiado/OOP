#include <iostream>
#ifndef HISTORY_H
#define HISTORY_H
#include "History.h"
#endif
#include "Bio.h"
//#include "Comic.h"
//#include "Novel.h"
using namespace std;

int main(){
	History h1;
	h1 = History("Πελλοπονησιακός Πόλεμος","Θουκιδίδης",12.65,-450);
	h1.show();
	cout << endl << "Μετά τις αλλαγές στην τιμή. " << endl << endl;
	h1.Book::set_price(13.00);
	h1.show();
	
	Bio b1;
	b1 = Bio("Ουίνστον Τσώρτσιλ","Reynoldson Fiona",5.78,1900,"Ουίνστον Τσώρτσιλ");
	b1.show();
	b1.set_price(6.45);
	cout << endl << "Μετά τις αλλαγές στην τιμή. " << endl << endl;
	
	b1.show();

	return 0;
}


