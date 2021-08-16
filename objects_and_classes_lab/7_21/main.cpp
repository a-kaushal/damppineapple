/* 
7.21 LAB: Triangle area comparison (classes)

Given class Triangle (in files Triangle.h and Triangle.cpp), complete main() to read and set the base and height of triangle1 and of triangle2, determine which triangle's area is larger, and output that triangle's info, making use of Triangle's relevant member functions.

Ex: If the input is:

3.0 4.0
4.0 5.0

where 3.0 is triangle1's base, 4.0 is triangle1's height, 4.0 is triangle2's base, and 5.0 is triangle2's height, the output is:

Triangle with larger area:
Base: 4.00
Height: 5.00
Area: 10.00
 */

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;
   double base;
   double height;

   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
   cin >> base;
   cin >> height;
   triangle1.SetBase(base);
   triangle1.SetHeight(height);

      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
   cin >> base;
   cin >> height;
   triangle2.SetBase(base);
   triangle2.SetHeight(height);
   
   // TODO: Determine larger triangle (use GetArea())      
   cout << "Triangle with larger area:" << endl;
   if (triangle1.GetArea() >= triangle2.GetArea()) {
      triangle1.PrintInfo();
   }
   else {
      triangle2.PrintInfo();
   }

   // TODO: Output larger triangle's info (use PrintInfo())
   
   return 0;
}