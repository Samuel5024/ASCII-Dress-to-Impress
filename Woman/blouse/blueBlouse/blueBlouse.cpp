#include "blueBlouse.h"

void displayBlueBlousePattern() {
    fstream blouse ("../Woman/blouse/blueBlouse/blueBlouse.txt");
    string blueBlouse;
    
    while (getline(blouse, blueBlouse)) {
        cout << "   " << blueBlouse << endl;
    }
    
    blouse.close();
}
