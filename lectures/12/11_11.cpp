#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void check(T a,int x){
    bool result;
    result = binary_search(a.begin(), a.end(), x);
    if (result == true)
      cout << "Element " << x << " exist in container." << endl;
   else
      cout << "Element "<< x << " doesn't exist in container." << endl;  
}

int main() {
   vector<int> v ;
   bool result;

   for(int i =0;i<100;i+=2){
    v.push_back(i);
   }
   check(v,53);
   check(v,54);  

   return 0;
}

//  g++ -o 11 11_11.cpp
