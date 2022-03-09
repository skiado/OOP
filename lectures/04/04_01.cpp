#include <iostream>
#include "power.h"
using namespace std;

int main(){
	int x,e;
	
	cout << "x = ";
	cin >> x;
	cout << "exp = ";
	cin >> e;
	cout << x <<"^" << e << " = " << power(x,e) << endl;
	return 0;
}

// g++ -o 01 04_01.cpp power.cpp
