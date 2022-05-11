#include "Car.h"
#include "MCycle.h"
#include "Truck.h"
using namespace std;

int main(){
	Car v1,v2;
	MCycle m1;
	Truck t1;
	
	v1 = Car("Ιωάννης Γρηγορίου","ΑΤΚ 6547",2013,4);
	v2 = Car("Μαρία Κορωνάκη","ΙΟΑ 7518",2019,5);
	m1 = MCycle("Πέτρος Διαμαντίδης","ΒΟ564",2021,1);
	t1 = Truck("Δανιήλ Ζουγκλάκος","ΔΖΕ4583",2020,4);
	v1.show();
	v2.show();
	m1.show();
	t1.show();
	v1.set_owner("Δέσπω Διαμαντίδου");
	v1.show();
	return 0;
}
