#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream redDress("RedDress.txt");
    string picture;
    int i = 0;

    while(getline(redDress, picture)) { // Reads each line until EOF
        if(i >= 23) {
            cout << "\033[31m" << picture << "\033[0m" << endl; // Red color after line 23
        } else {
            cout << picture << endl; // Default color before line 23
        }
        i++; // Increment line counter
    }

    redDress.close();
    return 0;
}
