#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif
#include <iostream>

class MCycle : public Vehicle {
	private:
		int sidecar;
	public:
		MCycle();
		MCycle(string o, string n, int y, int p);
		void show();
};
