#include "strippedShirt.h"  // Include the header file for striped shirt functionality

// Function to display the striped shirt pattern
void displayStrippedPattern() {
    // Open the file "stripes.txt" for reading
    fstream shirt("stripes.txt");

    // String variable to store each line from the file
    string stripes;

    // Variable to track the row number (i)
    int row = 0;

    // Read each line from the file
    while (getline(shirt, stripes)) {

        // If row number is between 6 and 8, print with blue color
        if (row >= 6 && row <= 8) {
            cout << "\033[94m" << stripes << endl;  // Blue color
        }
        // If row number is between 9 and 10, print with red color
        else if (row >= 9 && row <= 10) {
            cout << "\033[31m" << stripes << endl;  // Red color
        }
        // For all other rows, print with white color
        else {
            cout << "\033[97m" << stripes << endl;  // White color
        }

        row++;  // Increment the row counter
    }

    // Close the file after reading
    shirt.close();
}
