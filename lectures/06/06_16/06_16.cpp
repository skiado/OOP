#include <fstream> //for file I/O
#include <iostream>
#include <string>
#include "Country.h"
using namespace std;

int main(){
	string c_name;
	double population;
	string is_in_EU;
	string line,coastline;
	Country e_c[50];

	ifstream infile("europe.csv");
	getline(infile,line);
	int i = 0;
	while(infile >> c_name >> population >> is_in_EU >> coastline){
		e_c[i].set_name(c_name);
		e_c[i].set_population(population);
		e_c[i].set_EU(is_in_EU);
		e_c[i].set_coast(coastline);
		i++;
	}
	int t_pop = 0;
	int t_in_EU = 0;
	int t_has_coast = 0;
	for(int j=0;j < i;j++){
		cout << e_c[j].get_name() << endl;
		t_pop += e_c[j].get_population();
		t_in_EU += e_c[j].is_in_EU();
		t_has_coast += e_c[j].has_coastline();
	}
	cout << "Πληθυσμός Ευρώπης: " << t_pop << endl
		<< "Χώρες της Ευρώπης: " << i << endl
		<< "Χώρες στην EE : " << t_in_EU << endl
		<< "Χώρες με ακτογραμμή : " << t_has_coast << endl;
	return 0;
}
