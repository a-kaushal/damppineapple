#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class ShoppingCart{
   public:
      ShoppingCart();

      ShoppingCart(string cutomerName, string currentDate);

      string GetCustomerName() const;

      string GetDate() const;

      void AddItem(ItemToPurchase newItem);

      void RemoveItem(string removedItem);
      
      void ModifyItem(ItemToPurchase modifyedItem);

      int GetNumItemsInCart() const;

      int GetCostOfCart() const;

      void PrintTotal() const;

      void PrintDescription() const;

   private:
      string customerName;

      string currentDate;

      vector<ItemToPurchase> cartItems;

};
#endif