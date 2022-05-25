#include <iostream>
using namespace std;

const int MAX = 3;

class Stack {
	private:
		int st[MAX];     
		int top;         //index of top of stack
	public:
		class ExcRange { 	//exception class for empty Stack
		};
	Stack(){ 
		top = -1; 
	}
	void push(int var){
		if(top >= MAX-1){
			throw ExcRange();
		}
		st[++top] = var;	//Πρώτα αυξάνεται το top και μετά παίρνει τιμή η επόμενη θέση του πίνακα
	}
	int pop(){
		if(top < 0){
			throw ExcRange();
		}
		return st[top--];	//Πρώτα επιστρέφει την τιμή st[top] και μετά μειώνεται η τιμή του top
	}
};

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
	catch (Stack::ExcRange){
		cout << endl << "Exception: Stuck out of range (empty or full)." << endl;
	}
	cout << "This is the end !" << endl;
	return 0;
}

// g++ -o 06 11_06.cpp
