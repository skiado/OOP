#include <iostream>
using namespace std;

int main(){
	int age;
	try {
		cout << "Age = ";
		cin >> age;
		if (age >= 18) {
			cout << "Access granted - you are old enough."<< endl;
		} 
		else {
			throw (age);  
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Your age is: " << myNum << endl;
	} 
	cout << "This is the end !" << endl;
	return 0;
}

// g++ -o 03 11_03.cpp
