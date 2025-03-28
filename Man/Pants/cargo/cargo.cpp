#include "cargo.h"  // Header file

void displayCargoPattern()
{
    // Open the file "cargoPants.txt" for reading
    fstream pants("cargoPants.txt");

    // String variable to store each line from the file
    string cargo;

    // Variable to track the row number
    int row = 0;

    // Read each line from the file
    while (getline(pants, cargo)) {

        // Determine the width (length) of the current line
        int width = cargo.length();

        // Iterate over each character in the line
        for (size_t col = 0; col < width; col++) {

            // Apply a different color to specific row ranges
            if ((row >= 25 && row <= 35) || (row >= 2 && row <= 4)) {
                cout << "\033[96m" << cargo[col]; // Light cyan for these rows
            }
            else {
                cout << "\033[36m" << cargo[col]; // Regular cyan for all other rows
            }
        }

        // Reset text color and move to the next line
        cout << "\033[0m" << endl;

        // Increment row counter
        row++;
    }
    pants.close();
}
