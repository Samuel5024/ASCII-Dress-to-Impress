#include "khakis.h"

void displayKhakisPattern() {
    // Open the file "khakis.txt" for reading
    fstream pants("../Man/Pants/khakis/khakis.txt");

    // String variable to store each line from the file
    string shorts;

    // Read each line from the file
    while (getline(pants, shorts)) {

        court << shorts << endl;

    // Close the file after reading
    pants.close();
}
