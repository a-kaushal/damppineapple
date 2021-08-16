#ifndef CONTACTNODE_H
#define CONTACTNODE_H

#include <string>
#include <stdio.h>
#include "iostream"

using namespace std;

class ContactNode {   
   public:    
      ContactNode(string contactName = "None", string contactPhoneNum = "None");

      void InsertAfter(ContactNode* newNode);

      string GetName();

      string GetPhoneNumber();

      ContactNode* GetNext();

      void PrintContactNode();

   private:
      string contactName;

      string contactPhoneNum;

      ContactNode* nextNodePtr;

};
#endif