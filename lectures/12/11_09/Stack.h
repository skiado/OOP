#include "ExcRange.h"
using namespace std;

const int MAX = 3;

class Stack {
	private:
		int st[MAX];     
		int top;         //index of top of stack
	public:
		Stack(); 
		void push(int var);
		int pop();
};
