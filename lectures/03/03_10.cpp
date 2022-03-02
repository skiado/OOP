// Πρόγραμμα C++ που δείχνει τη χρήση
// static μεταβλητών σε μία class
#include <iostream>
using namespace std;

class s_test{
	private:
		static int count;
	public:
		s_test(){
			count++;  // Η τιμή αυξάνεται κάθε φορά που δημιουργείται νέο αντικείμενο
		}
		int getcount(){
			return count;
		}
};
int s_test::count = 10;  // αρχικοποίηση του count
  
int main() {
    s_test t1,t2,t3;
    
    cout << "count= " << t1.getcount() << endl
    	 << "count= " << t2.getcount() << endl
    	 << "count= " << t3.getcount() << endl;
    return 0;
}

// g++ -o 10 03_10.cpp
