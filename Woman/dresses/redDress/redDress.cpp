#include "redDress.h"

void displayRedDressPattern() {
    ifstream redDress("redDress.txt");
    string picture;
    int row = 0;

    while(getline(redDress, picture)) { 
        if(i >= 17) {
            cout << "\033[2;31m" << picture << "\033[0m" << endl; 
        } else {
            court << "\033[31m" << picture << endl; 
        }
        row++;
    }
    redDress.close();
}
