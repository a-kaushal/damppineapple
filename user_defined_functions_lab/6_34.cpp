/* 
6.34 LAB: Even/odd values in a vector

Write a program that reads a list of integers, and outputs whether the list contains all even numbers, odd numbers, or neither. The input begins with an integer indicating the number of integers in the list. The first integer is not in the list.

Ex: If the input is:

5 2 4 6 8 10

the output is:

all even

Ex: If the input is:

5 1 -3 5 -7 9

the output is:

all odd

Ex: If the input is:

5 1 2 3 4 5

the output is:

not even or odd

Your program must define and call the following two functions. IsVectorEven returns true if all integers in the vector are even and false otherwise. IsVectorOdd returns true if all integers in the vector are odd and false otherwise.
bool IsVectorEven(vector<int> myVec)
bool IsVectorOdd(vector<int> myVec)
 */

#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec){
    for (int i = 0; i < myVec.size(); ++i) {
        if (myVec.at(i) % 2 != 0) {
            return 0;
        }
    }
    return 1;
}

bool IsVectorOdd(vector<int> myVec) {
    for (int i = 0; i < myVec.size(); ++i) {
        if (myVec.at(i) % 2 == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
   vector<int> inputNum;
   int numValues;
   int inputVal;
   bool even;
   bool odd;
   
   cin >> numValues;

   for (int i = 0; i < numValues; ++i) {
       cin >> inputVal;
       inputNum.push_back(inputVal);
   }
   even = IsVectorEven(inputNum);
   odd = IsVectorOdd(inputNum);

   if (even) {
       cout << "all even" << endl;
   }
   else if (odd) {
       cout << "all odd" << endl;
   }   
   else {
       cout << "not even or odd" << endl;
   }

   return 0;
}
