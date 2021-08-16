/* 
6.25 LAB: Max magnitude

Write a function MaxMagnitude() with two integer input parameters that returns the largest magnitude value. Use the function in a program that takes two integer inputs, and outputs the largest magnitude value.

Ex: If the inputs are:

5 7

the function returns:

7

Ex: If the inputs are:

-8 -2

the function returns:

-8

Note: The function does not just return the largest value, which for -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.

Your program must define and call a function:
int MaxMagnitude(int userVal1, int userVal2)
 */

#include <iostream>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2) {
   if (abs(userVal1) > abs(userVal2)) {
       return userVal1;
   }
   else {
       return userVal2;
   }
}

int main() {
   int userVal1;
   int userVal2;

   cin >> userVal1;
   cin >> userVal2;

   cout << MaxMagnitude(userVal1, userVal2) << endl;

   return 0;
}
