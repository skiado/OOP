#include <iostream>
#include "Bio.h"
using namespace std;


Bio::Bio(){
}

Bio::Bio(string t, string w, double p,int a,string n) : History(t,w,p,a){
	bio_name = n;
}

void Bio::show(){
	cout << "Βιογραφία" << endl;
	History::show();
	cout << "Βιογραφούμενος : " << bio_name << endl;
	
}
