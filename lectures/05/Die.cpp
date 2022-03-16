// class μοντελοποίησης ενός ζαριού
#include "Die.h"

void Die::roll(){
	num = mr.get_number(6); 
};

int Die::get_number(){
	return num;
};

MyRandom Die::mr;

