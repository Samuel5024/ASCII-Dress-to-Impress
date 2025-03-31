#include "pinkBlouse.h"

void displayPinkBlousePattern(){
    fstream blouse("../Woman/blouse/pinkBlouse/pinkBlouse.txt");
    string pinkBlouse;
    
    while(getline(blouse, pinkBlouse)) {
        cout << "\033[38;5;212m" << pinkBlouse << endl;
    }
    
    blouse.close();

}