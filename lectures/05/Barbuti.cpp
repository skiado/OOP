#include "Barbuti.h"


Barbuti::Barbuti(){
	p1.set_name("Παίκτης 1");
	p2.set_name("Παίκτης 2");
	active = 1;
};

int Barbuti::play(){
	int result;
	if (active == 1){
		result = p1.play();
		if (is_win(result)){
			p1.add_win();
			active = 2;
		}
		else if(is_loose(result)){
			p1.add_loose();
			active = 2;
		}
	}
	else {
		result = p2.play();
		if (is_win(result)){
			p2.add_win();
			active = 1;
		}
		else if(is_loose(result)){
			p2.add_loose();
			active = 1;
		}
	}
	return result;
};

int Barbuti::is_win(int r){
	int w = 0;
	if ((r==33)||(r == 35)||(r == 56)||(r == 66)){
		w = 1;
	}
	return w;
};

int Barbuti::is_loose(int r){
	int l = 0;
	if ((r==11)||(r == 12)||(r == 22)||(r == 44)){
		l = 1;
	}
	return l;
};

int Barbuti::get_rolls(){
	return (p1.get_rolls() + p2.get_rolls());
};

int Barbuti::get_win(int player){
	int w;
	if(player == 1){
		w = p1.get_win();
	}
	else {
		w = p2.get_win();
	}
	return w;
};

int Barbuti::get_loose(int player){
	int l;
	if(player == 1){
		l = p1.get_loose();
	}
	else {
		l = p2.get_loose();
	}
	return l;
};

string Barbuti::active_player(){
	if (active == 1){
		return p1.get_name();
	}
	else {
		return p2.get_name();
	}
};

string Barbuti::player_name(int n_player){
	if (n_player == 1){
		return p1.get_name();
	}
	else {
		return p2.get_name();
	}
};
