#include "pants.h"

void pants::getPants() const{
    if (pantsOptions.find(pantsOption) != pantsOptions.end()) {
      cout << "You have selected: " << pantsOptions.at(pantsOption) << endl;
        switch (pantsOption) {
            case 1:
                displayCargoPattern();
                break;
            case 2:
                displayDressPattern();
                break;
            case 3:
                displayJeansPattern();
                break;
            case 4:
                displayKhakisPattern();
                break;
            case 5:
                displayShortsPattern();
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