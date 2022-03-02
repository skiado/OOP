#include<iostream>
using namespace std;

class Point {
    private:
	    double x, y;
    public:
	    Point(int x1, int y1) { 
	        x = x1; 
	        y = y1;
	    }
	    // Copy constructor
	    Point(const Point &p1) {
	        x = p1.x; 
	        y = p1.y; 
	    }

	    int getX() { return x; }
	    int getY() { return y; }
};

int main()
{
	Point p1(10, 15); // κλήση του κανονικού constructor
	Point p2 = p1;    // κλήση του copy constructor 

	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl
	     << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;

	return 0;
}

// g++ -o 05 03_05.cpp
