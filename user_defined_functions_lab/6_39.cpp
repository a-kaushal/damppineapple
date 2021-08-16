/*
6.39 LAB: Word frequencies - functions

Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow.

Ex: If the input is:

5 hey hi Mark hi mark

the output is:

hey 1
hi 2
Mark 1
hi 2
mark 1

Hint: Use two vectors, one for the strings, another for the frequencies.

Your program must define and use the following function:
int GetFrequencyOfWord(vector<string> wordsList, string currWord)
*/

#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord(vector<string> wordsList, string currWord) {
    int count = 0;

    for (unsigned int i = 0; i < wordsList.size(); ++i) {
        if (currWord.compare(wordsList.at(i)) == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
   int numVal;
   string userWord;
   vector<string> wordsList;

   cin >> numVal;

   for (int i = 0; i < numVal; ++i) {
       cin >> userWord;
       wordsList.push_back(userWord);
   }   

   for (int i = 0; i < numVal; ++i) {
       cout << wordsList.at(i) << ' ' << GetFrequencyOfWord(wordsList, wordsList.at(i)) << endl;
   }

   return 0;
}
