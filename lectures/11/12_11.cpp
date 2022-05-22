#include<iostream>
#include<iterator> 
#include<vector> 
using namespace std;

int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };
      
    vector<int>::iterator ptr;
      
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr != ar.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;  
    return 0;    
}

// g++ -o 11 12_11.cpp
