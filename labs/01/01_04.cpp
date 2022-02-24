// C++ 02
 
#include <iostream>
#include <iomanip>  // for setw
using namespace std;
 
int main()
{

	for(int i=1;i<11;i++){
	    cout << setw(5) << i << setw(6)  << i*i*i<< endl;
    }
	return 0;
}

// g++ -o 01_04 -p 01_04.cpp
