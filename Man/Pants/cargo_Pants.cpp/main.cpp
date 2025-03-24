#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream pants ("cargoPants.txt");
    string cargo;
    int row = 0;
    
    while(getline(pants, cargo)) {
    
        int width = cargo.length();
        
        for(size_t col = 0; col < width; col++) {
            
            
            if((row >= 25 && row <= 35) || (row >= 2 && row <= 4)) {
                cout << "\033[96m" << cargo[col];
            }
            
            else {
                cout << "\033[36m" << cargo[col];
            }
            
        }
        
        cout << "\033[0m" << endl;
        row++;
    }
    
    return 0;
}