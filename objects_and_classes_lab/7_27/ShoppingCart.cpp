#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {
}

ShoppingCart::ShoppingCart(string customerName, string currentDate) {
   this->customerName = customerName;
   this->currentDate = currentDate;
}

string ShoppingCart::GetCustomerName() const {
   return customerName;
}

string ShoppingCart::GetDate() const {
   return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase newItem) {
   cartItems.push_back(newItem);
}

void ShoppingCart::RemoveItem(string removedItem) {
   unsigned int i;
   ItemToPurchase currentItem;

   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      if (removedItem == currentItem.GetName()) {
         cartItems.erase(cartItems.begin() + i);
         cout << endl;
         return;
      }
   }
   cout << "Item not found in cart. Nothing removed." << endl << endl;
}
      
void ShoppingCart::ModifyItem(ItemToPurchase modifyedItem) {
   unsigned int i;
   int newQuantity;
   ItemToPurchase currentItem;

   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      if (modifyedItem.GetName() == currentItem.GetName()) {
         if ((currentItem.GetDescription() != "none") & (currentItem.GetPrice() != 0) & (currentItem.GetQuantity() != 0)) {
            currentItem.SetQuantity(modifyedItem.GetQuantity());
            cartItems.at(i) = currentItem;
         }
         cout << endl;
         return;
      }
   }
   cout << "Item not found in cart. Nothing modified." << endl << endl;
}

int ShoppingCart::GetNumItemsInCart() const {
   unsigned int i;
   int itemTotal = 0;
   ItemToPurchase currentItem;

   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      itemTotal = itemTotal + currentItem.GetQuantity();
   }
   return itemTotal;
}

int ShoppingCart::GetCostOfCart() const {
   unsigned int i;
   int itemSum = 0;
   ItemToPurchase currentItem;

   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      itemSum = itemSum + (currentItem.GetQuantity() * currentItem.GetPrice());
   }
   return itemSum;
}

void ShoppingCart::PrintTotal() const {
   unsigned int i;
   int itemSum = 0;
   int numItems = 0;
   ItemToPurchase currentItem;

   numItems = GetNumItemsInCart();
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << "Number of Items: " << numItems << endl << endl;

   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      currentItem.PrintItemCost();
   }
   if (numItems == 0) {
      cout << "SHOPPING CART IS EMPTY" << endl;
   }

   cout << endl << "Total: $" << GetCostOfCart() << endl << endl;
}

void ShoppingCart::PrintDescription() const {
   unsigned int i;
   ItemToPurchase currentItem;
   
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << endl << "Item Descriptions" << endl;
   for (i = 0; i < cartItems.size(); ++i) {
      currentItem = cartItems.at(i);
      currentItem.PrintItemDescription();
   }
   cout << endl;
}