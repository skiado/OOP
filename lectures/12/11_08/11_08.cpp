#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
	Stack s1;
	
	try {
		s1.push(11);
		s1.push(22);
		s1.push(33);
//		s1.push(44);		// Stack full !!
		cout << "1: " << s1.pop() << endl;
		cout << "2: " << s1.pop() << endl;
		cout << "3: " << s1.pop() << endl;
		cout << "4: " << s1.pop() << endl; 	//Stack empty !!
	}
	catch (ExcRange er){
		cout << endl << "Exception: Stuck out of range (empty or full)"  << endl;
	}
	cout << "This is the end !" << endl;
	return 0;
}


