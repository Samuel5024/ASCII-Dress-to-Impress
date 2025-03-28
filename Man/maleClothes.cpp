#include "maleClothes.h"

// Constructor: Display the base male model
maleClothes::maleClothes() {
  displayMaleModel();
}

// Set the shirt option
void maleClothes::setShirt(int option) {
  this->shirtOption = option;
  myShirt.setShirt(option);  // Set the shirt in the shirt object
  totalLines+=46;
}

// Set the pants option
void maleClothes::setPants(int option) {
  this->pantOption = option;
  myPant.setPants(option);   // Set the pants in the pants object
  totalLines+=54;
}

// Overloaded << operator to display the selected model with shirt and pants
ostream& operator<<(ostream& os, maleClothes& obj) {
  ifstream model("MaleModel/man.txt"); // Reopen the model file
  string line;

  if(!model) {
    os << "Error: Could not open male model file.\n";
    return os;
  }

  // Display the first 21 lines (base model part)
  for (int i = 0; i < 21 && getline(model, line); i++) {
    os << line << endl;
    obj.totalLines++;
  }

  // Display the selected shirt and pants using the `myShirt` and `myPant` objects
  obj.myShirt.getShirt(); // Show the selected shirt
  obj.myPant.getPants();   // Show the selected pants

  // Display the rest of the model
  while(getline(model, line)) {
    os << line << endl;
    obj.totalLines++;
  }

  model.close(); // Close the file after outputting everything
  return os;
}

// Destructor: Display the final version with selected clothes
maleClothes::~maleClothes() {
  // Use the overloaded operator to display the user-selected version
  cout << *this; // This invokes the overloaded operator<< to display the final version
}
