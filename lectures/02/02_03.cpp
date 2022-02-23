#include <iostream>
using namespace std;

// ορισμός συνάρτησης
void swapnum(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}

int main() {
  int a = 10;
  int b = 20;

  cout << "a = " << a << "  b = " << b << endl;
  swapnum(a, b);
  cout << "Μετά την κλήση της swapnum \n" 
       <<  "a = " << a << "  b = " << b << endl;
  
  return 0;
}

// g++ -o 03 02_03.cpp
