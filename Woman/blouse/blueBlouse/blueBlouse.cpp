#include "blueBlouse.h"

void displayBlueBlousePattern() {
    fstream blouse ("blueBlouse.txt");
    string blueBlouse;
    
    while (getline(blouse, blueBlouse)) {
        cout << "\033[34m" << blueBlouse << endl;
    }
    
    blouse.close();
}
