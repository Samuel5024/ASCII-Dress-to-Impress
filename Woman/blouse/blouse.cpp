#include "blouse.h"
void blouse::getBlouse() const {
    if (blouseOptions.find(blouseOption) != blouseOptions.end()) {
        cout << "You have selected: " << blouseOptions.at(blouseOption) << endl;
        switch (blouseOption) {
            case 1:
                displayPinkBlousePattern();  // Display Pink Blouse pattern
            break;
            case 2:
                displayBlueBlousePattern();  // Display Blue Blouse pattern
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
void blouse::setBlouse(int option) {
    if (blouseOptions.find(option) != blouseOptions.end()) {
        blouseOption = option;  // Update blouseOption with valid option
    } else {
        cout << "Invalid Pants Option!" << endl;  // Handle invalid selection
    }
}