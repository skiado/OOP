#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter(){
			count = 0;
			cout << "Attention ! Constructor working  " << endl;
		};
		Counter(int c){
			count = c;
			cout << "Attention ! Constructor working  " << endl;
		};
		void inc_count(){
			count++;
		};
		int get_count(){
			return count;
		};
};

int main(){
	Counter c1,c2(100);
	cout << "c1 = " << c1.get_count() << "  c2 = " << c2.get_count() << endl;
	c1.inc_count();
	cout << "c1 = " << c1.get_count() << "  c2 = " << c2.get_count() << endl;
	c1.inc_count();
	c2.inc_count();
	cout << "c1 = " << c1.get_count() << "  c2 = " << c2.get_count() << endl;
	return 0;
}

//  g++ -o 03 03_03.cpp
