#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream model("man.txt");
    string man;
    for (int i = 0; i < 134; i++) {
        getline(model, man);
        cout << man << endl;
    }
    model.close();
    return 0;
}