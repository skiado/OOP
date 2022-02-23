// C++ Program to demonstrate Default Arguments
#include <iostream>
using namespace std;
 
// Συνάρτηση με προεπιλεγμένες παραμέτρους,
// μπορεί να κληθεί με 2,3 ή 4 παραμέτρους
int sum(int x, int y, int z = 0, int w = 0)
{
    return (x + y + z + w);
}
 
int main(){

    cout << "Κλήση με δύο παραμέτρους (10,15) " << endl
    	<< sum(10, 15) << endl;
   
   cout << "Κλήση με τρεις παραμέτρους (10,15,25) " << endl
    	<< sum(10, 15,25) << endl;
   
    cout << "Κλήση με τέσσερις παραμέτρους (10,15,25,30) " << endl
    	<< sum(10, 15,25,30) << endl;

    return 0;
}


// g++ -o 18 02_18.cpp
