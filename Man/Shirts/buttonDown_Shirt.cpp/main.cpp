#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream shirt("buttonDown.txt");
    string buttons;
    for(int i = 0; i < 52; i++) {
        getline(shirt, buttons);
        cout << "\033[31m" << buttons << endl;
        
    }
    shirt.close();
    return 0;
}