#ifndef BOOK_H
#define BOOK_H
#include "Book.h"
#endif

class Novel : public Book {
	public:
		Novel();
		Novel(string t, string w, double p);
		void show();
};
