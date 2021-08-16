#ifndef STATEPAIR
#define STATEPAIR

#include <iostream>
using namespace std;

template<typename T1, typename T2>
class StatePair {
public:
   StatePair() {      
      this->userKey = -1;
      this->userValue = -1;
   }

   StatePair(T1 userKey, T2 userValue) {
      this->userKey = userKey;
      this->userValue = userValue;
   }
   
   void SetKey(T1 userKey) {
      this->userKey = userKey;
   }

   void SetValue(T2 userValue) {
      this->userValue = userValue;
   }

   T1 GetKey() {
      return userKey;
   }

   T2 GetValue() {
      return userValue;
   }
	
   void PrintInfo() {
      cout << userKey << ": " << userValue << endl;
   }

private:
   T1 userKey;

   T2 userValue;
};

#endif