#include <iostream>
using namespace std;

class A {		//base class
	private:
		int privdataA;     // οι συναρτήσεις έχουν παρόμοιους κανόνες πρόσβασης
	protected:
		int protdataA = 13;
	public:
		int pubdataA = 33;
};

class B : public A  {		//publicly-derived class
	public:
		int funct_prot() {
			int a,b;
//			a = privdataA;    //error: δεν επιτρέπεται η πρόσβαση
			b = protdataA;   //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			a = pubdataA; 	 //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			return b;
		}
};

class C : private A  {		//privately-derived class
	public:
		int funct_prot() {
			int a;
//			a = privdataA;  // error: δεν επιτρέπεται η πρόσβαση
			a = protdataA;  //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
//			a = pubdataA;  	//OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			return a;
		}
		int funct_pub() {
			int a;
//			a = privdataA;  // error: δεν επιτρέπεται η πρόσβαση
//			a = protdataA;  //OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			a = pubdataA;  	//OK  οι συναρτήσεις της derived class έχουν πρόσβαση στα protected και public data
			return a;
		}
};

int main() {
	int a;
	B objB;
//	a = objB.privdataA;  // error: δεν επιτρέπεται η πρόσβαση
	a = objB.funct_prot();  
	cout << "objB" << endl << "A.protdataA = " << a << endl;
//	a = objB.pubdataA;

	C objC;
//	a = objC.privdataA;  // error: δεν επιτρέπεται η πρόσβαση
	a = objC.funct_prot();  
	cout << "objC" << endl << "A.protdataA = " << a << endl;
	a = objC.funct_pub();
	cout  << "A.pubdataA = " << a << endl;
	return 0;
}

//  g++ -o 01a 08_01a.cpp
