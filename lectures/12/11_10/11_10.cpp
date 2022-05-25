#include <iostream>
#include "Date.h"

using namespace std;

int main(){

	int d,m,y;
	
	for(int i = 0; i<3 ; i++){
		Date d1;
		cout << "Day = " ;
		cin >> d;
		cout << "Month = " ;
		cin >> m;
		cout << "Year = " ;
		cin >> y;
		try{
			d1.setDate(d,m,y);
		}
		catch (const invalid_argument& ia) {
			cerr << "Invalid argument: " << ia.what() << m << endl;
		}
		catch (const out_of_range& ar) {
			cerr << "Out of range : " << ar.what() << d << "/" << m << endl;
		}
		d1.showDate();
	}
	return 0;		
}

