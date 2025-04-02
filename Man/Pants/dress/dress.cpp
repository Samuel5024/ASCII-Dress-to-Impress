#include "dress.h"  // Include the header file for dress functionality

// Function to display the dress pants pattern
void displayDressPattern() {
	// Open the file "dressPants.txt" for reading
	fstream pants("../Man/Pants/dress/dressPants.txt");

	// String variable to store each line from the file
	string dressPants;

	while(getline(pants, dressPants)) {

		cout << dressPants << endl;
	}
	
	// Close the file after reading
	pants.close();
}
