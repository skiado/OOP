#include <iostream>
#include "Barbuti.h"
using namespace std;

int main(){
	Barbuti b;
	
	while (b.get_rolls() < 100){
		cout << "Παίζει ο " << b.active_player() << endl;
		int p = b.play();
		cout << "Έφερε : " << p << endl
			 << "Ρίψεις ζαριών : " << b.get_rolls() << endl
			 << b.player_name(1) << " Κέρδισε : " <<  b.get_win(1) << " Έχασε : " << b.get_loose(1) << endl
			 << b.player_name(2) << " Κέρδισε : " <<  b.get_win(2) << " Έχασε : " << b.get_loose(2) << endl;
	}
	return 0;
};
