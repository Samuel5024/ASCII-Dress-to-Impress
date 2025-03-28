#ifndef DRESSES_H
#define DRESSES_H
#include "redDress/redDress.h"
#include "tightDress/tightDress.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;

const map<int, string> dressOptions = {
    {1, "Red Dress"},
    {2, "Tight Dress"},
};

class dresses{
private:
    int dressesOption;  // Stores the dress option

public:
    explicit dresses(int option = 0) : dressesOption(option) {};  // Default constructor
    void getDress() const;  // Function to display selected dress
    void setDress(int option);  // Function to set dress option
};



#endif //DRESSES_H
