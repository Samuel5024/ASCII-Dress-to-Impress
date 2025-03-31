#include "femaleClothes.h"

femaleClothes::femaleClothes() : comboOption(0), dressOption(0), blouseOption(0), fPantOption(0) {
  displayFModel();
}

// Set the blouse option
void femaleClothes::setBlouse(int option) {
  this->blouseOption = option;
  myBlouse.setBlouse(option);  // Set the blouse in the blouse object
  totalLines = 18;
}

// Set the pants option
void femaleClothes::setFPants(int option) {
  this->fPantOption = option;
  myPant.setFPant(option);   // Fixed method name: setFPant not setFPants
  totalLines = 21;
}

void femaleClothes::setDress(int option) {
  this->dressOption = option;
  myDress.setDress(option);
  totalLines = 39;
}

void femaleClothes::setCombo(int option) {
  if (comboOptions.find(option) != comboOptions.end()) {
    this->comboOption = option;
  } else {
    cout << "Invalid combo option!" << endl;
  }
}

ostream& operator<<(ostream& os, const femaleClothes& obj) {
  if (comboOptions.find(obj.comboOption) != comboOptions.end()) {
    switch (obj.comboOption) {
      case 1: {
        ifstream model("femaleModel/female.txt"); // Reopen the model file
        string line;
        int lineCount = 0;

        if(!model) {
          os << "Error: Could not open female model file.\n";
          return os;
        }

        // Display the first 21 lines (base model part)
        while (lineCount < 10 && getline(model, line)) {
          os << line << endl;
          lineCount++;
        }
        model.close();

        obj.myDress.getDress();
        break;
      }
      case 2: {
        ifstream model("femaleModel/female.txt");
        string line;
        int lineCount = 0;

        if(!model) {
          os << "Error: Could not open female model file.\n";
          return os;
        }

        // Display the first 21 lines (base model part)
        while (lineCount < 21 && getline(model, line)) {
          os << line << endl;
          lineCount++;
        }
        model.close();

        obj.myBlouse.getBlouse();
        obj.myPant.getFPant();
        break;
      }
      default:
        os << "Please select a valid combination option.\n";
        break;
    }
  } else {
    os << "Please select a valid combination option.\n";
  }
  return os;
}