#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream shirt("stripes.txt"); 
    string stripes;
    int i = 0;
    
    while(getline(shirt, stripes)) {
        if(i >= 15 && i <= 25) {
            cout << "\033[94m" << stripes << endl;
        }
        
        else if(i >= 35 && i <= 45) {
            cout <<"\033[31m" << stripes << endl;  
        }
        
        else {
            cout << "\033[97m" << stripes << endl;
        }
        i++;
    }
    
    shirt.close();
    return 0;
}