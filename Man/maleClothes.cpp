#include "maleClothes.h"

// Constructor: Display the base male model
maleClothes::maleClothes() : totalLines(0) {
  // Initialize with default values
  shirtOption = 0;
  pantOption = 0;
  displayMaleModel();
}

// Set the shirt option
void maleClothes::setShirt(int option) {
  this->shirtOption = option;
  myShirt.setShirt(option);  // Set the shirt in the shirt object
  totalLines+=17;
}

// Set the pants option
void maleClothes::setPants(int option) {
  this->pantOption = option;
  myPant.setPants(option);   // Set the pants in the pants object
  totalLines+=23;
}

// Overloaded << operator to display the selected model with shirt and pants
ostream& operator<<(ostream& os, maleClothes& obj) {
  // Use a relative path that includes the directory name
  ifstream model("MaleModel/man.txt");

  if(!model) {
    // Try an alternative path if the first one fails
    ifstream model2("./Man/maleModel/man.txt");

    if(!model2) {
      os << "Error: Could not open male model file. Check file path." << endl;
      return os;
    }

    // Use the working alternative path
    string line;
    // Display the first 9 lines (base model part)
    for (int i = 0; i < 9 && getline(model2, line); i++) {
      os << line << endl;
      obj.totalLines++;
    }

    // Display the selected shirt and pants
    obj.myShirt.getShirt(); // Show the selected shirt
    obj.myPant.getPants();   // Show the selected pants

    // Display the rest of the model
    while(getline(model2, line)) {
      os << line << endl;
      obj.totalLines++;
    }

    model2.close();
    return os;
  }

  string line;
  // Display the first 9 lines (base model part)
  for (int i = 0; i < 9 && getline(model, line); i++) {
    os << line << endl;
    obj.totalLines++;
  }

  // Display the selected shirt and pants
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
  // Only display if shirt and pants options have been selected
  if (shirtOption > 0 && pantOption > 0) {
    cout << *this; // This invokes the overloaded operator<< to display the final version
  }
}