#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

template <typename Type>
class Stack {
	private:
		Type st[MAX];		//stack: array of any type	
		int top;			//number of top of stack
	public:
		Stack() {			//constructor
			top = -1; 
		}
		void push(Type var){	//put member on stack
			st[++top] = var;    //first increase top
		}
		Type pop() {			//take member off stack
			return st[top--];   //top decrease after return st[top]
		}
};

int main() {
	Stack<double> s1;		//s1 is object of class Stack<float>
	s1.push(1111.1);
	s1.push(2222.2);
	s1.push(3333.3);
	cout << "**** DOUBLE ****" << endl;
	cout << "1: " << s1.pop() << endl
		 << "2: " << s1.pop() << endl
		 << "3: " << s1.pop() << endl;

	Stack<int> s2;
	s2.push(1231); 
	s2.push(2342);
	s2.push(3453);
	cout << "**** INTEGER ****" << endl;
	cout << "1: " << s2.pop() << endl
		 << "2: " << s2.pop() << endl
		 << "3: " << s2.pop() << endl;
	
	Stack<string> s3;
	s3.push("March"); 
	s3.push("April");
	s3.push("May");
	cout << "**** STRING ****" << endl;
	cout << "1: " << s3.pop() << endl
		 << "2: " << s3.pop() << endl
		 << "3: " << s3.pop() << endl;
	
	return 0;
}

// g++ -o 05 10_05.cpp
