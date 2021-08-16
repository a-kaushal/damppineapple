/* 
6.41 LAB: Warm up: Text analyzer & modifier

(1) Prompt the user to enter a string of their choosing. Output the string. (1 pt)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

(2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. We encourage you to use a for loop in this function. (2 pts)

(3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)

(4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 46
String with no whitespace: Theonlythingwehavetofearisfearitself.
 */

#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {
   unsigned int i;
   int count = 0;
   char currentChar = usrStr.at(0);

   while (currentChar != '.') {
      cout << usrStr.at(count);
      currentChar = usrStr.at(count);
      ++count;
   }
   return count;
}

string OutputWithoutWhitespace(string usrStr) {
   unsigned int i;
   string noWhitespace;

   for (i = 0; i < usrStr.size(); ++i) {
      if ((usrStr.at(i) != ' ') & (usrStr.at(i) != '\t')) {
         noWhitespace.push_back(usrStr.at(i));
      }
   }
   return noWhitespace;
}

int main() {
   string userStr;

   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, userStr);

   cout << endl << "You entered: " << userStr << endl <<endl;

   cout << "Number of characters: " << GetNumOfCharacters(userStr) << endl;
   cout << "String with no whitespace: " << OutputWithoutWhitespace(userStr) << endl;

   return 0;
}