#include "strippedShirt.h"  // Include the header file for striped shirt functionality

// Function to display the striped shirt pattern
void displayStrippedPattern() {
    // Open the file "strippedShirt.txt" for reading
    fstream shirt("../Man/Shirts/strippedShirt/strippedShirt.txt");

    // String variable to store each line from the file
    string stripes;

    // Read each line from the file
    while (getline(shirt, stripes)) {

        court << stripes << endl;
    }

    // Close the file after reading
    shirt.close();
}
