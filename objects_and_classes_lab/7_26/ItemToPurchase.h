#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
   public:
      ItemToPurchase();

      void SetName(string itemName);

      void SetPrice(int itemPrice);

      void SetQuantity(int itemQuantity);

      string GetName() const;

      int GetPrice() const;

      int GetQuantity() const;

      int operator+(ItemToPurchase rhs);

   private:
      string itemName;

      int itemPrice;

      int itemQuantity;

};

#endif