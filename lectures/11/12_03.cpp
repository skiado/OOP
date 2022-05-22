#include <iostream>
#include <vector>
using namespace std;

int main(){
    double arr[] = { 1.1, 2.2, 3.3, 4.4 };
    vector<double> v1(arr, arr+4);
    cout << v1.size() << endl;
    for(double x : v1){
        cout << x << " ";
    }
    cout << endl;
    vector<double> v2 = {5.5,6.6,7.7,8.8};
    
    v1.swap(v2);
    while( !v2.empty() ){
        cout << v2.back() << ' ';
        v2.pop_back();
    }
    cout << endl << v2.empty() << endl;
    for(double x : v1){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

//   g++ -o 03 12_03.cpp
