#ifndef PANTS_H
#define PANTS_H
#include <string>
#include <iostream>
#include <map>
#include "cargo/cargo.h"
#include "dress/dress.h"
#include "jeans/jeans.h"
#include "khakis/khakis.h"
#include "shorts/shorts.h"
using namespace std;

const map<int, string> pantsOptions = {
    {1, "Cargo Pants"},
    {2, "Dress"},
    {3, "Jeans"},
    {4, "Khakis"},
    {5, "Shorts"},
};

class pants {
private:
    int pantsOption;
public:
    pants(int option = 0) : pantsOption(option) {};
    void getPants() const;
    void setPantsOption(int option) {
        pantsOption = option;
    }
};
#endif //PANTS_H
