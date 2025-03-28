#include "femaleModel.h"

void displayFModel() {
    fstream female("female.txt");
    string model;
    for(int i = 0; i < 144; i++) {
        getline(female, model);
        cout << model << endl;
    }
    female.close();
}