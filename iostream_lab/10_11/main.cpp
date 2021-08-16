/* 
10.11 LAB: Warm up: Parsing strings

(1) Prompt the user for a string that contains two strings separated by a comma. (1 pt)

    Examples of strings that can be accepted:
        Jill, Allen
        Jill , Allen
        Jill,Allen

Ex:

Enter input string:
Jill, Allen


(2) Print an error message if the input string does not contain a comma. Continue to prompt until a valid string is entered. Note: If the input contains a comma, then assume that the input also contains two strings. (2 pts)

Ex:

Enter input string:
Jill Allen
Error: No comma in string.

Enter input string:
Jill, Allen


(3) Extract the two words from the input string and remove any spaces. Store the strings in two separate variables and output the strings. (2 pts)

Ex:

Enter input string:
Jill, Allen
First word: Jill
Second word: Allen


(4) Using a loop, extend the program to handle multiple lines of input. Continue until the user enters q to quit. (2 pts)

Ex:

Enter input string:
Jill, Allen
First word: Jill
Second word: Allen

Enter input string:
Golden , Monkey
First word: Golden
Second word: Monkey

Enter input string:
Washington,DC
First word: Washington
Second word: DC

Enter input string:
q
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputStr;
   string firstWord;
   string secondWord;
   int hasComma = 0;
   int commaPos = 0;
   int secondWordStart;
   int i;
   while (inputStr != "q") {
      while (hasComma == 0) {      
         cout << "Enter input string:" << endl;
         getline(cin, inputStr);
         
         if (inputStr == "q") {
            return 0;
         }

         for (i = 0; i < inputStr.size(); ++i) {
            if (inputStr.at(i) == ',') {
               hasComma = 1;
               break;
            }
            else {
               ++commaPos;
            }
         }
         if (hasComma == 0) {
            cout << "Error: No comma in string." << endl << endl;
         }
      }

      for (i = 0; i <= commaPos; ++i) {
         if ((inputStr.at(i) == ' ') | (inputStr.at(i) == ',')) {
            firstWord = inputStr.substr(0, i);
            break;
         }
      }
      for (i = commaPos + 1; i < inputStr.size(); ++i) {
         if (inputStr.at(i) != ' ') {
            secondWordStart = i;
            break;
         }
      }

      secondWord = inputStr.substr(secondWordStart);
      cout << "First word: " << firstWord << endl;
      cout << "Second word: " << secondWord << endl << endl;

      hasComma = 0;
      commaPos = 0;
   }
    
   return 0;
}