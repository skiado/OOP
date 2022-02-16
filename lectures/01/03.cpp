// παρουσίαση cin, newline
#include <iostream>
using namespace std;

int main(){
    int ftemp;
   
    cout << "Δώσε τη θερμοκρασία σε βαθμούς fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp-32) * 5 / 9;
    cout << "Ισοδύναμο σε βαθμούς Celsius: " << ctemp << '\n';
    return 0;
}

// g++ -o 03 03.cpp
