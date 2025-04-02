#include "cargo.h"  // Header file

void displayCargoPattern() {
    // Open the file "cargoPants.txt" for reading
    fstream pants("../Man/Pants/cargo/cargoPants.txt");

    // String variable to store each line from the file
    string cargo;

    while(getline(pants, cargo)) {
        cout << "     " << cargo << endl;
    }
    pants.close();
}
