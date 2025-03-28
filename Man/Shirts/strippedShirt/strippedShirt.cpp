#include "strippedShirt.h"  // Include the header file for striped shirt functionality

// Function to display the striped shirt pattern
void displayStrippedPattern() {
    // Open the file "stripes.txt" for reading
    fstream shirt("stripes.txt");

    // String variable to store each line from the file
    string stripes;

    // Variable to track the row number (i)
    int i = 0;

    // Read each line from the file
    while (getline(shirt, stripes)) {

        // If row number is between 15 and 25, print with blue color
        if (i >= 15 && i <= 25) {
            cout << "\033[94m" << stripes << endl;  // Blue color
        }
        // If row number is between 35 and 45, print with red color
        else if (i >= 35 && i <= 45) {
            cout << "\033[31m" << stripes << endl;  // Red color
        }
        // For all other rows, print with white color
        else {
            cout << "\033[97m" << stripes << endl;  // White color
        }

        i++;  // Increment the row counter
    }

    // Close the file after reading
    shirt.close();
}
