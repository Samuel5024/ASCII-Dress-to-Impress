#include <iostream>
#include <fstream>
#include "jeans.h"
using namespace std;

void displayDressPattern()
{
    ifstream pants("jeans.txt");
    string jeans;
    int row = 0;
    
    while(getline(pants, jeans)) {
        int width = jeans.length();
        
        for(size_t col = 0; col < width; col++){
            
            if(row >= 2 && row <= 4){
                
                if(col % 7 == 0 || col % 7 == 1) {
                    cout << "\033[34m" << jeans[col];
                }
                
                else {
                    cout << "\033[30m" << jeans[col];
                }
            }
            
            else {
                cout << "\033[34m" << jeans[col];
            }
        }
    cout << "\033[0m" << endl;
    row++;    
    }
    
   
        
    pants.close();
}