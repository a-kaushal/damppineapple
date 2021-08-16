#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(int purchasePrice) {
   this->purchasePrice = purchasePrice;
}

int Car::GetPurchasePrice() const {
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = (int)round(purchasePrice * pow((1 - depreciationRate), carAge));
}

void Car::PrintInfo() const {
   cout << "Car's Information:" << endl;
   cout << "   Model year: " << modelYear;
   cout << "   Purchase price: " << purchasePrice;
   cout << "   Current value: " << currentValue;
}