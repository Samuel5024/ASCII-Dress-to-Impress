#include "grayShirt.h"  // Include the header file for gray shirt functionality

// Function to display the gray shirt pattern
void displayGrayPattern() {
    // Open the file "shirt.txt" for reading
    ifstream shirt("shirt.txt");

    // String variable to store each line from the file
    string grayShirt;

    // Read each line from the file
    while (getline(shirt, grayShirt)) {
        // Display the line with gray color using ANSI escape code
        cout << "\033[90m" << grayShirt << endl;  // Dark gray color
    }

    // Close the file after reading
    shirt.close();
}
