#ifndef MALECLOTHES_H
#define MALECLOTHES_H
#include <string>
#include <iostream>
#include "Pants/mPants.h"
#include "Shirts/mShirts.h"
#include "maleModel/maleModel.h"
#include <filesystem>
using namespace std;

class maleClothes {
private:
  mShirts myShirt;         // Object to hold shirt selection
  mPants myPant;          // Object to hold pants selection
  int shirtOption;       // Stores shirt option
  int pantOption;        // Stores pant option
  int totalLines;
public:
  maleClothes();         // Constructor to display base model
  void setShirt(int option);  // Set the shirt option
  void setPants(int option);  // Set the pants option
  friend ostream& operator<<(ostream& os, maleClothes& obj); // Overloaded output operator
  ~maleClothes();        // Destructor to display selected model
};

#endif // MALECLOTHES_H
