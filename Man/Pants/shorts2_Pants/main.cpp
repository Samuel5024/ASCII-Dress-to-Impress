#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream pants("shorts.txt");
    string shorts;
    int row = 0;
    
    while(getline(pants, shorts)) {
        int width = shorts.length();
        
        for(size_t col = 0; col < width; col++){
            
            if(col <= width / 2 + 4){
                cout << "\033[30m" << shorts[col];
            }
            
            else {
                cout << "\033[31m" << shorts[col];
            }
        }
        cout << "\033[0m" << endl;
        row++;
    }
    pants.close();
    return 0;
}