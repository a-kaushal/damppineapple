/* 
6.42 LAB*: Program: Authoring assistant

(1) Prompt the user to enter a string of their choosing. Store the text in a string. Output the string. (1 pt)

Ex:

Enter a sample text:
We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue!

You entered: We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue!


(2) Implement the PrintMenu() function to print the following command menu. (1 pt)

Ex:

MENU
c - Number of non-whitespace characters
w - Number of words
f - Find text
r - Replace all !'s
s - Shorten spaces
q - Quit


(3) Implement the ExecuteMenu() function that takes 2 parameters: a character representing the user's choice and the user provided sample text. ExecuteMenu() performs the menu options, according to the user's choice, by calling the appropriate functions described below. (1 pt)


(4) In the main() function, call PrintMenu() and prompt for the user's choice of menu options for analyzing/editing the string. Each option is represented by a single character.

If an invalid character is entered, continue to prompt for a valid choice. When a valid option is entered, execute the option by calling ExecuteMenu(). Then, print the menu, and prompt for a new option. Continue until the user enters 'q'. Hint: Implement Quit before implementing other options. (1 pt)

Ex:

MENU
c - Number of non-whitespace characters
w - Number of words
f - Find text
r - Replace all !'s
s - Shorten spaces
q - Quit

Choose an option:


(5) Implement the GetNumOfNonWSCharacters() function. GetNumOfNonWSCharacters() has a constant string as a parameter and returns the number of characters in the string, excluding all whitespace. Call GetNumOfNonWSCharacters() in the ExecuteMenu() function, and then output the returned value. (4 pts)

Ex:

Enter a sample text:
We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue!

You entered: We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue!

MENU
c - Number of non-whitespace characters
w - Number of words
f - Find text
r - Replace all !'s
s - Shorten spaces
q - Quit

Choose an option:
c
Number of non-whitespace characters: 181


(6) Implement the GetNumOfWords() function. GetNumOfWords() has a constant string as a parameter and returns the number of words in the string. Hint: Words end when a space is reached except for the last word in a sentence. Call GetNumOfWords() in the ExecuteMenu() function, and then output the returned value. (3 pts)

Ex:

Number of words: 35


(7) Implement the FindText() function, which has two strings as parameters. The first parameter is the text to be found in the user provided sample text, and the second parameter is the user provided sample text. The function returns the number of instances a word or phrase is found in the string. In the ExecuteMenu() function, prompt the user for a word or phrase to be found. Then call FindText() and output the returned value. Before the prompt, call cin.ignore() to allow the user to input a new string.(3 pts)

Ex:

Enter a word or phrase to be found:
more
"more" instances: 5


(8) Implement the ReplaceExclamation() function. ReplaceExclamation() has a string parameter and updates the string by replacing each '!' character in the string with a '.' character. ReplaceExclamation() DOES NOT output the string. Call ReplaceExclamation() in the ExecuteMenu() function, and then output the edited string. (3 pts)

Ex.

Edited text: We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue.


(9) Implement the ShortenSpace() function. ShortenSpace() has a string parameter and updates the string by replacing all sequences of 2 or more spaces with a single space. ShortenSpace() DOES NOT output the string. Call ShortenSpace() in the ExecuteMenu() function, and then output the edited string. (3 pt)

Ex:

Edited text: We'll continue our quest in space. There will be more shuttle flights and more shuttle crews and, yes, more volunteers, more civilians, more teachers in space. Nothing ends here; our hopes and our journeys continue!
 */

#include <iostream>
#include <string>
using namespace std;

void PrintMenu() {
   cout << endl << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl;
}

int GetNumOfNonWSCharacters(string userText) {
   int count = 0;
   unsigned int i;

   for (i = 0; i < userText.size(); ++i) {
      if ((userText.at(i) != ' ') & (userText.at(i) != '\t')) {
         ++count;
      }
   }
   return count;
}

int GetNumOfWords(string userText) {
   int count = 0;
   int nextWord = 1;
   unsigned int i;
   
   for (i = 0; i < userText.size(); ++i) {
      if ((nextWord) & (isalpha(userText.at(i)) != 0)) {
         ++count;
         nextWord = 0;
      }
      else if ((userText.at(i) == ' ') | (userText.at(i) == '\t')) {
         nextWord = 1;
      }
   }
   return count;
}

int FindText(string searchWord, string userText) {
   unsigned int i;
   unsigned int searchIndex = 0;
   int count = 0;

   for (i = 0; i < userText.size(); ++i) {
      if (userText.at(i) == searchWord.at(searchIndex)) {
         ++searchIndex;
         if (searchIndex == searchWord.size()) {
            ++count;
            searchIndex = 0;
         }
      }
      else {
         searchIndex = 0;
      }
   }
   return count;
}

void ReplaceExclamation(string& userText) {
   unsigned int i;

   for (i = 0; i < userText.size(); ++i) {
      if (userText.at(i) == '!') {
         userText.at(i) = '.';
      }
   }
}

void ShortenSpace(string& userText) {
   unsigned int i;
   int spaceIndex = -1;

   for (i = 0; i < userText.size(); ++i) {
      if (userText.at(i) == ' ') {
         if (spaceIndex == -1) {
            spaceIndex = i;
         }
      }
      else if (spaceIndex != -1) {
         if ((i - spaceIndex) > 1) {
            userText.erase(spaceIndex, i - spaceIndex - 1);
         }
         spaceIndex = -1;
      }
   }
}

void ExecuteMenu(char userChoice, string userText) {
   string searchWord;

   if (userChoice == 'q') {
      return;
   }
   else if (userChoice == 'c') {
      cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userText) << endl;
   }
   else if (userChoice == 'w') {
      cout << "Number of words: " << GetNumOfWords(userText);
   }
   else if (userChoice == 'f') {
      cout << "Enter a word or phrase to be found:" << endl;
      cin.ignore();
      getline(cin, searchWord);
      cout << "\"" << searchWord << "\" instances: " << FindText(searchWord, userText) << endl;
   }
   else if (userChoice == 'r') {
      ReplaceExclamation(userText);
      cout << "Edited text: " << userText << endl;
   }
   else if (userChoice == 's') {
      ShortenSpace(userText);
      cout << "Edited text: " << userText << endl;
   }
}

int main() {
   string userStr;
   char userInput = '\0';

   cout << "Enter a sample text:" << endl;
   getline(cin, userStr);
   cout << endl << "You entered: " << userStr << endl;

   while (userInput != 'q') {
      PrintMenu();

      cout << endl << "Choose an option:" << endl;
      cin >> userInput;

      ExecuteMenu(userInput, userStr);
   }

   return 0;
}