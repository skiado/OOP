#include <iostream>
#include "num.h"
using namespace std;

int main(){
    Num n(35);
    cout << n.getNum() << endl;
    return 0;
}

// g++ -o 04 04_04.cpp num.cpp
