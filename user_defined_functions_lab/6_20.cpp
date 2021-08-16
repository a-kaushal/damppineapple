/* 6.20 LAB: Miles to track laps

One lap around a standard high-school running track is exactly 0.25 miles. Write a program that takes a number of miles as input, and outputs the number of laps.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

1.5

the output is:

6.00

Ex: If the input is:

2.2

the output is:

8.80

Your program must define and call a function:
double MilesToLaps(double userMiles) */

#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double MilesToLaps(int userMiles, double lapMiles) {
    return userMiles / lapMiles;
}

int main() {
   const double ONE_LAP_LENGTH = 0.25;
   int userMiles;
   double totalLaps;

   cout << "Input number of miles: " << endl;
   cin >> userMiles;

   totalLaps = MilesToLaps(userMiles, ONE_LAP_LENGTH);

   cout << fixed << setprecision(2);
   cout << totalLaps << endl;

   return 0;
}
