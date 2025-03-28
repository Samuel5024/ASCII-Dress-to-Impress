#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream pants("BlackJeans.txt");
    string blackJeans;
    
    while(getline(pants, blackJeans)) {
        cout << "\033[30m" << blackJeans << endl;
    }
    
    pants.close();
    return 0;
}