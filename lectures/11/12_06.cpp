#include <iostream>
#include <list>
using namespace std;

template <typename T>
void show(list<T> l){
	for (T x : l) {
		cout << x << endl;
	}
}


int main() {
	list<int> my_list = { 12, 5, 10, 9 };
	show(my_list);
	cout << "after push_front" << endl;
	my_list.push_front(8);
	show(my_list);
	cout << "after push_back" << endl;
	my_list.push_back(18);
	show(my_list);
	return 0;
}

//  g++ -o 06 12_06.cpp
