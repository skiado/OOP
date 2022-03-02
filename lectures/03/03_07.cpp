#include <iostream>
#include <cmath>
using namespace std;

class Point {
  private:
    double x;
    double y;

  public:
    Point(double x_in, double y_in) {
      x = x_in;
      y = y_in;
    }
    Point(){
        x = 0;
        y = 0;
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
  Point p2;

  cout << "p1.distance() = " << p1.distance() << endl
       << "p2.distance() = " << p2.distance() << endl;

  return 0;
}

// g++ -o 07 03_07.cpp
