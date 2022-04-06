#include <iostream>
#include "History.h"
using namespace std;


History::History(){
}

History::History(string t, string w, double p,int a) : Book(t,w,p){
	age = a;
}

void History::show(){
	cout << "Ιστορικό" << endl;
	Book::show();
	cout << "Εποχή : " << age << endl;
	
}
