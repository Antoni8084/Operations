#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Display the menu
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Perform operations based on user choice
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 2:
                    result = subtract(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 3:
                    result = multiply(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        result = divide(num1, num2);
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Error: Division by zero is not allowed!" << endl;
                    }
                    break;
            }
        } else if (choice == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}

// Function definitions
void displayMenu() {
    cout << "                                 =======================" << endl;
    cout << "                                   SIMPLE CSLCULATOR  " << endl;
    cout << "                                 =======================" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "=======================" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}