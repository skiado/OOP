#include<iostream>
#include<iterator>
#include<list>
using namespace std;

int main()
{
    list<int> ar = { 1, 2, 3, 4, 5 };

    list<int>::reverse_iterator ptr;

    cout << "The list elements are : ";
    for (ptr = ar.rbegin() ; ptr != ar.rend(); ptr++)
        cout << *ptr << " ";
    cout << endl;  
    return 0;    
}

// g++ -o 13 12_13.cpp
