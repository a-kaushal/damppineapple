/*
6.31 LAB: Acronyms

An acronym is a word formed from the initial letters of words in a set phrase. Write a program whose input is a phrase and whose output is an acronym of the input. If a word begins with a lower case letter, don't include that letter in the acronym. Assume there will be at least one upper case letter in the input.

Ex: If the input is:

Institute of Electrical and Electronics Engineers

the output should is:

IEEE

Your program must define and call a function thats returns the acronym created for the given userPhrase.
string CreateAcronym(string userPhrase)

Hint: Use isupper() to check if a letter is upper case.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase) {
   string acronym;

   for (int i = 0; i < userPhrase.size(); ++i) {
       if (isupper(userPhrase.at(i))) {
         acronym.push_back(userPhrase.at(i));
       }
   }
   return acronym;
}

int main() {
   string userPhrase;

   getline(cin, userPhrase);

   cout << CreateAcronym(userPhrase) << endl;

   return 0;
}