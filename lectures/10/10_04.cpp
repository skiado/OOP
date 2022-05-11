#include <iostream>
#include <string>
using namespace std;

template <typename atype>
int find(atype* array, atype value, int size){
	int index = -1;
	for(int j=0; j<size; j++){
		if(array[j]==value){
			index = j;
			break;
		}
	}
	return index;
}

int main(){
	char chArr[] = {'a','b','c','d','e'};
	int c_size = 5;
	int intArr[] = {11,12,13,14,15,16};
	int i_size = 6;
	double dblArr[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	int d_size = 7;
	string strArr[] = {"John","Paul","Hellen","Mary"};
	int s_size = 4;
	
	cout << "d in chArr index = " << find(chArr,'d',c_size) << endl;
	cout << "15 in intArr index = " << find(intArr,15,i_size) << endl;
	cout << "6.6 in dblArr index = " << find(dblArr,6.6,d_size) << endl;
	cout << "Helen in strArr index = " << find<string>(strArr,"Hellen",s_size) << endl;
	return 0;
}

// g++ -o 04 10_04.cpp
