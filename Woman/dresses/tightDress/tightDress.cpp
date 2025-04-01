#include "tightDress.h"

void displayTightDressPattern() {
    fstream dress("../Woman/dresses/tightDress/tightDress.txt");
    string tightDress;
    
    while(getline(dress, tightDress)) {
        cout << "\\033[36m" << tightDress << endl;
    }
    
    dress.close();
}