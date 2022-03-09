#include<iostream>
#include "time.h"
using namespace std;

int main() {
   Time t1(11,23,45.0);
   Time t2(25,2,56.3);
   Time t3(23,59,56.34);
   Time t4;
 
   cout << "t1 = " ;
   t1.print_t();
   cout << "t2 = " ;
   t2.print_t();
   cout << "t3 = " ;
   t3.print_t();
   cout << "t4 = " ;
   t4.print_t();
   return 0;
}

// g++ -o 03 04_03.cpp time.cpp
