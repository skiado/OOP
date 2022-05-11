#include <iostream>
#include <string>
using namespace std;

template<typename TYPE>		//struct link<TYPE>
struct link{
	TYPE data;
	link* next;            //pointer to next link
};

template<typename TYPE> 
class linklist {
	private:
		link<TYPE>* first;		//pointer to first link
	public:
	linklist();
	void additem(TYPE d);		//add data item (one link)
	void display();				//display all links
};

template<typename TYPE>	
linklist<TYPE>::linklist(){ 
	first = NULL; 
}
template<typename TYPE>	
void linklist<TYPE>::additem(TYPE d){
	link<TYPE>* newlink = new link<TYPE>;   //make a new link
	newlink->data = d;						//give it data
	newlink->next = first;					//it points to next link
	first = newlink;						//now first points to this
}
template<typename TYPE>	
void linklist<TYPE>::display(){
	link<TYPE>* current = first;			//set ptr to first link
	while( current != NULL ){				//quit on last link
		cout << current->data << endl ; 		//print data
		current = current->next;			//move to next link
	}
}

int main() {
	cout << "**** DOUBLE ****" << endl;
	linklist<double> ld;
	ld.additem(151.5);
	ld.additem(262.6);
	ld.additem(373.7);
	ld.display();
	cout << "**** CHAR ****" << endl;
	linklist<char> lch;
	lch.additem('a');
	lch.additem('b');
	lch.additem('c');
	lch.display();
	cout << "**** STRING ****" << endl;
	linklist<string> lstr;
	lstr.additem("March");
	lstr.additem("April");
	lstr.additem("May");
	lstr.display();
	cout << endl;
	return 0;
}

// g++ -o 07 10_07.cpp
