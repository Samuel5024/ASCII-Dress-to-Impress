#include "redDress.h"

void displayRedDressPattern() {
    ifstream redDress("../Woman/dresses/redDress/redDress.txt");
    string picture;
    int row = 0;

    while(getline(redDress, picture)) {
        
        cout << picture << endl;
    }
    redDress.close();
}
