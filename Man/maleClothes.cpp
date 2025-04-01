#include "maleClothes.h"

// Constructor: Display the base male model
maleClothes::maleClothes(const string& filename) : baseCharacter(filename), totalLines(0) {
  displayMaleModel();
}

// Set the shirt option
void maleClothes::setShirt(int option) {
  this->shirtOption = option;
  myShirt.setShirt(option);  // Set the shirt in the shirt object
}

// Set the pants option
void maleClothes::setPants(int option) {
  this->pantOption = option;
  myPant.setPants(option);   // Set the pants in the pants object
}

// Overloaded << operator to display the selected model with shirt and pants
ostream& operator<<(ostream& os, maleClothes& obj) {
  // Try to open the model file
  ifstream model("Man/maleModel/man.txt");

  if(!model) {
    // Try an alternative path if the first one fails
    ifstream model2("../Man/maleModel/man.txt");

    if(!model2) {
      os << "Error: Could not open male model file. Check file path." << endl;
      return os;
    }

    model.close();
    model.open("../Man/maleModel/man.txt");  // Use the working path
  }

  string line;
  vector<string> modelLines;

  // Read all model lines
  while(getline(model, line)) {
    modelLines.push_back(line);
  }
  model.close();

  int totalModelLines = modelLines.size();
  const int shirtLines = 17;
  const int pantsLines = 23;

  // Display the first 8 lines (base model part)
  for (int i = 0; i < 8 && i < totalModelLines; i++) {
    os << modelLines[i] << endl;
  }

  // Display the selected shirt (this will output 17 lines)
  obj.myShirt.getShirt();

  // Display the selected pants (this will output 23 lines)
  obj.myPant.getPants();

  // Display the remaining model lines (skipping lines covered by shirt and pants)
  for (int i = 8 + shirtLines + pantsLines; i < totalModelLines; i++) {
    os << modelLines[i] << endl;
  }

  return os;
}

bool maleClothes::printToFile() const {
  ofstream outFile(outputFileName, ios::out | ios::app);
  if (!outFile.is_open()) {
    cerr << "Error: Could not open file " << outputFileName << " for writing." << endl;
    return false;
  }

  // Create a non-const copy to use with the operator
  // since the operator<< takes a non-const reference
  maleClothes tempCopy = *this;

  // Use the existing overloaded operator
  outFile << tempCopy;

  outFile << "\n\n";
  outFile.close();
  return true;
}