#ifndef FPANTS_H
#define FPANTS_H
#include <string>
#include <iostream>
#include <map>
#include "leggings/leggings.h"
#include "jeanShorts/jeanShorts.h"
#include "blackJeans/blackJeans.h"
using namespace std;

const map<int, string> fPantOptions = {
    {1, "Black Jeans"},
    {2, "Jean Shorts"},
    {3, "Leggings"}
};

class fPants {
private:
    int fPantOption;  // Stores the shirt option

public:
    explicit fPants(int option = 0) : fPantOption(option) {};  // Constructor
    void getFPant() const;  // Function to display selected shirt
    void setFPant(int option);  // Function to set shirt option
};
#endif //FPANTS_H
