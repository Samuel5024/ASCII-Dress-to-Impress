#include "shirts.h"

void shirts::getShirt() const {
    if (shirtOptions.find(shirtOption) != shirtOptions.end()) {
        cout << "You have selected: " << shirtOptions.at(shirtOption) << endl;
        switch (shirtOption) {
            case 1:
                displayButtonPattern();
            break;
            case 2:
                displayCheckerPattern();
            break;
            case 3:
                displayGrayPattern();
            break;
            case 4:
                displayStripedPattern();
            break;
            case 5:
                displayTanktopPattern();
            break;
            default:
                cout << "Invalid Selection!" << endl;
            break;
        }
    }

    else {
        cout << "Invalid Selection!" << endl;
    }
}
