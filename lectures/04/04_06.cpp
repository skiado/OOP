#include <iostream>
#include "time.h"
#include "date.h"
using namespace std;

int main(){
    Date d1(8,3,2022),d2(17,26,2012);
    Time t1(12,15,2.0),t2(26,26,26);
    d1.print_d();
    t1.print_t();
    d2.print_d();
    t2.print_t();
    return 0;
}

// g++ -o 05 04_05.cpp num.cpp
