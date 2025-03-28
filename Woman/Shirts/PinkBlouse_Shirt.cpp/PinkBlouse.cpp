#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream blouse("PinkBlouse.txt");
    string pinkBlouse;
    
    while(getline(blouse, pinkBlouse)) {
        cout << "\033[38;5;212m" << pinkBlouse << endl;
    }
    
    blouse.close();
    return 0;
}