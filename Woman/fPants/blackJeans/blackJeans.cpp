#include "blackJeans.h"

void displayBlackJeansPattern() {
    fstream pants("../Woman/fPants/blackJeans/blackJeans.txt");
    string blackJeans;
    
    while(getline(pants, blackJeans)) {
        cout << "\033[30m" << blackJeans << endl;
    }
    
    pants.close();
}