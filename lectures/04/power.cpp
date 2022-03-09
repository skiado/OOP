#include "power.h"

int power(int base, int exp){
	int r=1;
	for(int i=0; i<exp; i++){
		r *= base;
	}
	return r;
}
