// function template
#include <iostream>
using namespace std;

template <typename T>
T GetMax (T a, T b) {
	T result;
	if (a>b){
		result = a;
	}
  	else {
  		result = b;
	}
	return result;
}

int main () {
	int i=5, j=6, k;
	long l=10, m=5, n;
	double x = 3.47, y = 3.48,z;
	k=GetMax<int>(i,j);
	n=GetMax<long>(l,m);
	z=GetMax<double>(x,y);
	cout << k << endl;
	cout << n << endl;
	cout << z << endl;
	return 0;
}

// g++ -o 01 10_01.cpp
