#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(){
}

Vehicle::Vehicle(string o, string n, int y){
	owner = o;
	number = n;
	year = y;
}

void Vehicle::set_owner(string o){
	owner = o;
}

void Vehicle::show(){
	cout << "Αριθμός Κυκλοφορίας : " << number
		<< " - Ιδιοκτήτης : " << owner
		<< " - Έτος Κατασκευής : " << year << endl;
}
	
