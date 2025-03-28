#ifndef femaleClothes_H
#define femaleClothes_H
#include <string>
using namespace std;

class femaleClothes {
  private:
    string dress;
    string pants;
    string shirt;
  public:
    femaleClothes();

    void setDress(const string &dress);
    void setPants(const string &pants);
    void setShirt(const string &shirt);

    string getDress() const;
    string getPants() const;
    string getShirt() const;

    void displayOutfit() const;
};

#endif //femaleClothes_H
