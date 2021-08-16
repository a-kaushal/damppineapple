/*
6.33 LAB: Exact change - functions

Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are dollars, quarters, dimes, nickels, and pennies. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:

0 

or less, the output is:

no change

Ex: If the input is:

45

the output is:

1 quarter
2 dimes 

Your program must define and call the following function. Positions 0-4 of coinVals should contain the number of dollars, quarters, dimes, nickels, and pennies, respectively.
void ExactChange(int userTotal, vector<int>& coinVals)
*/

#include <iostream>
#include <vector> 
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals) {
   coinVals.at(0) = userTotal / 100;
   userTotal = userTotal % 100;
   
   coinVals.at(1) = userTotal / 25;
   userTotal = userTotal % 25;
   
   coinVals.at(2) = userTotal / 10;
   userTotal = userTotal % 10;
   
   coinVals.at(3) = userTotal / 5;
   userTotal = userTotal % 5;
   
   coinVals.at(4) = userTotal / 1;
}

int main() {
   int inputVal;
   vector<int> changeAmount(5); 
   
   cin >> inputVal;
   
   if (inputVal == 0) {
      cout << "no change" << endl;
   }
   
   ExactChange(inputVal, changeAmount);
   
   if (changeAmount.at(0) != 0) {
      if (changeAmount.at(0) == 1) {
         cout << changeAmount.at(0) << " dollar" << endl;
      }
      else {
         cout << changeAmount.at(0) << " dollars" << endl;
      }
   }
   if (changeAmount.at(1) != 0) {
      if (changeAmount.at(1) == 1) {
         cout << changeAmount.at(1) << " quarter" << endl;
      }
      else {
         cout << changeAmount.at(1) << " quarters" << endl;
      }
   }
   if (changeAmount.at(2) != 0) {
      if (changeAmount.at(2) == 1) {
         cout << changeAmount.at(2) << " dime" << endl;
      }
      else {
         cout << changeAmount.at(2) << " dimes" << endl;
      }
   }
   if (changeAmount.at(3) != 0) {
      if (changeAmount.at(3) == 1) {
         cout << changeAmount.at(3) << " nickel" << endl;
      }
      else {
         cout << changeAmount.at(3) << " nickels" << endl;
      }
   }
   if (changeAmount.at(4) != 0) {
      if (changeAmount.at(4) == 1) {
         cout << changeAmount.at(4) << " penny" << endl;
      }
      else {
         cout << changeAmount.at(4) << " pennies" << endl;
      }
   }

   return 0;
}