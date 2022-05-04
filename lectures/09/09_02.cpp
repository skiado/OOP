// C++ program for function overloading
#include <iostream>
  
using namespace std;
class F_O_Test {
    public:
	    void func(int x) {			// function with 1 int parameter
    		cout << "value of x is " << x << endl;
		}   
		void func(double x) {  			// function with same name but 1 double parameter
		    cout << "value of x is " << x << endl;
		} 
		void func(int x, int y) {		// function with same name and 2 int parameters
		    cout << "value of x and y is " << x << ", " << y << endl;
		}
};
  
int main() {    
    F_O_Test obj1;
      
    obj1.func(7);
    obj1.func(9.132);
    obj1.func(85,64);
    
    return 0;
} 

// g++ -o 02 09_02.cpp
