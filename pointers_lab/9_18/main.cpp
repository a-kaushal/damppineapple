/* 
9.18 LAB: Warm up: Contacts

You will be building a linked list. Make sure to keep track of both the head and tail nodes.

(1) Create three files to submit.

    ContactNode.h - Class declaration
    ContactNode.cpp - Class definition
    main.cpp - main() function

(2) Build the ContactNode class per the following specifications:

    Parameterized constructor. Parameters are name followed by phone number.

    Public member functions
        InsertAfter() (2 pts)
        GetName() - Accessor (1 pt)
        GetPhoneNumber - Accessor (1 pt)
        GetNext() - Accessor (1 pt)
        PrintContactNode()

    Private data members
        string contactName
        string contactPhoneNum
        ContactNode* nextNodePtr


Ex. of PrintContactNode() output:

Name: Roxanne Hughes
Phone number: 443-555-2864


(3) In main(), prompt the user for three contacts and output the user's input. Create three ContactNodes and use the nodes to build a linked list. (2 pts)

Ex:

Person 1
Enter name:
Roxanne Hughes
Enter phone number:
443-555-2864
You entered: Roxanne Hughes, 443-555-2864

Person 2
Enter name:
Juan Alberto Jr.
Enter phone number:
410-555-9385
You entered: Juan Alberto Jr., 410-555-9385

Person 3
Enter name:
Rachel Phillips
Enter phone number:
310-555-6610
You entered: Rachel Phillips, 310-555-6610


(4) Output the linked list. (2 pts)

Ex:

CONTACT LIST
Name: Roxanne Hughes
Phone number: 443-555-2864

Name: Juan Alberto Jr.
Phone number: 410-555-9385

Name: Rachel Phillips
Phone number: 310-555-6610
 */

#include "ContactNode.h"
#include <iostream>
#include <string>
using namespace std;

int main() { 
   ContactNode* headNode;
   ContactNode* currNode;
   ContactNode* prevNode;

   string contactName;
   string contactNumber;
   int i;

   headNode = new ContactNode();
   prevNode = headNode;

   for (i = 0; i < 3; ++i) {
      cout << "Person " << i+1 << endl;
      cout << "Enter name:" << endl;
      getline(cin, contactName);
      cout << "Enter phone number:" << endl;
      cin >> contactNumber;
      cout << "You entered: " << contactName << ", " << contactNumber << endl;
      cout << endl;

      currNode = new ContactNode(contactName, contactNumber);
      prevNode->InsertAfter(currNode);
      prevNode = currNode;
      getline(cin, contactName);
   }
   currNode = headNode->GetNext();

   cout << "CONTACT LIST" << endl;
   currNode = headNode->GetNext();

   while (currNode) {
      currNode->PrintContactNode();
      cout << endl;
      currNode = currNode->GetNext();
   }

   return 0;
}
