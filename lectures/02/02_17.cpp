#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 15);

int main() {
    int count = 30;

    cout << "Κλήση χωρίς παράμετρο (): " << endl;
    // *, 15 will be parameters
    display(); 
    
    cout << "Κλήση με μια παράμετρο ('#'): " << endl;
     // #, 15 will be parameters
    display('#'); 
    
    cout << "Κλήση με δύο παραμέτρους ('$',30) : " << endl;
    // $, 30 will be parameters
    display('$', count); 

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}

// g++ -o 17 02_17.cpp
