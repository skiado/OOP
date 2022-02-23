#include <iostream>
#include <string>

using namespace std;

struct movies_t {
  string title;
  int year;
};

// δήλωση συναρτήσεων
void print_m(movies_t movie);
movies_t input_m();

int main (){
  movies_t movie1;
  
  movie1 = input_m();
  print_m(movie1);
  
  return 0;
}

movies_t input_m(){
	movies_t m;
	cout << "Όνομα της ταινίας : ";
	getline (cin,m.title);				// 02_05.cpp
	cout << "Χρονιά : ";
	cin >> m.year;
	return m;
}

void print_m(movies_t movie){
	cout << "Εμφάνιση στοιχείων ταινίας " << endl
		<< "Ταινία : " << movie.title << endl
		<< "Χρονιά : " << movie.year << endl;
}

// g++ -o 04 02_04.cpp
