/*
6.24 LAB: Swapping variables

Write a program whose input is two integers and whose output is the two integers swapped.

Ex: If the input is:

3 8

function SwapValues() returns and the main program outputs:

8 3

Your program must define and call a function: void SwapValues(int& userVal1, int& userVal2)

Function SwapValues() swaps the values referenced by the parameters.
*/

#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2) {
   int temp;
   temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
}

int main() {
   int userVal1;
   int userVal2;

   cin >> userVal1;
   cin >> userVal2;

   SwapValues(userVal1, userVal2);

   cout << userVal1 << ' ' << userVal2;

   return 0;
}