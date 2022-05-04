#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;    
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      virtual void area() = 0;
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      void area () { 
         cout << "Rectangle class area :" << width * height << endl;
      }
};
class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      void area () { 
         cout << "Triangle class area :" << width * height / 2 << endl;
      }
};
class Square: public Shape{
	public:
		Square(int a = 0):Shape(a,a) {}
		
		void area(){
			cout << "Square class area :" << width * height << endl;
		}
};
int main() {
   Rectangle rec(10,7);
   Triangle  tri(10,5);
   Square squ(8);
   Shape* s[3] = {&rec,&tri,&squ};
     
   for(int i=0;i<3;i++){ 
      s[i]->area();
   }
   
   return 0;
}

// g++ -o 10 09_10.cpp
