#include "maleModel.h"

void displayMaleModel() {
    // Open the file "man.txt" for reading
    ifstream model("./man.txt");

    cout << model.is_open() << endl;

    // String variable to store each line from the file
    string man;

    // Read each line of the file
    while (getline(model, man)) {
        cout << man << endl;
    }

    // Close the file after reading
    model.close();
}
