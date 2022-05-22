#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> order = {3.99, 12.99, 2.49};

	for(int i=0; i<3;i++){
		cout << order[i] << endl;
	}

	vector<int> a;
	for(int i=0; i<50;i++){
		a.push_back(i);
	}
	for(int i=45; i<50;i++){
		cout << a[i] << endl;
	}
	cout << "Μέγεθος a = " << a.size() << endl;
	a.pop_back();
	cout << "Μετά το pop_back" << endl << "Μέγεθος a = " << a.size() << endl;
	return 0;
}

//   g++ -o 01 12_01.cpp
