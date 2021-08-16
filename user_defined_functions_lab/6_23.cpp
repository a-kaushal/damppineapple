/* 
6.23 LAB: Driving cost - functions

Write a function DrivingCost() with input parameters drivenMiles, milesPerGallon, and dollarsPerGallon, that returns the dollar cost to drive those miles. All items are of type double. If the function is called with 50 20.0 3.1599, the function returns 7.89975.

Define that function in a program whose inputs are the car's miles/gallon and the gas dollars/gallon (both doubles). Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your DrivingCost function three times.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

20.0 3.1599

the output is:

1.58 7.90 63.20

Your program must define and call a function:
double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)
 */

#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
    return ((drivenMiles / milesPerGallon) * dollarsPerGallon);
}

int main() {
   double carMilesPerGallon;
   double gasDollarsPerGallon;

   cin >> carMilesPerGallon;
   cin >> gasDollarsPerGallon;
   
   cout << fixed << setprecision(2);
   cout << DrivingCost(10, carMilesPerGallon, gasDollarsPerGallon) << ' ';
   cout << DrivingCost(50, carMilesPerGallon, gasDollarsPerGallon) << ' ';
   cout << DrivingCost(400, carMilesPerGallon, gasDollarsPerGallon) << ' ' << endl;

   return 0;
}
