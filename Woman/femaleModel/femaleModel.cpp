#include "femaleModel.h"

void displayFModel() {
     // Try multiple possible paths to find the file
     ifstream model("Woman/femaleModel/femaleModel.txt");

     if (!model.is_open()) {
          // Try alternative path
          model.close();
          model.open("Woman/femaleModel/femaleModel.txt");

          if (!model.is_open()) {
               // Try another alternative path
               model.close();
               model.open("Woman/femaleModel/femaleModel.txt");

               if (!model.is_open()) {
                    cout << "Error: Could not open femaleModel.txt file. Check file path." << endl;
                    return;
               }
          }
     }

     // String variable to store each line from the file
     string woman;

     // Read each line from the file
     while (getline(model, woman)) {
          cout << woman << endl;
     }

     // Close the file after reading
     model.close();
}