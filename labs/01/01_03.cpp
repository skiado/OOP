// C++ 03
 
#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;
 
int main()
{
	double e_d=1.144,e_y=131.541,e_f=1.053,e_s=0.842;
    double e;
    
    cout << "Δώσε το ποσό σε ευρώ :";
    cin >> e;
	cout << "Τα " << e << "ευρώ αντιστοιχούν σε :" << endl;
    cout << setw(10) << fixed << setprecision(3) << e*e_d << "  δολλάρια"  << endl;
    cout << setw(10) << fixed << setprecision(3)<< e*e_y << "  γιέν"  << endl;
    cout << setw(10) << fixed << setprecision(3)<< e*e_f << "  ελβετικά φράγκα"  << endl;
    cout << setw(10) << fixed << setprecision(3)<< e*e_s << "  στερλίνες"  << endl;
	return 0;
}

// g++ -o 01_03 -p 01_03.cpp
