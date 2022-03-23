#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
	ofstream myFile;
   
	myFile.open("06_04.dat", ios::out | ios::binary);
	for(int i=1;i <11 ;i++){
		myFile.write((char*)&i,sizeof(i));
	}
	myFile.close();
	ifstream ReadFile;
	
	ReadFile.open("06_04.dat",  ios::in | ios::binary);
   	int r;
   	while (1){
   		ReadFile.read((char*)&r,sizeof(r));
   		if (ReadFile.eof())
			break;
   		cout << r << endl;
   	}
   	ReadFile.close();
	return 0;
}

// g++ -o 04 06_04.cpp
