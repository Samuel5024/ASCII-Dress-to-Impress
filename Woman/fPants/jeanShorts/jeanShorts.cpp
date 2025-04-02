#include "jeanShorts.h"

void displayJeanShortsPattern() {
    fstream pants("../Woman/fPants/jeanShorts/jeanShorts.txt");
    string jeanShorts;
    int row = 0;
    
    while(getline(pants, jeanShorts)) {
        
        cout << "        " << jeanShorts << endl;
    }
    
    pants.close();
}
