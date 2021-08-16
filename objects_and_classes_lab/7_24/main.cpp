/* 
7.24 LAB: Nutritional information (classes/constructors)

Given main(), complete the FoodItem class (in files FoodItem.h and FoodItem.cpp) with constructors to initialize each food item. The default constructor should initialize the name to "None" and all other fields to 0.0. The second constructor should have four parameters (food name, grams of fat, grams of carbohydrates, and grams of protein) and should assign each private field with the appropriate parameter value.

Ex: If the input is:

M&M's
10.0
34.0
2.0
1.0

where M&M's is the food name, 10.0 is the grams of fat, 34.0 is the grams of carbohydrates, 2.0 is the grams of protein, and 1.0 is the number of servings, the output is:

Nutritional information per serving of None:
   Fat: 0.00 g
   Carbohydrates: 0.00 g
   Protein: 0.00 g
Number of calories for 1.00 serving(s): 0.00


Nutritional information per serving of M&M's:
   Fat: 10.00 g
   Carbohydrates: 34.00 g
   Protein: 2.00 g
Number of calories for 1.00 serving(s): 234.00

The first FoodItem above is initialized using the default constructor.
 */

#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main(int argc, char* argv[]) {
   FoodItem FoodItem1;

   string itemName;
   double amountFat, amountCarbs, amountProtein;

   cin >> itemName;
   cin >> amountFat;
   cin >> amountCarbs;
   cin >> amountProtein;

   FoodItem FoodItem2 = FoodItem(itemName, amountFat, amountCarbs, amountProtein);

   double numServings;
   cin >> numServings;

   FoodItem1.PrintInfo();
   cout << fixed << setprecision(2);
   cout << "Number of calories for " << numServings << " serving(s): " << FoodItem1.GetCalories(numServings) << endl;
   cout << endl << endl;

   FoodItem2.PrintInfo();
   cout << "Number of calories for " << numServings << " serving(s): " << FoodItem2.GetCalories(numServings) << endl;

   return 0;
}