#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream shirt ("tanktop.txt");
    string tanktop;
    
    while(getline(shirt, tanktop)) {
        cout << tanktop << endl;
    }
    
    shirt.close();
    return 0;
}