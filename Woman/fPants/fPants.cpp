#include "fPants.h"
void fPants::getFPant() const {
    if (fPantOptions.find(fPantOption) != fPantOptions.end()) {
        switch (fPantOption) {
            case 1:
                displayBlackJeansPattern();  // Display Black Jeans pattern
            break;
            case 2:
                displayJeanShortsPattern();  // Display Checkerboard Shirt pattern
            break;
            case 3:
                displayLeggingsPattern();  // Display Gray Shirt pattern
            break;
            default:
                cout << "Invalid Selection!" << endl;
            break;
        }
    } else {
        cout << "Invalid Selection!" << endl;
    }
}

// Function to set the shirt option
void fPants::setFPant(int option) {
    if (fPantOptions.find(option) != fPantOptions.end()) {
        fPantOption = option;  // Update fPantsOption with valid option
    } else {
        cout << "Invalid Pants Option!" << endl;  // Handle invalid selection
    }
}