#include <iostream>
using namespace std;

// δήλωση συνάρτησης
void prime(int n);

int main()
{
    int num;
    cout << "Δώσε έναν θετικό ακέραιο : ";
    cin >> num;
    
    // η μεταβλητή num δίνεται ως παράμετρος στη συνάρτηση
    prime(num);
    return 0;
}

// Η συνάρτηση δεν επιστρέφει κάτι κι έτσι έχει τύπο void
void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << n << " δεν είναι πρώτος αριθμός.";
    }
    else {
        cout << n << " είναι πρώτος αρθμός.";
    }
    cout << endl;
}

//  g++ -o 13 02_13.cpp

