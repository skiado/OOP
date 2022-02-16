// demonstrates floating point variables
#include <iostream>
using namespace std;

int main(){
    double rad;
    const double PI = 3.14159F;
    
    cout << "Enter radius of circle: ";
    cin >> rad;
    double area = PI * rad * rad;
    cout << "Area is " << area << endl;
    return 0;
}
// g++ -o 04 04.cpp
