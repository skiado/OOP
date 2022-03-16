#include "PairOfDice.h"


int PairOfDice::make_num(int x1,int x2){
	int n;
	
	if (x1 <= x2){
		n = (x1*10) + x2;
	}
	else {
		n = (x2*10) + x1;
	}
	return n;
};

void PairOfDice::roll(){
	d1.roll();
	d2.roll();
	int die1 = d1.get_number();
	int die2 = d2.get_number();
	num = make_num(die1,die2);
};

int PairOfDice::get_number(){
	return num;
};


