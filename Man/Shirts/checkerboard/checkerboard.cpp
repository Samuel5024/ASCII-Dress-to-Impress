#include <fstream>
#include <iostream>
#include "checkerboard.h"
using namespace std;

void displayCheckerPattern() {
    fstream shirt("checkerboard.txt");
    string checkerboard;
    int row = 0;//track row number
    
    while(getline(shirt, checkerboard)) {
        int width = checkerboard.length();
        
        for(size_t col = 0; col < width; col++) {
            
            if((row / 2 + col / 2) % 2 == 0) { //create 5x5 squares every 5 rows and columns
                cout << "\033[37m" << checkerboard[col];
            }
            
            else {
                cout << "\033[34m" << checkerboard[col];
            }
        }
        
        cout << "\033[0m" << endl; //reset color at the end of each line
        row++;
    }
    
    shirt.close();
}