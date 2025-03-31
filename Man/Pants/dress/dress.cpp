#include "dress.h"  // Include the header file for dress functionality

// Function to display the dress pants pattern
void displayDressPattern() {
	// Open the file "dressPants.txt" for reading
	fstream pants("Man/Pants/dress/dressPants.txt");

	// String variable to store each line from the file
	string dressPants;

	// Variable to track the row number
	int row = 0;

	// Read each line from the file
	while (getline(pants, dressPants)) {
		// Determine the width (length) of the current line
		int width = dressPants.length();

		// Iterate over each character in the line
		for (size_t col = 0; col < width; col++) {

			// Apply a white stripe for rows 1 to 2
			if (row >= 1 && row <= 2) {

				// Insert black stripes to simulate belt loops at specific column positions
				if (col % 3 == 1 || col % 3 == 0) {
					cout << "\033[30m" << dressPants[col];  // Black color for belt loops
				}
				else {
					cout << "\033[37m" << dressPants[col];  // White color for the stripe
				}
			}
			else {
				// Apply black color for all other rows
				cout << "\033[30m" << dressPants[col];
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
