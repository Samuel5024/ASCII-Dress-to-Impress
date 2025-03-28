#ifndef BLOUSE_H
#define BLOUSE_H
#include <string>
#include <iostream>
#include <map>
#include "pinkBlouse/pinkBlouse.h"
#include "blueBlouse/blueBlouse.h"
using namespace std;

const map<int, string> blouseOptions = {
    {1, "Pink Blouse"},
    {2, "Blue Blouse"}
};

class blouse {
private:
    int blouseOption;  // Stores the shirt option

public:
    explicit blouse(int option = 0) : blouseOption(option) {};  // Constructor
    void getBlouse() const;  // Function to display selected shirt
    void setBlouse(int option);  // Function to set shirt option
};
#endif //BLOUSE_H
