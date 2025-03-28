#include "redDress.h"

void displayRedDressPattern() {
    ifstream redDress("redDress.txt");
    string picture;
    int i = 0;

    while(getline(redDress, picture)) { 
        if(i >= 23) {
            cout << "\033[31m" << picture << "\033[0m" << endl; 
        } else {
            cout << picture << endl; 
        }
        i++;
    }
    redDress.close();
}
