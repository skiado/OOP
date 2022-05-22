#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a = {2,4,6,7,8,10};
    
    for(int i : a){
        cout << i << ' ';
    }
    cout << endl;
    a.erase(a.begin()+3);
    a.insert(a.begin()+2, 11);
    for(int i : a){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}


//   g++ -o 04 12_04.cpp
