#include "khakis.h"

void displayKhakisPattern() {
    // Open the file "khakis.txt" for reading
    fstream pants("../Man/Pants/khakis/khakis.txt");

    // String variable to store each line from the file
    string shorts;

    // Variable to track the row number
    int row = 0;

    // Read each line from the file
    while (getline(pants, shorts)) {
        // Determine the width (length) of the current line
        int width = shorts.length();

        // Iterate over each character in the line
        for (size_t col = 0; col < width; col++) {

            // Apply black color for rows 1-2
            if (row >= 1 && row <= 2) {
                cout << "\033[30m" << shorts[col];  // Black color for rows 1-2
            }
            else {
                // Apply a specific color (light orange) for the rest of the rows
                cout << "\033[38;5;180m" << shorts[col];  // Light orange color
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
