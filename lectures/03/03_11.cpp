#include<iostream>
using namespace std;

class Test_c {

   int val;

   public:
	   Test_c(int x = 0) {
	      val = x;
	   }
	   int getValue() const {
	      return val;
   	   }
};

int main() {
   Test_c d1(28),d2,d3(35);
 
   cout << "d1.val = " << d1.getValue() << endl
   		<< "d2.val = " << d2.getValue() << endl
		<< "d3.val = " << d3.getValue() << endl;
   return 0;
}

// g++ -o 11 03_11.cpp
