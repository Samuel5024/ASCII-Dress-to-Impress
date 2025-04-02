#include "tightDress.h"

void displayTightDressPattern() {
    fstream dress("../Woman/dresses/tightDress/tightDress.txt");
    string tightDress;
    
    while(getline(dress, tightDress)) {
        cout << "  " << tightDress << endl;
    }
    
    dress.close();
}
