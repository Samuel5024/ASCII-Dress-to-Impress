#include "leggings.h"

void displayLeggingsPattern() {
    fstream pants("../Woman/fPants/leggings/leggings.txt");
    string leggings;
    
    while(getline(pants, leggings)) {
        cout << "\\033[31m" << leggings << endl;
    }
    pants.close();
}