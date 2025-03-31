#include <iostream>
#include "Man/maleClothes.h"
#include "Woman/femaleClothes.h"
#include <map>

using namespace std;

int main() {
    bool continuePlaying = true;

    while (continuePlaying) {
        int characterChoice;

        // Display character selection menu
        cout << "\n=== Character Selection ===\n";
        cout << "1. Male Character\n";
        cout << "2. Female Character\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> characterChoice;

        if (characterChoice == 3) {
            cout << "Thank you for playing. Goodbye!\n";
            break;
        }

        switch (characterChoice) {
            case 1: {
                // Male character selected
                displayMaleModel();
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
                break;
            }
            case 2: {
                // Female character selected
                femaleClothes outfit; // Constructor will call displayFModel()

                // Ask user to choose between dress or blouse+pants
                int comboChoice;
                cout << "Select clothing style:\n";
                cout << "1. Dress\n";
                cout << "2. Blouse and Pants\n";
                cout << "Enter your choice (1-2): ";
                cin >> comboChoice;

                outfit.setCombo(comboChoice);

                if (comboChoice == 1) {
                    // Dress option
                    int dressChoice;
                    cout << "Select a dress style:\n";
                    cout << "1. Red Dress\n";
                    cout << "2. Tight Dress\n";
                    cout << "Enter your choice (1-2): ";
                    cin >> dressChoice;

                    outfit.setDress(dressChoice);
                }
                else if (comboChoice == 2) {
                    // Blouse and pants option
                    int blouseChoice, pantChoice;

                    cout << "Select a blouse:\n";
                    cout << "1. Casual Blouse\n";
                    cout << "2. Formal Blouse\n";
                    cout << "3. T-shirt\n";
                    cout << "4. Sweater\n";
                    cout << "Enter your choice (1-4): ";
                    cin >> blouseChoice;

                    cout << "Select pants:\n";
                    cout << "1. Jeans\n";
                    cout << "2. Dress Pants\n";
                    cout << "3. Skirt\n";
                    cout << "4. Shorts\n";
                    cout << "Enter your choice (1-4): ";
                    cin >> pantChoice;

                    outfit.setBlouse(blouseChoice);
                    outfit.setFPants(pantChoice); // Using the correct method name from the file
                }

                // Output the model with the selected clothing
                cout << outfit;
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        // Ask if the user wants to continue
        char continueChoice;
        cout << "\nWould you like to try another outfit? (y/n): ";
        cin >> continueChoice;

        if (tolower(continueChoice) != 'y') {
            cout << "Thank you for playing. Goodbye!\n";
            continuePlaying = false;
        }
    }

    return 0;
}