#include <iostream>
#include "Detective.h"
using namespace std;

Detective::Detective(){
}

Detective::Detective(string t, string w, double p, string d) : Book(t,w,p){
	detective = d;
}

void Detective::show(){
	cout << "Αστυνομικό Μυθιστόρημα" << endl;
	Book::show();
	cout << "Ντετέκτιβ : " << detective << endl;
	
}
