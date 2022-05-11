#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif

class Car : public Vehicle {
	private:
		int passenger;
	public:
		Car();
		Car(string o, string n, int y, int p);
		void show();
};
