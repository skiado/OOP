#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Student{
	private:
		static int count;
		string name;
		int am;
		
	public:
		Student(string n){
			count++;
			am = count;
			name = n;
		}
		// συνάρτηση const για να μην μπορεί να τροποποιήσει τις τιμές των μεταβλητών
		void print_s() const{  
			cout << "Αριθμός Μητρώου : " << setfill('0') << setw(3) << am << " Όνομα : " << name << endl;
		}
};
int Student::count = 0;  // αρχικοποίηση του count
  
int main() {
    Student s1("Αλίκη Παλαιολόγου");
    Student s2("Σπυρίδων Τρέχας");
    Student s3("Ελένη Μαφιόζου");
    
    s1.print_s();
    s2.print_s();
    s3.print_s();
    return 0;
}

// g++ -o 01 03_01.cpp
