#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructor
	ItemNode() {
		item = "";
		nextNodeRef = NULL;
	}

	// Constructor                                                                                     
	ItemNode(string itemInit) {
		this->item = itemInit;
		this->nextNodeRef = NULL;
	}

	// Constructor        
   ItemNode(string itemInit, ItemNode *nextLoc) {
      this->item = itemInit;
      this->nextNodeRef = nextLoc;
   }

	// Insert node after this node.     
   void InsertAfter(ItemNode &nodeLoc) {
      ItemNode* tmpNext;
      
      tmpNext = this->nextNodeRef;
      this->nextNodeRef = &nodeLoc;
      nodeLoc.nextNodeRef = tmpNext;
   }
   
   void InsertAtEnd(ItemNode* newNode) {
      this->nextNodeRef = newNode;
   }
	

	// Get location pointed by nextNodeRef                                                             
	ItemNode* GetNext() {
		return this->nextNodeRef;
	}

	void PrintNodeData() {
		cout << this->item << endl;
	}
};