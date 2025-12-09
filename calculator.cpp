#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "--- SIMPLE C++ CALCULATOR ---" << endl;

    while (true) {
        cout << "\nEnter operator (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if (op == 'q') {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "Enter two numbers:\n ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;

            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed!" << endl;
                break;

            default:
                cout << "Error: Invalid operator!" << endl;
                break;
        }
    }

    return 0;
}