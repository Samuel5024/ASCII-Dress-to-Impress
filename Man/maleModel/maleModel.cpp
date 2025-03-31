#include "maleModel.h"

void displayMaleModel() {
    // Try multiple possible paths to find the file
    ifstream model("Man/maleModel/man.txt");

    if (!model.is_open()) {
        // Try alternative path
        model.close();
        model.open("Man/maleModel/man.txt");

        if (!model.is_open()) {
            // Try another alternative path
            model.close();
            model.open("Man/maleModel/man.txt");

            if (!model.is_open()) {
                cout << "Error: Could not open man.txt file. Check file path." << endl;
                return;
            }
        }
    }

    // String variable to store each line from the file
    string man;

    // Read each line from the file
    while (getline(model, man)) {
        cout << man << endl;
    }

    // Close the file after reading
    model.close();
}