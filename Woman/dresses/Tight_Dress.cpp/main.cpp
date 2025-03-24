#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream dress("tightdress.txt");
    string tightdress;
    
    if(!dress) { // Check if the file opened successfully
        cerr << "Error: Could not open the file!" << endl;
        return 1; // Exit with an error code
    }
    
    while(getline(dress, tightdress)) {
        cout << "\033[36m" << tightdress << endl;
    }
    
    dress.close();
    return 0;
}