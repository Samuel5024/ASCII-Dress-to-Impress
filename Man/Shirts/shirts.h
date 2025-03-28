#ifndef SHIRTS_H
#define SHIRTS_H
#include <string>
#include <iostream>
#include <map>
#include "buttonDown/buttonDown.h"
#include "checkerboard/checkerboard.h"
#include "grayShirt/grayShirt.h"
#include "strippedShirt/strippedShirt.h"
#include "tanktopShirt/tanktop.h"
using namespace std;

const map<int, string> shirtOptions = {
    {1, "Button Down"},
    {2, "Checkerboard Pattern"},
    {3, "Plain Gray Shirt"},
    {4, "Stripped Pattern"},
    {5, "Tank Top"},
};

class shirts {
private:
    int shirtOption;
public:
    explicit shirts(int option = 0) : shirtOption(option) {};
    void getShirt() const;
    void setShirtOption(int option) {
        shirtOption = option;
    }
};
#endif //SHIRTS_H
