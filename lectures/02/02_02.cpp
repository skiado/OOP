#include <iostream>
using namespace std;
 
// Function Definition
// συνάρτηση που επιστρέφει τον μεγαλύτερο δύο αριθμών
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int ret;
 
   // κλήση συναρτησης
   ret = max(a, b);
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 


// g++ -o 02 02_02.cpp
