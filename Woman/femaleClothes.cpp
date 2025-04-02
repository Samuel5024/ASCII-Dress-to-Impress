#include "femaleClothes.h"

// Constructor: Initializes variables
femaleClothes::femaleClothes() : comboOption(0), totalLines(0) {
    displayFModel();
}

// Set the blouse option
void femaleClothes::setBlouse(int option) {
    this->blouseOption = option;
    myBlouse.setBlouse(option);
}

// Set the pants option
void femaleClothes::setFPants(int option) {
    this->fPantOption = option;
    myFPant.setFPant(option);
}

// Set the dress option
void femaleClothes::setDress(int option) {
    this->dressOption = option;
    myDress.setDress(option);
}

// Set the outfit combination choice
void femaleClothes::setCombo(int option) {
    if (comboOptions.find(option) != comboOptions.end()) {
        comboOption = option;
    } else {
        cout << "Invalid selection. Choose either 1 for Dress or 2 for Blouse and Pants." << endl;
    }
}

// Overloaded << operator to display the female model with selected outfit
ostream& operator<<(ostream& os, const femaleClothes& obj) {
    ifstream modelFile("Woman/femaleModel/femaleModel.txt");

    if (!modelFile) {
        modelFile.open("../Woman/femaleModel/femaleModel.txt");
        if (!modelFile) {
            os << "Error: Could not open female model file. Check file path." << endl;
            return os;
        }
    }

    vector<string> modelLines;
    string line;

    // Read model lines into vector
    while (getline(modelFile, line)) {
        modelLines.push_back(line);
    }
    modelFile.close();

    int totalModelLines = modelLines.size();
    const int blouseLines = 17;
    const int pantsLines = 23;

    // Display the upper body (first 8 lines)
    for (int i = 0; i < 8 && i < totalModelLines; i++) {
        os << modelLines[i] << endl;
    }

    // Display the selected clothing based on combo choice
    if (obj.comboOption == 1) { // Dress
        obj.myDress.getDress();
    } else if (obj.comboOption == 2) { // Blouse and Pants
        obj.myBlouse.getBlouse();
        obj.myFPant.getFPant();
    }

    // Display the remaining body lines
    for (int i = 8 + blouseLines + pantsLines; i < totalModelLines; i++) {
        os << modelLines[i] << endl;
    }

    return os;
}
