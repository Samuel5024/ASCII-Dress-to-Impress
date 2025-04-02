#include "checkerboard.h"  // Include the header file for the checkerboard shirt functionality

// Function to display the checkerboard shirt pattern
void displayCheckerPattern() {
    // Open the file "checkerboard.txt" for reading
    fstream shirt("../Man/Shirts/checkerboard/checkerboard.txt");

    // String variable to store each line from the file
    string checkerboard;

    // Read each line from the file
    while (getline(shirt, checkerboard)) {

        cout << "   " << checkerboard << endl;
        
    }

    // Close the file after reading
    shirt.close();
}
