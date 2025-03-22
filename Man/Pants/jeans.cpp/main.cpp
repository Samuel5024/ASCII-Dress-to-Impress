#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream pants("jeans.txt");
    string jeans;
    for(int i = 0; i < 66; i++) {
        getline(pants, jeans);
        cout << "\033[96m" << jeans << endl;
    }
    pants.close();

    return 0;
}