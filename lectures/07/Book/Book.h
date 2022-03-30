#include <string>
using namespace std;

class Book{
	private :
		string title;
		string writer;
		double price;
	public:
		Book();
		Book(string t, string w, double p);
		void set_price(double p);
		void show();
};
