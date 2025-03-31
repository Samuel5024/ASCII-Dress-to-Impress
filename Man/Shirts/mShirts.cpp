#include "mShirts.h"

void mShirts::getShirt() const {
    if (shirtOptions.find(shirtOption) != shirtOptions.end()) {
        switch (shirtOption) {
            case 1:
                displayButtonPattern();  // Display Button Down Shirt pattern
            break;
            case 2:
                displayCheckerPattern();  // Display Checkerboard Shirt pattern
            break;
            case 3:
                displayGrayPattern();  // Display Gray Shirt pattern
            break;
            case 4:
                displayStrippedPattern();  // Display Stripped Shirt pattern
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
void mShirts::setShirt(int option) {
    if (shirtOptions.find(option) != shirtOptions.end()) {
        shirtOption = option;  // Update shirtOption with valid option
    } else {
        cout << "Invalid Shirt Option!" << endl;  // Handle invalid selection
    }
}
