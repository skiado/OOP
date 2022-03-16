#include "Die.h"

class PairOfDice{
	private:
		Die d1,d2;
		int num;
		int make_num(int x1,int x2);
	public:
		void roll();
		int get_number();
};
