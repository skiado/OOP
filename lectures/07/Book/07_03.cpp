#include <iostream>
#include "Detective.h"
#include "Comic.h"
#include "Novel.h"
using namespace std;

int main(){
	Detective d;
	Comic c;
	Novel n;
	
	d = Detective("Έγκλημα στο Νείλο","Αγκάθα Κρίστη",7.65,"Πουαρό");
	c = Comic("Αστερίξ ο Γαλάτης","Ρενέ Γκοσινί",6.70,"Αλμπέρ Ουντερζό");
	n = Novel("Το Χρήμα","Εμίλ Ζολά",11.50);
	d.show();
	c.show();
	n.Novel::show();
	cout << endl << "Μετά τις αλλαγές στην τιμή. " << endl << endl;
	d.set_price(8.35);
	d.show();
	c.set_price(6.85);
	c.show();
	n.set_price(12.25);
	n.show();
	return 0;
}
