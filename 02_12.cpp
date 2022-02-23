#include <iostream>
using namespace std;

// δήλωση συνάρτησης
int prime();

int main()
{
    int num, i, flag = 0;

    // κλήση της συνάρτησης χωρίς παραμέτρους
    num = prime();
    for (i = 2; i <= num/2; ++i)
    {
        if (num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout<<num<<" δεν είναι πρώτος αριθμός.";
    }
    else
    {
        cout<<num<<" είναι πρώτος αρθμός.";
    }
    cout << endl;
    return 0;
}

// ο τύπος της συνάρτησης είναι int
int prime()
{
    int n;

    printf("Δώσε έναν θετικό ακέραιο : ");
    cin >> n;

    return n;
}

//  g++ -o 12 02_12.cpp
