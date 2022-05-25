#include <iostream>
using namespace std;

double division(int a, int b) {
   double r;
   if( b == 0 ) {
      r = -1;
   }
   else{
      r = (double)a/b;
   }
   return r;
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
   for(int i=10; i>=0; i--){
        z = division(x, i);
        if (z == -1){
             cout << "Διαίρεση με μηδέν !" << endl;
         }
         else{
             cout << i << "-" << z << endl;
         } 
   }
   return 0;
}

//  g++ -o 01 11_01.cpp
