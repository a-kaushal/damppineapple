/*
6.29 LAB: Convert to binary - functions

Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2

Note: The above algorithm outputs the 0's and 1's in reverse order. You will need to write a second function to reverse the string.

Ex: If the input is:

6

the output is:

110

Your program must define and call the following two functions. The IntegerToReverseBinary() function should return a string of 1's and 0's representing the integer in binary (in reverse). The ReverseString() function should return a string representing the input string in reverse.

string IntegerToReverseBinary(int integerValue)
string ReverseString(string userString)
*/

#include <iostream>
using namespace std;

string IntegerToReverseBinary(int integerValue) {
    string reverseBinary;
    while (integerValue > 0) {
        if (integerValue % 2 == 0) {
            reverseBinary.push_back('0');
        }
        else {
            reverseBinary.push_back('1');
        }
        integerValue /= 2;
    }
    return reverseBinary;
}

string ReverseString(string userString) {
    char temp;

    for (int i = 0; i < (userString.size() / 2); ++i) {
        temp = userString.at(i);
        userString.at(i) = userString.at(userString.size() - 1 - i);
        userString.at(userString.size() - 1 - i) = temp;
    }
    return userString;
}

int main() {
   int userInt;
   string reverseBinary;

   cin >> userInt;

   reverseBinary = IntegerToReverseBinary(userInt);
   cout << ReverseString(reverseBinary) << endl;

   return 0;
}
