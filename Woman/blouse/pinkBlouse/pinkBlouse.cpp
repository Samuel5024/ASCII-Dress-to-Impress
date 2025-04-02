#include "pinkBlouse.h"

void displayPinkBlousePattern(){
    fstream blouse("../Woman/blouse/pinkBlouse/pinkBlouse.txt");
    string pinkBlouse;
    
    while(getline(blouse, pinkBlouse)) {
        cout << "   " << pinkBlouse << endl;
    }
    
    blouse.close();

}
