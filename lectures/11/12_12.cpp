#include<iostream>
#include<iterator> 
#include<list> 
using namespace std;
int main()
{
    list<int> ar = { 1, 2, 3, 4, 5 };

    list<int>::iterator ptr;
      
    cout << "The list elements are : ";
    for (ptr = ar.begin(); ptr != ar.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;  
    return 0;    
}

// g++ -o 12 12_12.cpp
