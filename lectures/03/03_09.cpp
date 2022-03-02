// Πρόγραμμα C++ που δείχνει τη χρήση
// static μεταβλητών σε μία συνάρτηση
#include <iostream>
#include <string>
using namespace std;
  
void c_print() {     
    static int count = 100;  // static variable
    cout << count << " ";
    count++;               // Η τιμή αυξάνεται κάθε φορά που καλείται η συνάρτηση
}
  
int main() {
    for (int i=0; i<15; i++){
        c_print();
    }
    cout << endl;
    return 0;
}

// g++ -o 09 03_09.cpp
