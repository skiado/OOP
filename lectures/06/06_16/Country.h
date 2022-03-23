#include <string>
using namespace std;

class Country{
	private:
		string name;
		double population;
		int in_EU;
		int coastline;
	public:
		void set_name(string n);
		void set_population(int p);
		void set_EU(string eu);
		void set_coast(string c);
		string get_name();
		double get_population();
		int is_in_EU();
		int has_coastline();		
};
