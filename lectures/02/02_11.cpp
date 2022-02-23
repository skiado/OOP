# include <iostream>
using namespace std;

// δήλωση συνάρτησης
void prime();

int main()
{
    // κλήση της συνάρτησης χωρίς παραμέτρους
    prime();
    return 0;
}


// τύπος συνάρτησης  void  γιατί δεν επιστρέφει κάτι
void prime()
{

    int num, i, flag = 0;

    cout << "Δώσε έναν θετικό ακέραιο : ";
    cin >> num;

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1; 
            break;
        }    }

    if (flag == 1)
    {
        cout << num << " δεν είναι πρώτος αριθμός." << endl;
    }
    else
    {
        cout << num << " είναι πρώτος αρθμός." << endl;
    }
}

// g++ -o 11 02_11.cpp
