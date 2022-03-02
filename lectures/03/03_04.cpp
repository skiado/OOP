#include <iostream>
#include <cmath>
using namespace std;

class Point {
  private:
    double x;
    double y;

  public:
    // constructor
    Point(double x_in, double y_in) {
      x = x_in;
      y = y_in;
    }

    void set_x(int x_in){
        x = x_in;
       };
     
    double get_x(){
      return x;
    }
     
    double distance() {
      return sqrt(x*x+y*y);
    }
};

int main() {
  // create an object of Wall class
  Point p1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Point p2 = p1;
  cout << "p1.x = " << p1.get_x() << endl
       << "p2.x = " << p2.get_x() << endl;
  p1.set_x(20.0);
  // print areas of wall1 and wall2
  cout << "p1.x = " << p1.get_x() << endl
       << "p2.x = " << p2.get_x() << endl;

  return 0;
}

// g++ -o 04 03_04.cpp
