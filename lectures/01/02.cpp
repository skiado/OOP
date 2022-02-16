// intvars.cpp
// demonstrates integer variables
#include <iostream>
using namespace std;

int main(){
    int var1;    //define var1
    int var2;    //define var2
    
    var1 = 20;
    var2 = var1 + 10;
    cout << "var1+10 is ";
    cout << var2 << endl;
    return 0;
}

// g++ -o 02 02.cpp
