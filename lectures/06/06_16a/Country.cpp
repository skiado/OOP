#include "Country.h"

Country::Country() {}

Country::Country(string n,int p,string eu,string c){
	name = n;
	population = p * 1000000;
	if (eu == "yes"){
		in_EU = 1;
	}
	else {
		in_EU = 0;
	}
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
