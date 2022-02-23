// Πρόγραμμα υπολογισμού απόλυτης τιμής
// δουλεύει με int και double

#include <iostream>
using namespace std;

// function with float type parameter
double absolute(double var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main() {
    
    // call function with int type parameter
    cout << "Απόλυτη τιμή του -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Απόλυτη τιμή του 5.5 = " << absolute(5.5) << endl;
    return 0;
}

// g++ -o 15 02_15.cpp
