#ifndef maleClothes_H
#define maleClothes_H
#include <string>
#include <iostream>
#include <map>
#include "Pants/pants.h"
#include "Shirts/shirts.h"
using namespace std;

class maleClothes{
  private:
    shirts myShirt;
    pants myPant;
    int shirtOption;
    int pantOption;
  public:
    maleClothes();
    void setShirt(int option);
    void setPants(int option);
    friend ostream& operator<<(ostream& os, const maleClothes& obj);
    ~maleClothes();
};

#endif //maleClothes_H
