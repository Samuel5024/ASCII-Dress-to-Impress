#ifndef PANTS_H
#define PANTS_H
#include <string>
#include <iostream>
#include <map>
#include "cargo/cargo.h"
#include "dress/dress.h"
#include "jeans/jeans.h"
#include "khakis/khakis.h"
using namespace std;

const map<int, string> pantsOptions = {
    {1, "Cargo Pants"},
    {2, "Dress Pants"},
    {3, "Jeans"},
    {4, "Khakis"},
};

class mPants {
private:
    int pantsOption;  // Stores the pants option

public:
    explicit mPants(int option = 0) : pantsOption(option) {};  // Default constructor
    void getPants() const;  // Function to display selected pants
    void setPants(int option);  // Function to set pants option
};

#endif // PANTS_H
