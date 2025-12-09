#include <iostream>

using namespace std;

int main() {
    int choice, n, i;
    long long sum, fact;

    while (true) {
        cout << "\n1. Sum of first N Natural Numbers";
        cout << "\n2. Factorial of N";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 3) {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "Enter value of N: ";
        cin >> n;

        switch (choice) {
            case 1:
                sum = 0;
                for (i = 1; i <= n; i++) {
                    sum += i;
                }
                cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
                break;

            case 2:
                fact = 1;
                if (n < 0) {
                    cout << "Error: Factorial of negative number does not exist." << endl;
                }
                else {
                    for (i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    cout << "Factorial of " << n << " is: " << fact << endl;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}