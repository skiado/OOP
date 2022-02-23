#include <iostream>
#include <string>
using namespace std;
 
void print(int i) {
    cout << "Printing int: " << i << endl;
}

void print(double  f) {
    cout << "Printing float: " << f << endl;
  }
  
void print(string c) {
    cout << "Printing string: " << c << endl;
}


int main(void) {
 
   // Call print to print integer
   print(5);
   
   // Call print to print float
   print(500.263);
   
   // Call print to print character
   print("Hello C++");
 
   return 0;
}

// g++ -o 15a 02_15a.cpp
