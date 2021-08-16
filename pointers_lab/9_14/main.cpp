/* 
9.14 LAB: Mileage tracker for a runner

Given the MileageTrackerNode class, complete main() to insert nodes into a linked list (using the InsertAfter() function). The first user-input value is the number of nodes in the linked list. Use the PrintNodeData() function to print the entire linked list. DO NOT print the dummy head node.

Ex. If the input is:

3
2.2
7/2/18
3.2
7/7/18
4.5
7/16/18

the output is:

2.2, 7/2/18
3.2, 7/7/18
4.5, 7/16/18
 */


#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int i;
   int numNodes;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;
   // TODO: Read in the number of nodes
   cin >> numNodes;

   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list
   for (i = 0; i < numNodes; ++i) {
      cin >> miles;
      cin >> date;
      currNode = new MileageTrackerNode(miles, date);
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
   }
   // TODO: Call the PrintNodeData() method
   //       to print the entire linked list
   currNode = headNode->GetNext();
   while (currNode) {
      currNode->PrintNodeData();
      currNode = currNode->GetNext();
   }

   // MileageTrackerNode Destructor deletes all
   //       following nodes
   delete headNode;
}
