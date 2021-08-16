#include "ItemToPurchase.h"
#include <stdio.h>
#include <iostream>

using namespace std;

ItemToPurchase::ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity) {
   this->itemName = itemName;
   this->itemDescription = itemDescription;
   this->itemPrice = itemPrice;
   this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(string itemName) {
   this->itemName = itemName;
}

void ItemToPurchase::SetPrice(int itemPrice) {
   this->itemPrice = itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
   this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetDescription(string Description) {
   this->itemDescription = Description;
}

string ItemToPurchase::GetName() const {
   return itemName;
}

int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}

string ItemToPurchase::GetDescription() const {
   return itemDescription;
}

void ItemToPurchase::PrintItemCost() const {
   cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}

void ItemToPurchase::PrintItemDescription() const {
   cout << itemName << ": " << itemDescription << endl;   
}