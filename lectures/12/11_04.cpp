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
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Your age is: " << myNum << endl;
	} 
	catch(const char* s){
		cout << s << endl;
	}
	cout << "This is the end !" << endl;
	return 0;
}

// g++ -o 04 11_04.cpp
