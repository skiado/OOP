#include <iostream>
#include "Novel.h"
using namespace std;

Novel::Novel() : Book(){
}

Novel::Novel(string t, string w, double p) : Book(t, w, p){
}

void Novel::show(){
	cout << "Μυθιστόρημα" << endl;
	Book::show();
}

