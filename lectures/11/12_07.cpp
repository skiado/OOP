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
	my_list.sort();
	cout << "after sorting" << endl;
	show(my_list);
	my_list.insert(my_list.begin(),4);
	cout << "after inserting" << endl;
	show(my_list);
	my_list.insert(my_list.begin(),5,3);
	cout << "after multiple inserting" << endl;
	show(my_list);
	my_list.unique();
	cout << "after unique" << endl;
	show(my_list);
	return 0;
}

//  g++ -o 07 12_07.cpp
