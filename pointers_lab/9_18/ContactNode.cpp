#include "ContactNode.h"
#include <string>
#include <iostream>

using namespace std;

ContactNode::ContactNode(string contactName, string contactPhoneNum) {
   this->contactName = contactName;
   this->contactPhoneNum = contactPhoneNum;
   this->nextNodePtr = nullptr;
}

void ContactNode::InsertAfter(ContactNode* newNode) {
   ContactNode* temp;
   temp = this->nextNodePtr;
   this->nextNodePtr = newNode;
   newNode->nextNodePtr = temp;
}

string ContactNode::GetName() {
   return this->contactName;
}

string ContactNode::GetPhoneNumber() {
   return this->contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {   
   return this->nextNodePtr;
}

void ContactNode::PrintContactNode() {
   cout << "Name: " << this->contactName << endl;
   cout << "Phone number: " << this->contactPhoneNum << endl;
}