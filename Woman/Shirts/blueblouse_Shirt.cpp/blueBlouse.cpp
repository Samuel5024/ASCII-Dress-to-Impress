#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream blouse("blueBlouse.txt");
    string blueBlouse;
    while(getline(blouse, blueBlouse)) {
        cout << "\033[34m" << blueBlouse << endl;
    }
    
    blouse.close();
    return 0;
}