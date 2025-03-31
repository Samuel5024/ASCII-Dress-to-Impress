// femaleClothes.h - Fixed version
#ifndef FEMALECLOTHES_H
#define FEMALECLOTHES_H

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include "dresses/dresses.h"  
#include "fPants/fPants.h"    
#include "blouse/blouse.h"    
#include "femaleModel/femaleModel.h"  

using namespace std;

// A map to store the combination options for the user to choose from
const map<int, string> comboOptions = {
  {1, "Dress"},
  {2, "Blouse and Pants"}
};

class femaleClothes {
private:
  dresses myDress;      // Changed from string to dresses class
  fPants myPant;        // Changed from string to fPants class
  blouse myBlouse;      // Changed from string to blouse class
  int comboOption;      // Added missing member variable
  int dressOption;
  int blouseOption;
  int fPantOption;
  int totalLines;

public:
  femaleClothes();

  // Method to set the dress option
  void setDress(int option);

  // Method to set the blouse option
  void setBlouse(int option);

  // Method to set the pants option
  void setFPants(int option);
  
  // Method to set the combo option
  void setCombo(int option);

  // Overloaded output operator to display the clothing selections
  friend ostream& operator<<(ostream& os, const femaleClothes& obj);

  // Destructor
  ~femaleClothes() = default;
};

#endif //FEMALECLOTHES_H