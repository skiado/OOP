#include <string>
#ifndef HISTORY_H
#define HISTORY_H
#include "History.h"
#endif
using namespace std;

class Bio: public History {
	protected:
		string bio_name;
	public:
		Bio();
		Bio(string t, string w, double p, int a, string n);
		void show();
};
