#include "femaleModel.h"

void displayFModel() {
     fstream female("female.txt");
 string model;

while(getline(female, model)){
     cout << model << endl;
 }
 
}
