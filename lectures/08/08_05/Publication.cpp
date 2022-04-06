#include "Publication.h"

Publication::Publication(int p,int c){
	papers = p;
	citations = c;
}

int Publication::get_papers(){
	return papers;
}

int Publication::get_citations(){
	return citations;
}

void Publication::set_papers(int p){
	papers = p;
}

void Publication::set_citations(int c){
	citations = c;
}
