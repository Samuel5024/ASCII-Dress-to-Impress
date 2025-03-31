#include "mPants.h"

void mPants::getPants() const {
    if (pantsOptions.find(pantsOption) != pantsOptions.end()) {
        switch (pantsOption) {
            case 1:
                displayCargoPattern(); // Display Cargo Pants pattern
            break;
            case 2:
                displayDressPattern(); // Display Dress Pants pattern
            break;
            case 3:
                displayJeansPattern(); // Display Jeans pattern
            break;
            case 4:
                displayKhakisPattern(); // Display Khakis pattern
            break;
            default:
                cout << "Invalid Selection!" << endl;
            break;
        }
    } else {
        cout << "Invalid Selection!" << endl;
    }
}

// Function to set the pants option
void mPants::setPants(int option) {
    if (pantsOptions.find(option) != pantsOptions.end()) {
        pantsOption = option; // Update the pantsOption with valid option
    } else {
        cout << "Invalid Pants Option!" << endl; // Handle invalid selection
    }
}
