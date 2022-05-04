#include <iostream>
using namespace std;
  
class base {
	public:
		void print(){
			cout<< "print base class" <<endl; 
		}  
		void show() {
			cout<< "show base class" <<endl; 
		}
};
   
class derived:public base {
	public:
		void print() { 
			cout<< "print derived class" <<endl; 
		}   
		void show() {
			cout<< "show derived class" <<endl; 
		}
};
  
//main function
int main() {
	base b1;
    derived d1,d2;
    base bptr[3] = {d1,d2,b1};    
    
    bptr[0].show();
    d1.show();
    bptr[1].show();
    d2.show();
    bptr[2].show();
    b1.show();
    bptr[0].print();
    d1.print();
    bptr[1].print();
    d2.print();
    bptr[2].print();
    b1.print();
      
    return 0;
} 

// g++ -o 05 09_05.cpp
