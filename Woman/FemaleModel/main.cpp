#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream female("female.txt");
    string model;
    for(int i = 0; i < 144; i++){
        getline(female, model);
        cout << model << endl;
    }
    
    female.close();
    return 0;
}