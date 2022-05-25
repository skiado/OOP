#include <iostream>
using namespace std;

int main(){
	int age;
	try {
		cout << "Age = ";
		cin >> age;
		if ((age >= 18)&&(age <= 120)) {
			cout << "Access granted - you are old enough."<< endl;
		} 
		else if (age < 18){
			throw (age);  
		}
		else{
			throw ("Probable wrong age");
		}
	}
	catch (...) {
		cout << "Access denied.\n";
	} 
	cout << "This is the end !" << endl;
	return 0;
}

// g++ -o 05 11_05.cpp
