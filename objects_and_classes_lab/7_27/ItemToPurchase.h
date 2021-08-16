#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
   private:
      string itemName;

      string itemDescription;

      int itemPrice;

      int itemQuantity;

   public:
      ItemToPurchase(string itemName = "none", string itemDescription = "none", int itemPrice = 0, int itemQuantity = 0);

      void SetDescription(string itemDescription);

      void PrintItemCost() const;

      void PrintItemDescription() const;
      
      void SetName(string itemName);

      void SetPrice(int itemPrice);

      void SetQuantity(int itemQuantity);

      string GetName() const;

      int GetPrice() const;

      int GetQuantity() const;

      string GetDescription() const;
};

#endif