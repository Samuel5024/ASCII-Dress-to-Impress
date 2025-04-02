#ifndef BASECHARACTER_H
#define BASECHARACTER_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class baseCharacter {
protected:
    string outputFileName;

public:
    baseCharacter() {};

    // Virtual destructor for proper cleanup in inheritance hierarchy
    virtual ~baseCharacter() = default;

};

#endif // BASECHARACTER_H
