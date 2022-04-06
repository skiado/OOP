#include <iostream>
using namespace std;

class A {		//base class
	private:
		int privdataA;     // οι συναρτήσεις έχουν παρόμοιους κανόνες πρόσβασης
	protected:
		int protdataA;
	public:
		int pubdataA;
};

class B : public A  {		//publicly-derived class
	public:
		void funct() {
			int a;
//			a = privdataA;    //error: δεν επιτρέπεται η πρόσβαση
			a = protdataA;   //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			a = pubdataA; 	 //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
		}
};

class C : private A  {		//privately-derived class
	public:
		void funct() {
			int a;
//			a = privdataA;  // error: δεν επιτρέπεται η πρόσβαση
			a = protdataA;  //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			a = pubdataA;  	//OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
		}
};

int main() {
	int a;
	B objB;
//	a = objB.privdataA;  // error: δεν επιτρέπεται η πρόσβαση
//	a = objB.protdataA;  // error: δεν επιτρέπεται η πρόσβαση
	a = objB.pubdataA;

	C objC;
//	a = objC.privdataA;  // error: δεν επιτρέπεται η πρόσβαση
//	a = objC.protdataA;  // error: δεν επιτρέπεται η πρόσβαση
//	a = objC.pubdataA;   // error: δεν επιτρέπεται η πρόσβαση
	return 0;
}

//  g++ -o 01 08_01.cpp
