#include <iostream>
using namespace std;

int main(){
    double rad;
    const double PI = 3.14159F;
    
    cout << "Δώσε την ακτίνα του κύκλου : ";
    cin >> rad;
    double area = PI * rad * rad;
    cout << "Το εμβαδόν είναι : " << area << endl;
    return 0;
}
// g++ -o 04 04.cpp
