/* 
11.15 LAB: Plant information (vector)

Given a base Plant class and a derived Flower class, complete main() to create a vector called myGarden. The vector should be able to store objects that belong to the Plant class or the Flower class. Create a function called PrintVector(), that uses the PrintInfo() functions defined in the respective classes and prints each element in myGarden. The program should read plants or flowers from input (ending with -1), adding each Plant or Flower to the myGarden vector, and output each element in myGarden using the PrintInfo() function.

Ex. If the input is:

plant Spirea 10
flower Hydrangea 30 false lilac
flower Rose 6 false white
plant Mint 4
-1

the output is:

Plant Information:
   Plant name: Spirea
   Cost: 10

Plant Information:
   Plant name: Hydrengea
   Cost: 30
   Annual: false
   Color of flowers: lilac

Plant Information:
   Plant name: Rose
   Cost: 6
   Annual: false
   Color of flowers: white

Plant Information:
   Plant name: Mint
   Cost: 4

 */

#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintVector(vector<Plant*> myGarden) {
   unsigned int i;
   Plant* currentElement;

   for (i = 0; i < myGarden.size(); ++i) {
      currentElement = myGarden.at(i);
      currentElement->PrintInfo();
      cout << endl;
   }
}

int main(int argc, char* argv[]) {
   vector<Plant*> myGarden;   
   Plant* nextPlant;
   Flower* nextFlower;
   string plantName;
   int plantCost;
   string flowername;
   int flowerCost;
   string colorOfFlowers;
   bool isAnnual;
   string input;
   
   cin >> input;

   while(input != "-1") {
      if (input == "plant") {
         cin >> plantName;
         cin >> plantCost;

         nextPlant = new Plant;
         nextPlant->SetPlantName(plantName);
         nextPlant->SetPlantCost(plantCost);
         myGarden.push_back(nextPlant);
      }
      else if (input == "flower") {
         cin >> flowername;
         cin >> flowerCost;
         cin >> input;

         if (input == "false") {
            isAnnual = 0;
         }
         else if (input == "true") {
            isAnnual = 1;
         }

         cin >> colorOfFlowers;

         nextFlower = new Flower;
         nextFlower->SetPlantName(flowername);
         nextFlower->SetPlantCost(flowerCost);
         nextFlower->SetColorOfFlowers(colorOfFlowers);
         nextFlower->SetPlantType(isAnnual);
         myGarden.push_back(nextFlower);
      }
      cin >> input;
   }

   PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}