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
    baseCharacter(const string& fileName = "game.txt") : outputFileName(fileName) {}

    // Pure virtual function to ensure derived classes implement printToFile
    virtual bool printToFile() const = 0;

    // Virtual destructor for proper cleanup in inheritance hierarchy
    virtual ~baseCharacter() = default;

    // Set output file name
    void setOutputFileName(const string& fileName) {
        outputFileName = fileName;
    }

    // Get output file name
    string getOutputFileName() const {
        return outputFileName;
    }
};

#endif // BASECHARACTER_H
