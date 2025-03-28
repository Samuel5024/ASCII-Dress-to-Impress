#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream dress("tightDress.txt");
    string tightdress;
    
    while(getline(dress, tightdress)) {
        cout << "\033[36m" << tightdress << endl;
    }
    
    dress.close();
    return 0;
}