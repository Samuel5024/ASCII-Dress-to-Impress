#ifndef SHIRTS_H
#define SHIRTS_H
#include <string>
#include <iostream>
#include <map>
#include "buttonDown/buttonDown.h"
#include "checkerboard/checkerboard.h"
#include "grayShirt/grayShirt.h"
#include "strippedShirt/strippedShirt.h"
using namespace std;

const map<int, string> shirtOptions = {
    {1, "Button Down"},
    {2, "Checkerboard Pattern"},
    {3, "Plain Gray Shirt"},
    {4, "Stripped Pattern"},
};

class mShirts {
private:
    int shirtOption;  // Stores the shirt option

public:
    explicit mShirts(int option = 0) : shirtOption(option) {};  // Constructor
    void getShirt() const;  // Function to display selected shirt
    void setShirt(int option);  // Function to set shirt option
};

#endif // SHIRTS_H
