#include <string>
using namespace std;

class Vehicle {
	private:
		string owner;
		string number;   // πινακίδα κυκλοφορίας
		int year;        // έτος κατασκευής
	public:
		Vehicle();
		Vehicle(string o, string n, int y);
		void set_owner(string o);
		void show();
};
