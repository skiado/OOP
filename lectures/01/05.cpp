// πρόγραμμα που δείχνει την ανάγκη χρήσης του setw manipulator
#include <iostream>
using namespace std;

int main(){
    long pop1=2425785, pop2=47, pop3=9761;
    cout << "LOCATION " << "POP." << endl
        << "Portcity " << pop1 << endl
        << "Hightown " << pop2 << endl
        << "Lowville " << pop3 << endl;
    return 0;
}
// g++ -o 05 05.cpp
