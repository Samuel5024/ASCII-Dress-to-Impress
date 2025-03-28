#include <fstream>
#include <iostream>
#include "tanktop.h"
using namespace std;

void displayTanktopPattern()
{
    fstream shirt ("tankTop.txt");
    string tanktop;
    
    while(getline(shirt, tanktop)) {
        cout << tanktop << endl;
    }
    
    shirt.close();
}