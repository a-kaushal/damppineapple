#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Partition(vector<string> &userIDs, int i, int k) {
   int j;
   int done = 0;
   string temp;
   
   //j = i + (k - i) / 2;
   j = i;
   while (done == 0) {
      while (userIDs.at(i) < userIDs.at(j)) {
         ++i;
      }
      while (userIDs.at(j) < userIDs.at(k)) {
         --k;
      }
      
      if (i >= k) {
         done = 1;
      }
      else {
         temp = userIDs.at(i);
         userIDs.at(i) = userIDs.at(k);
         userIDs.at(k) = temp;
         
         ++i;
         --k;
      }
   }
   for (size_t i = 0; i < userIDs.size(); ++i) {
      cout << userIDs.at(i) << endl;;
   }
   cout << endl;
   return k;
}

void Quicksort(vector<string> &userIDs, int i, int k) {
   int j;
   
   if (i >= k) {
      return;
   }
   
   j = Partition(userIDs, i, k);
   
   Quicksort(userIDs, i, j);
   Quicksort(userIDs, j+1, k);
}

int main(int argc, char* argv[]) {
   vector<string> userIDList;
   string userID;

   cin >> userID;
   while (userID != "-1") {
      userIDList.push_back(userID);
      cin >> userID;
   }

   // Initial call to quicksort
   Quicksort(userIDList, 0, userIDList.size() - 1);

   for (size_t i = 0; i < userIDList.size(); ++i) {
      cout << userIDList.at(i) << endl;;
   }

   return 0;
}