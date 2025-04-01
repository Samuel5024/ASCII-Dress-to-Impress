#include "buttonDown.h"  // Include the header file for button-down shirt functionality

// Function to display the button-down shirt pattern
void displayButtonPattern() {
    // Open the file "buttonDown.txt" for reading
    fstream shirt("../Man/Shirts/buttonDown/buttonDown.txt");
    cout << shirt.is_open() << endl;

    // String variable to store each line from the file
    string buttons;

    // Variable to track the row (height) of the shirt pattern
    int height = 0;

    // Read each line from the file
    while (getline(shirt, buttons)) {
        // Determine the width (length) of the current line
        int width = buttons.length();
        int center = width / 2;

        // Iterate over each character in the line
        for (size_t col = 0; col < width; col++) {

            // Apply a specific pattern for the middle column (buttons) for rows with height >= 1
            if (height >= 1 && col >= center - 1 && col <= center + 1) {
                cout << "\\033[97m" << buttons[col];  // White color for button columns
            }
            else {
                cout << "\\033[31m" << buttons[col];  // Red color for the rest of the pattern
            }
        }

        // Reset text color and move to the next line
        cout << "\\033[0m" << endl;

        // Increment height (row) counter
        height++;
    }

    // Close the file after reading
    shirt.close();
}
