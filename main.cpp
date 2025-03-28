#include <iostream>
#include "Man/MaleClothes.h"
#include "Woman/femaleClothes.h"
#include <map>

using namespace std;

int main() {
    int shirtChoice, pantChoice;

    // Display options for shirts
    cout << "Select a shirt:\n";
    cout << "1. Button Down\n";
    cout << "2. Checkerboard Pattern\n";
    cout << "3. Plain Gray Shirt\n";
    cout << "4. Stripped Pattern\n";
    cout << "Enter your choice (1-4): ";
    cin >> shirtChoice;

    // Display options for pants
    cout << "Select pants:\n";
    cout << "1. Cargo Pants\n";
    cout << "2. Dress Pants\n";
    cout << "3. Jeans\n";
    cout << "4. Khakis\n";
    cout << "Enter your choice (1-4): ";
    cin >> pantChoice;

    // Create a maleClothes object and set the shirt and pants
    maleClothes outfit;
    outfit.setShirt(shirtChoice);
    outfit.setPants(pantChoice);

    // Output the model with the selected shirt and pants
    cout << outfit;

    return 0;
}
