#include "leggings.h"

void displayLeggingsPattern() {
    fstream pants("../Woman/fPants/leggings/leggings.txt");
    string leggings;
    
    while(getline(pants, leggings)) {
        cout << leggings << endl;
    }
    pants.close();
}
