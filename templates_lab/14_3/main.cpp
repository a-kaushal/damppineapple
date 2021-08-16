/* 
The program below uses a function template to map numeric, string, or character values to a shorter list of values. The program demonstrates a mapping for integers using a table of:
100
200
300
400
500
600

The program gets an integer value from a user and returns the first value in the table that is greater than or equal to the user value, or the user value itself if that value is greater than the largest value in the table. Ex:
165 returns 200
444 returns 500
888 returns 888

    Run the program and notice the input value 137 is mapped to 200. Try changing the input value and running again.
    Modify the program to call the GetMapping function for a double and a string, similar to the integer.
    Run the program again and enter an integer, a double, and a string
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename MapType>
MapType GetMapping(MapType mapMe, vector<MapType> mappings){
   MapType result = mapMe;
   unsigned int i;
   bool keepLooking;

   keepLooking = true;

   cout << endl;
   cout << "Mapping range: ";
   for (i = 0; i < mappings.size(); ++i) {
      cout << mappings.at(i) << " ";
   }
   cout << endl;

   i = 0;       // Restart counting
   while ((i < mappings.size()) && keepLooking) {
      if(mapMe <= mappings.at(i)) {
         result = mappings.at(i);
         keepLooking = false;
      }
      else {
         ++i;
      }
   }

   cout << mapMe << " is mapped to " << result << endl;

   return result;
}

// ***********************************************************************
   
int main() {
   vector<int> mapIntMappings;
   vector<double> mapDoubleMappings;
   vector<string> mapStringMappings; 
   int mapInt;
   int mapIntResult;
   double mapDouble;
   double mapDoubleResult;
   string mapString;
   string mapStringResult;

   // Initialize mapping entries
   mapIntMappings.push_back(100);
   mapIntMappings.push_back(200);
   mapIntMappings.push_back(300);
   mapIntMappings.push_back(400);
   mapIntMappings.push_back(500);
   mapIntMappings.push_back(600);

   // Initialize mapping entries for doubles
   mapDoubleMappings.push_back(-592.32);
   mapDoubleMappings.push_back(-12.0);
   mapDoubleMappings.push_back(-2.0);
   mapDoubleMappings.push_back(-1.2);
   mapDoubleMappings.push_back(2.12);
   mapDoubleMappings.push_back(3.6);
   mapDoubleMappings.push_back(12.0);
   mapDoubleMappings.push_back(24.5);

   // Initialize mapping entries for strings
   mapStringMappings.push_back("A");
   mapStringMappings.push_back("F");
   mapStringMappings.push_back("H");
   mapStringMappings.push_back("T");
   mapStringMappings.push_back("E");
   mapStringMappings.push_back("I");
   mapStringMappings.push_back("M");

   cout << endl << "Enter an integer value to map: ";
   cin >> mapInt;
   mapIntResult = GetMapping(mapInt, mapIntMappings);

   // FIXME: Add code similar to the integer processing to process
   //        a double and a string   
   cout << endl << "Enter an double value to map: ";
   cin >> mapDouble;
   mapDoubleResult = GetMapping(mapDouble, mapDoubleMappings);

   cout << endl << "Enter an string value to map: ";
   cin >> mapString;
   mapStringResult = GetMapping(mapString, mapStringMappings);

   return 0;
}
