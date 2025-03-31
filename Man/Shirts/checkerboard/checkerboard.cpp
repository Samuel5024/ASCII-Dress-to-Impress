#include "checkerboard.h"  // Include the header file for the checkerboard shirt functionality

// Function to display the checkerboard shirt pattern
void displayCheckerPattern() {
    // Open the file "checkerboard.txt" for reading
    fstream shirt("../Man/Shirts/checkerboard/checkerboard.txt");

    // String variable to store each line from the file
    string checkerboard;

    // Variable to track the row number
    int row = 0; // Track the current row number

    // Read each line from the file
    while (getline(shirt, checkerboard)) {
        // Determine the width (length) of the current line
        int width = checkerboard.length();

        // Iterate over each character in the line
        for (size_t col = 0; col < width; col++) {

            // Check if the sum of the row and column indices divided by 2 is even
            // This will create 2x2 squares every 2 rows and columns
            if ((row / 2 + col / 2) % 2 == 0) {
                cout << "\033[37m" << checkerboard[col];  // White color for even squares
            }
            else {
                cout << "\033[34m" << checkerboard[col];  // Blue color for odd squares
            }
        }

        // Reset text color and move to the next line
        cout << "\033[0m" << endl;  // Reset color at the end of each line
        row++;  // Increment row counter
    }

    // Close the file after reading
    shirt.close();
}
