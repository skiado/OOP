#include "Country.h"


void Country::set_name(string n){
	name = n;
}
void Country::set_population(int p){
	population = p * 1000000;
}
void Country::set_EU(string eu){
	if (eu == "yes"){
		in_EU = 1;
	}
	else {
		in_EU = 0;
	}
}
void Country::set_coast(string c){
	if (c == "yes"){
		coastline = 1;
	}
	else {
		coastline = 0;
	}
}
string Country::get_name(){
	return name;
}

double Country::get_population(){
	return population;
}

int Country::is_in_EU(){
	return in_EU;
}

int Country::has_coastline(){
	return coastline;
}
