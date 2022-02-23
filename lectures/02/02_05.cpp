#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	
	cout << "Επίθετο Όνομα : " ;
	getline(cin,name);
	cout << name << endl;
	cout << "Επίθετο Όνομα : " ;
	cin >> name;
	cout << name << endl;
	
	return 0;
}

// g++ -o 05 02_05.cpp
