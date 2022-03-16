#include <string>
#include "Player.h"
using namespace std;

Player::Player(){
	win = 0;
	loose = 0;
	rolls = 0;
};

void Player::set_name(string n){
	name = n;
};

int Player::play(){
	pod.roll();
	rolls++;
	return pod.get_number() ;
};

int Player::get_rolls(){
	return rolls;
};

int Player::get_win(){
	return win;
};
		
int Player::get_loose(){
	return loose;
};
		
		
string Player::get_name(){
	return name;
};

void Player::add_win(){
	win++;
};

void Player::add_loose(){
	loose++;
};
