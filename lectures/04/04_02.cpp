#include <iostream>
#include "power.h"
#include "math.h"
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

// g++ -o 02 04_02.cpp power.cpp
