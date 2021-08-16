/*
6.26 LAB: Flip a coin

Write a program that simulates flipping a coin to make decisions. The input is how many decisions are needed, and the output is either heads or tails. Assume the input is a value greater than 0.

Ex: If the input is:

3

the output is:

heads
tails
heads

For reproducibility needed for auto-grading, seed the program with a value of 2. In a real program, you would seed with the current time. In that case, every program's output would be different, which is what is desired but can't be auto-graded.

Note: A common student mistake is to call srand() before each call to rand(). But seeding should only be done once, at the start of the program, after which rand() can be called any number of times.

Your program must define and call the following function that randomly picks 0 or 1 and returns "heads" or "tails". Assume the value 0 represents "heads" and 1 represents "tails".
string HeadsOrTails()
*/

#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails() {
   int result = rand() % 2;
   if (result == 0) {
       return "heads";
   }
   else {
       return "tails";
   }
}

int main() {
   int numFlips;
   string flipResult;

   cin >> numFlips;
   
   srand(2);  // Unique seed
   for (int i = 0; i < numFlips; ++i) {
      flipResult = HeadsOrTails();
      cout << flipResult << endl;
   }
   return 0;
}
