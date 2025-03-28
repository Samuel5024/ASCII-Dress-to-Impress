#include "femaleClothes.h"

femaleClothes::femaleClothes() {
  displayFModel();
}

// Set the shirt option
void femaleClothes::setBlouse(int option) {
  this->blouseOption = option;
  myBlouse.setBlouse(option);  // Set the shirt in the shirt object
}

// Set the pants option
void femaleClothes::setFPants(int option) {
  this->fPantOption = option;
  myPant.setFPants(option);   // Set the pants in the pants object
}

void femaleClothes::setDress(int option){
  this->dressOption = option;
  mydress.setDress(option);
}

ostream& operator<<(ostream& os, const femaleClothes& obj) {
  if (comboOption.find(obj.comboOption) != comboOption.end()) {
    switch (obj.comboOption) {
      case 1:
        ifstream model("femaleModel/female.txt"); // Reopen the model file
        string line;
        int lineCount = 0;

        if(!model) {
          os << "Error: Could not open male model file.\n";
          return os;
        }

        // Display the first 21 lines (base model part)
        while (lineCount < 21 && getline(model, line)) {
          os << line << endl;
          lineCount++;
        }

        obj.myDress.getDress();

    }
  }
}
