#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream pants("leggings.txt");
    string leggings;
    
    while(getline(pants, leggings)) {
        cout << "\033[31m" << leggings << endl;
    }
    pants.close();
    return 0;
}