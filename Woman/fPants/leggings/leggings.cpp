#include "leggings.h"

void displayLeggingsPattern() {
    fstream pants("../fPants/leggings/leggings.txt");
    string leggings;
    
    while(getline(pants, leggings)) {
        cout << "\033[31m" << leggings << endl;
    }
    pants.close();
}