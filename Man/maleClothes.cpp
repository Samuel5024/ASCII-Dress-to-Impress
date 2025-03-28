#include "maleClothes.h"
using namespace std;

maleClothes::maleClothes() {
  ifstream model("MaleModel/man.txt");
  string man;
  for (int i = 0; i < 134; i++) {
    getline(model, man);
    cout << man << endl;
  }
  model.close();
}

void maleClothes::setShirt(int option){
  this->shirtOption = option;
}
void maleClothes::setPants(int option){
  this->pantOption = option;
}

ostream& operator<<(ostream& os, const maleClothes& obj) {
  ifstream model("MaleModel/man.txt");
  string line;
  int lineCount = 0;

  if(!model) {
    os << "Error: Could not open male model file.\n";
    return os;
  }
  while (lineCount < 21 && getline(model, line)) {
    os << line << endl;
    lineCount++;
  }
  obj.myShirt.getShirt();
  obj.myPant.getPants();

  while(getline(model,line)) {
    os << line << endl;
  }

  model.close();
  return os;
}