#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif
#include <iostream>

class Truck : public Vehicle {
	private:
		int axons;
	public:
		Truck();
		Truck(string o, string n, int y, int p);
		void show();
};
