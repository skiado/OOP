#include <iostream>
#include<list>
#include <algorithm>
using namespace std;

int main(){
    list<int> a = {9,3,6,2,8,4,3,5,3,12,1,3,7,3};
    for(int x : a){
        cout << x << " , " ;
    }
    cout << endl;
    cout << "is sorted ? " << is_sorted(a.begin(),a.end()) << endl;
    cout << "3 appearances = " << count(a.begin(),a.end(),3) << endl;
    a.sort();
    for(int x : a){
        cout << x << " , " ;
    }
    cout << endl;
    cout << "is sorted ? " << is_sorted(a.begin(),a.end()) << endl;
    unique(a.begin(),a.end());
    cout << "after unique " << endl;
    for(int x : a){
        cout << x << " , " ;
    }
    cout << endl;

    return 0;    
}

// g++ -o 13 11_13.cpp
