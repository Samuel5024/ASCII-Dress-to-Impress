#include "dresses.h"

void dresses::getDress() const {
    if (dressOptions.find(dressesOption) != dressOptions.end()) {
        cout << "You have selected: " << dressOptions.at(dressesOption) << endl;
        switch (dressesOption) {
            case 1:
                displayRedDressPattern(); // Display Red Dress pattern
            break;
            case 2:
                displayTightDressPattern(); // Display Tight Dress pattern
            break;
            default:
                cout << "Invalid Selection!" << endl;
            break;
        }
    } else {
        cout << "Invalid Selection!" << endl;
    }
}

// Function to set the dress option
void dresses::setDress(int option) {
    if (dressOptions.find(option) != dressOptions.end()) {
        dressesOption = option; // Update the dressesOption with valid option
    } else {
        cout << "Invalid Dress Option!" << endl; // Handle invalid selection
    }
}
