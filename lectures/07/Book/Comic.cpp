#include <iostream>
#include "Comic.h"
using namespace std;

Comic::Comic(){
}

Comic::Comic(string t, string w, double p, string d) : Book(t,w,p){
	artist = d;
}

void Comic::show(){
	cout << "Κόμικ" << endl;
	Book::show();
	cout << "Καλλιτέχνης : " << artist << endl;
	
}
