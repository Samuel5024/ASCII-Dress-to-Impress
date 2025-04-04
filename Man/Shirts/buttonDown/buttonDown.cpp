#include "buttonDown.h"  // Include the header file for button-down shirt functionality

// Function to display the button-down shirt pattern
void displayButtonPattern() {
    // Open the file "buttonDown.txt" for reading
    fstream shirt("../Man/Shirts/buttonDown/buttonDown.txt");

    string buttons;
    // Read each line from the file
    while (getline(shirt, buttons)) {
        cout << "   " << buttons << endl;
    }

    // Close the file after reading
    shirt.close();
}
