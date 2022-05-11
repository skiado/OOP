// function template
#include <iostream>
using namespace std;

template <typename T>
void swap(T* a, T* b) {
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	int i=5, j=6;
	long l=10, m=5;
	double x = 3.47, y = 3.48;
	char a = 'a', b = 'b';
	string c = "Μαρία", d = "Αντώνης";
	cout << i << " , " << j ;
	swap<int>(&i,&j);
	cout << " after swap " << i << " , " << j << endl;
	cout << l << " , " << m ;
	swap<long>(&l,&m);
	cout << " after swap " << l << " , " << m << endl;
	cout << a << " , " << b ;
	swap<char>(&a,&b);
	cout << " after swap " << a << " , " << b << endl;
	cout << c << " , " << d ;
	swap<string>(&c,&d);
	cout << " after swap " << c << " , " << d << endl;
	return 0;
}

// g++ -o 03 10_03.cpp
