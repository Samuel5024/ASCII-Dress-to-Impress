#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream pants("JeansShorts.txt");
    string Jeansshorts;
    int row = 0;
    
    while(getline(pants, Jeansshorts)) {
        int width = Jeansshorts.length();
        
        for(size_t col = 0; col < width; col++) {
            
            if(row >= 3 && row <= 4){
                
               cout << "\033[30m" << Jeansshorts[col]; 
            } 
            
            else{
                cout << "\033[34m" << Jeansshorts[col];
            }
        }
        cout << "\033[0m" << endl;
        row++;        
    }
    
    pants.close();
    return 0;
}