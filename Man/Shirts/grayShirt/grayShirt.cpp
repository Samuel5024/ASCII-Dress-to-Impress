#include "grayShirt.h"  // Include the header file for gray shirt functionality

// Function to display the gray shirt pattern
void displayGrayPattern() {
    // Open the file "grayShirt.txt" for reading
    ifstream shirt("../Man/Shirts/grayShirt/grayShirt.txt");

    // String variable to store each line from the file
    string grayShirt;

    // Read each line from the file
    while (getline(shirt, grayShirt)) {
        
        cout << "  " << grayShirt << endl;
    }

    // Close the file after reading
    shirt.close();
}
