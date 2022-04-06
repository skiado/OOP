#include <string>
#ifndef BOOK_H
#define BOOK_H
#include "Book.h"
#endif
using namespace std;

class History : public Book {
	protected:
		int age;
	public:
		History();
		History(string t, string w, double p, int a);
		void show();
};
