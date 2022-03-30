#ifndef BOOK_H
#define BOOK_H
#include "Book.h"
#endif

using namespace std;

class Detective : public Book {
	private:
		string detective;
	public:
		Detective();
		Detective(string t, string w, double p, string d); 
		void show();
};
