#include <iostream>
using namespace std;

// δήλωση αυνάρτησης
int prime(int n);

int main()
{
    int num, flag = 0;
    cout << "Δώσε έναν θετικό ακέραιο : ";
    cin >> num;

    // η μεταβλητή num δίνεται ως παράμετρος στη συνάρτηση
    flag = prime(num);

    if(flag == 1)
        cout << num << " δεν είναι πρώτος αριθμός.";
    else
        cout<< num << " είναι πρώτος αρθμός.";
    cout << endl;
    return 0;
}

/* η συνάρτηση επιστρέφει ακέραια τιμή  */
int prime(int n)
{
    int i;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
            return 1;
    }

    return 0;
}


//  g++ -o 14 02_14.cpp
