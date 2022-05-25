#include "Stack.h"


Stack::Stack(){ 
	top = -1; 
}

void Stack::push(int var){
	if(top >= MAX-1){
		throw ExcRange("Full Stack");
	}
	st[++top] = var;	//Πρώτα αυξάνεται το top και μετά παίρνει τιμή η επόμενη θέση του πίνακα
}

int Stack::pop(){
	if(top < 0){
		throw ExcRange("Empty Stack");
	}
	return st[top--];	//Πρώτα επιστρέφει την τιμή st[top] και μετά μειώνεται η τιμή του top
}
