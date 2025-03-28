#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream shirt("shirt.txt");
    string grayShirt;
    while(getline(shirt, grayShirt)){
        cout << "\033[90m" << grayShirt << endl;
    }
    shirt.close();

    return 0;
}