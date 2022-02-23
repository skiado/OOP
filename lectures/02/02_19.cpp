// C++ Program to demonstrate Function overloading in
// Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments, it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0)
{
	return (x + y + z + w);
}
int sum(int x, int y, float z = 0, float w = 0)
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
   
   cout << "Κλήση με τρεις παραμέτρους (10,15,25.1) " << endl
    	<< sum(10, 15,25.1) << endl;
   
    cout << "Κλήση με τέσσερις παραμέτρους (10,15,25.1,30.2) " << endl
    	<< sum(10, 15,25.1,30.2) << endl;
    	
	return 0;
}

// g++ -o 19 02_19.cpp

