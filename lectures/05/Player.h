#include "PairOfDice.h"
#include <string>
using namespace std;

class Player{
	private:
		int rolls;
		int win;
		int loose;
		PairOfDice pod;
		string name;
	public:
		Player();
		void set_name(string n);
		int play();
		int get_rolls();
		int get_win();
		int get_loose();
		string get_name();
		void add_win();
		void add_loose();
};
