#include "Truck.h"
using namespace std;

Truck::Truck(){
}

Truck::Truck(string o, string n, int y, int p) : Vehicle(o,n,y) {
    axons = p;
}

void Truck::show(){
    cout << "Φορτηγό" << endl;
    Vehicle::show();
    cout << "Αριθμός Αξόνων : " << axons << endl;
}
