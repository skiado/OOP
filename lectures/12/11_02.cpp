#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Διαίρεση με μηδέν !";
   }
   return ((double)a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
   for(int i=10; i>=0; i--){
    try {
        z = division(x, i);
        cout << x << " / " << i << " = " << z << endl;
    } 
    catch (const char* msg) {
        cerr  << x << " / " << i << " : " << msg << endl;
    }
   }
   cout << "This is the end !" << endl;
   return 0;
}

//  g++ -o 02 11_02.cpp
