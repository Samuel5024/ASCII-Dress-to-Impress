#include "dress.h"  // Include the header file for dress functionality

// Function to display the dress pants pattern
void displayDressPattern() {
	// Open the file "dresspants.txt" for reading
	fstream pants("dresspants.txt");

	// String variable to store each line from the file
	string dresspants;

	// Variable to track the row number
	int row = 0;

	// Read each line from the file
	while (getline(pants, dresspants)) {
		// Determine the width (length) of the current line
		int width = dresspants.length();

		// Iterate over each character in the line
		for (size_t col = 0; col < width; col++) {

			// Apply a white stripe for rows 2 to 3
			if (row >= 2 && row <= 3) {

				// Insert black stripes to simulate belt loops at specific column positions
				if (col % 8 == 1 || col % 8 == 0) {
					cout << "\033[30m" << dresspants[col];  // Black color for belt loops
				}
				else {
					cout << "\033[37m" << dresspants[col];  // White color for the stripe
				}
			}
			else {
				// Apply black color for all other rows
				cout << "\033[30m" << dresspants[col];
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
