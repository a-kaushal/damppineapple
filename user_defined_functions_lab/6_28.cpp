/*
6.28 LAB: Remove all non-alphabetic characters

Write a program that removes all non-alphabetic characters from the given input.

Ex: If the input is:

-Hello, 1 world$!

the output is:

Helloworld

Your program must define and call the following function. The function should return a string representing the input string without non-alphabetic characters.

string RemoveNonAlpha(string userString)
*/

#include <iostream>
using namespace std;

string RemoveNonAlpha(string userString) {
    string userNonAlpha;
    for (int i = 0; i < userString.size(); ++i) {
        if (isalpha(userString.at(i))) {
            userNonAlpha.push_back(userString.at(i));
        }
    }
    return userNonAlpha;
}

int main() {
   string userString;

   getline(cin, userString);

   cout << RemoveNonAlpha(userString) << endl;

   return 0;
}
