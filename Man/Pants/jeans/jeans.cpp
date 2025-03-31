#include "jeans.h"  // Include the header file for jeans functionality

// Function to display the jeans pattern
void displayJeansPattern() {
    // Open the file "jeans.txt" for reading
    ifstream pants("Man/Pants/jeans/jeans.txt");

    // String variable to store each line from the file
    string jeans;

    // Variable to track the row number
    int row = 0;

    // Read each line from the file
    while (getline(pants, jeans)) {
        // Determine the width (length) of the current line
        int width = jeans.length();

        // Iterate over each character in the line
        for (size_t col = 0; col < width; col++) {

            // Apply specific pattern for rows 2 to 4
            if (row >= 2 && row <= 4) {

                // Use blue for specific columns to simulate a pattern (e.g., seams or pockets)
                if (col % 6 == 0 || col % 6 == 1) {
                    cout << "\033[34m" << jeans[col];  // Blue color
                }
                else {
                    cout << "\033[30m" << jeans[col];  // Black color for the rest of the pattern
                }
            }
            else {
                // Use blue for all other rows
                cout << "\033[34m" << jeans[col];  // Blue color
            }
        }

        // Reset text color and move to the next line
        cout << "\033[0m" << endl;

        // Increment row counter
        row++;
    }

    // Close the file after reading
    pants.close();
}
