/*
6.35 LAB: Contact list

A contact list is a place where you can store a specific contact with other associated information such as a phone number, email address, birthday, etc. Write a program that first takes as input an integer N that represents the number of word pairs in the list to follow. Word pairs consist of a name and a phone number (both strings). That list is followed by a name, and your program should output the phone number associated with that name.

Ex: If the input is:

3 Joe 123-5432 Linda 983-4123 Frank 867-5309 
Frank

the output is:

867-5309

Your program must define and call the following function. The return value of GetPhoneNumber is the phone number associated with the specific contact name.
string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName)

Hint: Use two vectors: One for the string names, and the other for the string phone numbers.
*/

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
    unsigned int i;
    string compa;
    for (i = 0; i < nameVec.size(); ++i) {
        if (contactName.compare(nameVec.at(i)) == 0) {
            return phoneNumberVec.at(i);
        }
    }
}

int main() {
   int numPairs;
   string userName;
   string userNumber;
   vector<string> nameList;
   vector<string> phoneNumList;
   string searchName;

   cin >> numPairs;

   for (int i = 0; i < numPairs; ++i) {
       cin >> userName;
       cin >> userNumber;
       nameList.push_back(userName);
       phoneNumList.push_back(userNumber);
   }
   cin >> searchName;

   cout << GetPhoneNumber(nameList, phoneNumList, searchName) << endl;

   return 0;
}
