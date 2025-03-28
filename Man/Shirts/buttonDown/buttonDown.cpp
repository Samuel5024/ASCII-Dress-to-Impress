#include <iostream>
#include <fstream>
#include "buttonDown.h"
using namespace std;

void displayButtonPattern() {
    fstream shirt("buttonDown.txt");
    string buttons;
    int height = 0;
    
    while(getline(shirt, buttons)) {
        int width = buttons.length();
        
        for(size_t col = 0; col < width; col++) {
            
            if(height >= 5 && col >= width / 2 - 1 && col <= width / 2 + 1) {
                cout << "\033[97m" << buttons[col];
            }
            
            else {
                cout << "\033[31m" << buttons[col];
            }
        }
        cout << "\033[0m" << endl;
        height++;
    }
    shirt.close();
}