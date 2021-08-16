/*
6.38 LAB: Adjust list by normalizing - functions

When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers. For this program, adjust the values by subtracting the smallest value from all the values. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 30 50 10 70 65

the output is:

20 40 0 60 55

For coding simplicity, follow every output value by a space, even the last one.

Your program must define and use the following function:
int GetMinimumInt(vector<int> listInts)
*/

#include <iostream>
#include <vector> 
using namespace std;

int GetMinimumInt(vector<int> listInts) {
    int minVal;
    unsigned int i;

    minVal = listInts.at(0);
    for (i = 0; i < listInts.size(); ++i) {
        if (listInts.at(i) <= minVal) {
            minVal = listInts.at(i);
        }
    }
    return minVal;
}

int main() {
   int numVals;
   int userVal;
   int minVal;
   vector<int> listInts;

   cin >> numVals;

   for (int i = 0; i < numVals; ++i) {
       cin >> userVal;
       listInts.push_back(userVal);
   }
   minVal = GetMinimumInt(listInts);

   for (int i = 0; i < numVals; ++i) {
       cout << listInts.at(i) - minVal << ' ';
   }
   cout << endl;

   return 0;
}
