#ifndef MYRANDOM_H
#define MYRANDOM_H
#include "MyRandom.h"
#endif
class Die {
	private:
	    static MyRandom mr;
		int num;
	public:
		void roll();
		int get_number();
};


