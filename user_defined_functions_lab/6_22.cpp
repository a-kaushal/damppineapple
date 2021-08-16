/* 6.22 LAB: A jiffy

A “jiffy” is the scientific name for 1/100th of a second. Given an input number of seconds, output the number of "jiffies."

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

15

the output is:

1500.00

Your program must define and call a function:
double SecondsToJiffies(double userSeconds)
 */

#include <iostream>
#include <iomanip>
using namespace std;

double SecondsToJiffies(double userSeconds) {
    return userSeconds * 100.0;
}

int main() {
   double userSeconds;

   cin >> userSeconds;

   cout << fixed << setprecision(2);
   cout << SecondsToJiffies(userSeconds) << endl;

   return 0;
}