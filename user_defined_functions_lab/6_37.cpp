/*
6.37 LAB: Output values below an amount - functions

Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, and output all integers less than or equal to that value.

Ex: If the input is:

5 50 60 140 200 75 100

the output is:

50 60 75

The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75. For coding simplicity, follow every output value by a space, including the last one.

Such functionality is common on sites like Amazon, where a user can filter results.

Write your code to define and use two functions:
vector<int> GetUserValues(vector<int>& userValues, int numValues)
void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold)

Utilizing functions helps to make main() very clean and intuitive.
*/

#include <iostream>
#include <vector> 
using namespace std;

vector<int> GetUserValues(vector<int>& userValues, int numValues){
    int userNum;
    for (int i = 0; i < numValues; ++i) {
        cin >> userNum;
        userValues.push_back(userNum);
    }
    return userValues;
}

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
    unsigned int i;
    for (i = 0; i < userValues.size(); ++i) {
        if (userValues.at(i) < upperThreshold) {
            cout << userValues.at(i) << ' ';
        }
    }
}

int main() {
   vector<int> userValues; 
   int upperThreshold;
   int numValues;
   
   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}
