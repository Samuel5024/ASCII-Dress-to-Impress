#include "redDress.h"

void displayRedDressPattern() {
    ifstream redDress("../Woman/dresses/redDress/redDress.txt");
    string picture;
    int row = 0;

    while(getline(redDress, picture)) {
        if(row >= 17) {
            cout << "\033[2;31m" << picture << "\033[0m" << endl;
        } else {
            cout << "\033[31m" << picture << endl;
        }
        row++;
    }
    redDress.close();
}