#include "jeans.h"  // Include the header file for jeans functionality

// Function to display the jeans pattern
void displayJeansPattern() {
    // Open the file "jeans.txt" for reading
    ifstream pants("../Man/Pants/jeans/jeans.txt");

    // String variable to store each line from the file
    string jeans;

    while(getline(pants, jeans)) {

        court << jeans << endl;
    }
    // Close the file after reading
    pants.close();
}
