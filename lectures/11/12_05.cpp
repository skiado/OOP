#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec;  

	// Αρχικοποίησε το vec ώστε να περιέχει τους ακέραιους αριθμούς [100, 200, 300, 400]
	for (int i=0; i<4; i++)
		    vec.push_back((i + 1) * 100);
	for(int i : vec){
		cout << i << endl;
	}
	cout << "Πρώτο στοιχείο: " << vec.front() << endl;
	cout << "Τελευταίο στοιχείο: " << vec.back() << endl;
	cout << "Αριθμός στοιχείων στον πίνακα: " << vec.size() << endl;

	vec.erase(vec.end() - 1);  //Διαγραφή του τελευταίου στοιχείου (vec.end()-1)

	cout << endl << "Μετά την διαγραφή του τελευταίου στοιχείου, το νέο στοιχείο στο τέλος είναι το: " 
		         << vec.back() << endl;

	vec.erase(vec.begin()); // Διαγραφή του πρώτου στοιχείου

	cout << "Μετά την διαγραφή του πρώτου στοιχείου, το νέο πρώτο στοιχείο είναι το: "
		 << vec.front() << endl;

	cout << "Αριθμός στοιχείων στο πίνακα: " << vec.size() << endl;

	vec.insert(vec.begin(),-100);   // Εισαγωγή του -100 στην αρχή
	for(int i : vec){
		cout << i << endl;
	}
	return 0;
}

//   g++ -o 05 12_05.cpp
