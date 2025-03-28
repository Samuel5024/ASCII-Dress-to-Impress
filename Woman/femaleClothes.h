#ifndef femaleClothes_H
#define femaleClothes_H

#include <iostream>
#include <string>
#include <map>
#include "dresses/dresses.h"  // Header for dresses (likely defines how dresses are displayed)
#include "fPants/fpants.h"    // Header for female pants (likely defines pants options)
#include "blouse/blouse.h"    // Header for blouse options (defines blouses)
#include "femaleModel/femaleModel.h"  // Header for female model representation

using namespace std;

// A map to store the combination options for the user to choose from
// Option 1: Dress; Option 2: Blouse and Pants combination
const map<int, string> comboOptions = {
  {1, "Dress"},
  {2, "Blouse and Pants"}
};


class femaleClothes {
private:
  string myDress;
  string myPants;
  string myBlouse;
  int totalLines;

public:
  femaleClothes();

  // Method to set the dress option
  void setDress(int option);

  // Method to set the blouse option (set the blouse based on the user input)
  void setBlouse(int option);

  // Method to set the pants option (set the pants based on the user input)
  void setFPants(int option);

  // Overloaded output operator to display the clothing selections in a readable format
  friend ostream& operator<<(ostream& os, const femaleClothes& obj);

  // Destructor: Displays the final selected model when the object is destroyed
  ~femaleClothes();
};

#endif //femaleClothes_H
