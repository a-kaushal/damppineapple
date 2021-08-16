/* 2.11 LAB: Number pattern

Write a recursive function called PrintNumPattern() to output the following number pattern.

Given a positive integer as input (Ex: 12), subtract another positive integer (Ex: 3) continually until 0 or a negative value is reached, and then continually add the second integer until the first integer is again reached. For this lab, do not end output with a newline.

Ex. If the input is:

12
3

the output is:

12 9 6 3 0 3 6 9 12 
 */

#include <iostream>

using namespace std;

void PrintNumPattern(int num1, int num2) {
   if (num1 <= 0) {

   }
   else {
      cout << num1 << " ";
      PrintNumPattern(num1 - num2, num2);
   }
   cout << num1 << " ";
}

int main(int argc, char* argv[]) {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}