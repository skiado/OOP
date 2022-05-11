#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(){
}

Car::Car(string o, string n, int y, int p) : Vehicle(o,n,y){
	passenger = p;
}

void Car::show(){
	cout << "Επιβατικό αυτοκίνητο" << endl;
	Vehicle::show();
	cout << "Αριθμός επιβατών : " << passenger << endl;
}
