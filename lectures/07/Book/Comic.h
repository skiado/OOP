#ifndef BOOK_H
#define BOOK_H
#include "Book.h"
#endif

using namespace std;

class Comic : public Book {
	private:
		string artist;
	public:
		Comic();
		Comic(string t, string w, double p, string d); 
		void show();
};
