#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream my_file;
	string line;
	my_file.open("06_02_file.txt",ios::trunc | ios::out | ios::in);   
														// by default openmode = ios::in|ios::out mode
	if (!my_file) {
		cout << "File not created!" << endl;
	}
	else {
		cout << "File created successfully!" << endl;
		my_file << "Ιόνιο Πανεπιστήμιο" << endl;
		getline(cin,line);
		my_file << line << endl;
	}
	my_file.seekg(0,ios::beg); // μετάβαση στην αρχή του αρχείου
	while (getline (my_file, line)) {
		cout << line << endl;
	}
	my_file.close();
	return 0;
}

// g++ -o 02 06_02.cpp
