// Fibonacci
#include <iostream>
using namespace std;

int main(){
    //largest unsigned long
    const unsigned long limit = 4294967295;
    unsigned long next=0;
    unsigned long last=1;
    
 
    while( next < limit / 2 ) {
        cout << last << " ";
        long sum = next + last;
        next = last;
        last = sum;
    }
    cout << endl << "Χρυσή Τομή = " << (double)next / last ;
    cout << endl;
    return 0;
}

// g++ -o 06 06.cpp
