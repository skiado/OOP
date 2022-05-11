#include "MCycle.h"
using namespace std;

MCycle::MCycle(){
}

MCycle::MCycle(string o, string n, int y, int p) : Vehicle(o,n,y) {
    sidecar = p;
}

void MCycle::show(){
    cout << "Δίκυκλο" << endl;
    Vehicle::show();
    if (sidecar > 0){
        cout << "Διαθέτει sidecar" << endl;
    }
}
