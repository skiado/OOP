#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream my_file;
	my_file.open("06_03_file.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		string line;
	 
		while(getline(my_file,line)){
			cout << line << endl;
		}
	}
	ifstream my_File;
	my_File.open("06_03_file.txt");
	char ch;
	my_File.seekg(10,ios::beg);
	while (1) {
		my_File >> ch;
		if (my_File.eof())
			break;
		cout << ch;
	}
	my_File.close();
	cout << endl;
	
	return 0;
}

// g++ -o 03 06_03.cpp

