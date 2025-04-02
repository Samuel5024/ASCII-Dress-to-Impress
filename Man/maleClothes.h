#ifndef MALECLOTHES_H
#define MALECLOTHES_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Pants/mPants.h"
#include "Shirts/mShirts.h"
#include "maleModel/maleModel.h"
#include "../baseCharacter.h"
using namespace std;

class maleClothes : public baseCharacter {
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
  ~maleClothes() = default;        // Destructor to display selected model
};

#endif // MALECLOTHES_H
