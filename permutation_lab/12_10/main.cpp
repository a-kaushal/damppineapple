/* 
12.10 LAB: All permutations of names

Write a program that lists all ways people can line up for a photo (all permutations of a list of strings). The program will read a list of one word names (until -1), and use a recursive method to create and output all possible orderings of those names, one ordering per line.

When the input is:

Julia Lucas Mia -1

then the output is (must match the below ordering):

Julia Lucas Mia 
Julia Mia Lucas 
Lucas Julia Mia 
Lucas Mia Julia 
Mia Julia Lucas 
Mia Lucas Julia 
 */

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void AllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   unsigned int i;
   vector<string> tempPermList;
   vector<string> tempNameList;

   if (nameList.size() <= 0) {
      for (i = 0; i < permList.size(); ++i) {
         cout << permList.at(i) << " ";
      }
      cout << endl;
   }

   else {
      for (i = 0; i < nameList.size(); ++i) {
         tempNameList = nameList;         
         tempPermList = permList;
         tempPermList.push_back(tempNameList.at(i));
         tempNameList.erase(tempNameList.begin() + i);
         AllPermutations(tempPermList, tempNameList);
      }
   }
}

int main(int argc, char* argv[]) {
   vector<string> nameList;
   vector<string> permList;
   string name;
   
   cin >> name;
   
   while (name != "-1") {
      nameList.push_back(name);
      cin >> name;
   }
   AllPermutations(permList, nameList);
   
   return 0;
}