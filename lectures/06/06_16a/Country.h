#include <string>
using namespace std;

class Country{
	private:
		string name;
		double population;
		int in_EU;
		int coastline;
	public:
		Country();
		Country(string n,int p,string eu,string c);
		string get_name();
		double get_population();
		int is_in_EU();
		int has_coastline();		
};
