#include "jeanShorts.h"

void displayJeanShortsPattern() {
    fstream pants("jeanShorts.txt");
    string jeanShorts;
    int row = 0;
    
    while(getline(pants, jeanShorts)) {
        int width = jeanShorts.length();
        
        for(size_t col = 0; col < width; col++) {
            
            if(row >= 1 && row <= 2){
                
               cout << "\033[30m" << jeanShorts[col];
            } 
            
            else{
                cout << "\033[34m" << jeanShorts[col];
            }
        }
        cout << "\033[0m" << endl;
        row++;        
    }
    
    pants.close();
}
