#include <iostream>
#include "Man/maleClothes.h"
#include "Woman/femaleClothes.h"
#include <limits>

using namespace std;

// Custom exception classes
class invalidChoiceException : public exception {
public:
    const char* what() const throw() {
        return "Invalid choice entered. Please enter a valid option.";
    }
};

class fileOpenException : public exception {
public:
    const char* what() const throw() {
        return "Error opening required file. Please check that all model files exist.";
    }
};

int getValidInput(int min, int max) {
    int choice;
    cin >> choice;

    if (cin.fail() || choice < min || choice > max) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw invalidChoiceException();
    }

    return choice;
}

int main() {
    bool continuePlaying = true;

    while (continuePlaying) {
        int characterChoice;

        try {
            // Display character selection menu
            cout << "\n=== Character Selection ===\n";
            cout << "1. Male Character\n";
            cout << "2. Female Character\n";
            cout << "3. Exit\n";
            cout << "Enter your choice (1-3): ";

            characterChoice = getValidInput(1, 3);

            if (characterChoice == 3) {
                cout << "Thank you for playing. Goodbye!\n";
                break;
            }

            switch (characterChoice) {
                case 1: {
                    // Male character selected
                    try {
                        displayMaleModel();
                    } catch (...) {
                        throw fileOpenException();
                    }

                    int shirtChoice, pantChoice;

                    // Display options for shirts
                    cout << "Select a shirt:\n";
                    cout << "1. Button Down\n";
                    cout << "2. Checkerboard Pattern\n";
                    cout << "3. Plain Gray Shirt\n";
                    cout << "4. Stripped Pattern\n";
                    cout << "Enter your choice (1-4): ";

                    try {
                        shirtChoice = getValidInput(1, 4);
                    } catch (const invalidChoiceException& e) {
                        cout << e.what() << " Using default shirt (1)." << endl;
                        shirtChoice = 1;
                    }

                    // Display options for pants
                    cout << "Select pants:\n";
                    cout << "1. Cargo Pants\n";
                    cout << "2. Dress Pants\n";
                    cout << "3. Jeans\n";
                    cout << "4. Khakis\n";
                    cout << "Enter your choice (1-4): ";

                    try {
                        pantChoice = getValidInput(1, 4);
                    } catch (const invalidChoiceException& e) {
                        cout << e.what() << " Using default pants (1)." << endl;
                        pantChoice = 1;
                    }

                    // Create a maleClothes object and set the shirt and pants
                    try {
                        maleClothes outfit;
                        outfit.setShirt(shirtChoice);
                        outfit.setPants(pantChoice);

                        // Output the model with the selected shirt and pants
                        cout << outfit;
                    } catch (const exception& e) {
                        cout << "Error creating outfit: " << e.what() << endl;
                    }
                    break;
                }
                case 2: {
                    // Female character selected
                    try {
                        femaleClothes outfit; // Constructor will call displayFModel()

                        // Ask user to choose between dress or blouse+pants
                        int comboChoice;
                        cout << "Select clothing style:\n";
                        cout << "1. Dress\n";
                        cout << "2. Blouse and Pants\n";
                        cout << "Enter your choice (1-2): ";

                        try {
                            comboChoice = getValidInput(1, 2);
                        } catch (const invalidChoiceException& e) {
                            cout << e.what() << " Using default style (1)." << endl;
                            comboChoice = 1;
                        }

                        outfit.setCombo(comboChoice);

                        if (comboChoice == 1) {
                            // Dress option
                            int dressChoice;
                            cout << "Select a dress style:\n";
                            cout << "1. Red Dress\n";
                            cout << "2. Tight Dress\n";
                            cout << "Enter your choice (1-2): ";

                            try {
                                dressChoice = getValidInput(1, 4);
                            } catch (const invalidChoiceException& e) {
                                cout << e.what() << " Using default dress (1)." << endl;
                                dressChoice = 1;
                            }

                            outfit.setDress(dressChoice);
                        }
                        else if (comboChoice == 2) {
                            // Blouse and pants option
                            int blouseChoice, pantChoice;

                            cout << "Select a blouse:\n";
                            cout << "1. Pink Blouse\n";
                            cout << "2. Blue Blouse\n";
                            cout << "Enter your choice (1-2): ";

                            try {
                                blouseChoice = getValidInput(1, 4);
                            } catch (const invalidChoiceException& e) {
                                cout << e.what() << " Using default blouse (1)." << endl;
                                blouseChoice = 1;
                            }

                            cout << "Select pants:\n";
                            cout << "1. Black Jeans\n";
                            cout << "2. Jean Shorts\n";
                            cout << "3. Leggings\n";
                            cout << "Enter your choice (1-3): ";

                            try {
                                pantChoice = getValidInput(1, 4);
                            } catch (const invalidChoiceException& e) {
                                cout << e.what() << " Using default pants (1)." << endl;
                                pantChoice = 1;
                            }

                            outfit.setBlouse(blouseChoice);
                            outfit.setFPants(pantChoice); // Using the correct method name from the file
                        }

                        // Output the model with the selected clothing
                        cout << outfit;
                    } catch (const fileOpenException& e) {
                        cout << e.what() << endl;
                    } catch (const exception& e) {
                        cout << "Error creating female outfit: " << e.what() << endl;
                    }
                    break;
                }
                default:
                    throw invalidChoiceException();
            }

            // Ask if the user wants to continue
            char continueChoice;
            cout << "\nWould you like to try another outfit? (y/n): ";
            cin >> continueChoice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalidChoiceException();
            }

            if (tolower(continueChoice) != 'y') {
                cout << "Thank you for playing. Goodbye!\n";
                continuePlaying = false;
            }

        } catch (const invalidChoiceException& e) {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } catch (const fileOpenException& e) {
            cout << e.what() << endl;
            cout << "The program will now exit." << endl;
            return 1;
        } catch (const exception& e) {
            cout << "An unexpected error occurred: " << e.what() << endl;
            cout << "The program will now exit." << endl;
            return 1;
        }
    }

    return 0;
}