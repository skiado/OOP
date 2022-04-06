#include <iostream>
using namespace std;

class Publication {
	private:
		int papers;
		int citations;
	public:
		Publication(int p,int c);
		int get_papers();
		int get_citations();
		void set_papers(int p);
		void set_citations(int c);
};
