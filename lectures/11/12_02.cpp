#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> pol;
    int a;
    
    cout << "Πολλαπλάσια του 7" << endl << "Πόσα ; ";
    cin >> a;
    for(int i=7;i<=7*a;i+=7){
        pol.push_back(i);
       }
    for(int i : pol){
        cout << i << endl;
       }
    	
	return 0;
}

//   g++ -o 02 12_02.cpp
