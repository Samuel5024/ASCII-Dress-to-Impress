#include <iostream>
#include <fstream>
using namespace std;

void displayMaleModel() {
    // Open the file "man.txt" for reading
    ifstream model("man.txt");

    // String variable to store each line from the file
    string man;

    // Loop to read and print exactly 134 lines from the file
    for (int i = 0; i < 134; i++) {
        getline(model, man); // Read one line from the file into "man"
        cout << man << endl; // Output the line to the console
    }

    // Close the file after reading
    model.close();
}
