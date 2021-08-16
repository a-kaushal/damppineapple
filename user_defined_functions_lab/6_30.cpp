/*
6.30 LAB: Max and min numbers

Write a program whose inputs are three integers, and whose outputs are the largest of the three values and the smallest of the three values.

Ex: If the input is:

7 15 3

the output is:

largest: 15 
smallest: 3

Your program must define and call the following two functions. The LargestNumber function should return the largest number of the three input values. The SmallestNumber function should return the smallest number of the three input values.
int LargestNumber(int num1, int num2, int num3)
int SmallestNumber(int num1, int num2, int num3)
*/

#include <iostream>
using namespace std;

int LargestNumber(int num1, int num2, int num3) {
    if ((num1 > num2) && (num1 > num3)) {
        return num1;
    }
    if ((num2 > num1) && (num2 > num3)) {
        return num2;
    }
    if ((num3 > num1) && (num3 > num2)) {
        return num3;
    }
}

int SmallestNumber(int num1, int num2, int num3) {
    if ((num1 <= num2) && (num1 <= num3)) {
        return num1;
    }
    if ((num2 <= num1) && (num2 <= num3)) {
        return num2;
    }
    if ((num3 <= num1) && (num3 <= num2)) {
        return num3;
    }
}

int main() {
   int num1;
   int num2;
   int num3;

   cin >> num1;
   cin >> num2;
   cin >> num3;

   cout << "largest: " << LargestNumber(num1, num2, num3) << endl;
   cout << "smallest: " << SmallestNumber(num1, num2, num3) << endl;

   return 0;
}
