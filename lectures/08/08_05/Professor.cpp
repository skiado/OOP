#include "Professor.h"

Professor::Professor(string n,int s,int p,int c,string t) :Employee(n,s) ,Publication(p,c){
	title = t;
}

void Professor::print(){
	cout << "Όνομα : " << get_name() << endl
		 << "Βαθμός : " << title << " Καθηγητής" << endl
		 << "Μισθός : " << get_salary() << endl
		 << "Δημοσιεύσεις : " << get_papers() << endl
		 << "Αναφορές : " << get_citations() << endl;
}


