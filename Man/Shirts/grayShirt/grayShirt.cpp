#include <iostream>
#include <fstream>
#include "grayShirt.h"
using namespace std;

void displayGrayPattern()
{
    ifstream test("shirt.txt");
    string holder;
    for(int i = 0; i < 48; i++) {
        getline(test, holder);
        cout << "\033[90m" << holder << endl;
    }
    test.close();
}