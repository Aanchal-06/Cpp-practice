#include <iostream>
using namespace std;

int main() {
    int choice, n;
    
    while (true) {
        cout << "\n--- STAR PATTERN GENERATOR ---" << endl;
        cout << "1. Right Half Pyramid" << endl;
        cout << "2. Left Half Pyramid" << endl;
        cout << "3. Triangle (Full Pyramid)" << endl;
        cout << "4. Inverted Pyramid" << endl;
        cout << "5. Full Diamond" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "Enter number of rows (n): ";
        cin >> n;
        cout << endl;

        switch (choice) {
            // 1. Right Half Pyramid
            case 1:
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            // 2. Left Half Pyramid
            case 2:
                for (int i = 1; i <= n; i++) {
                    // Print Spaces first
                    for (int j = 1; j <= n - i; j++) {
                        cout << "  "; // 2 spaces for alignment
                    }
                    // Print Stars
                    for (int k = 1; k <= i; k++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            // 3. Triangle (Equilateral Pyramid)
            case 3:
                for (int i = 1; i <= n; i++) {
                    // Spaces
                    for (int j = 1; j <= n - i; j++) {
                        cout << " "; // Single space
                    }
                    // Stars
                    for (int k = 1; k <= i; k++) {
                        cout << "* "; // Star + Space
                    }
                    cout << endl;
                }
                break;

            // 4. Inverted Pyramid
            case 4:
                for (int i = n; i >= 1; i--) {
                    // Spaces
                    for (int j = 1; j <= n - i; j++) {
                        cout << " ";
                    }
                    // Stars
                    for (int k = 1; k <= i; k++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            // 5. Full Diamond (Triangle + Inverted)
            case 5:
                // Upper half
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n - i; j++) cout << " ";
                    for (int k = 1; k <= i; k++) cout << "* ";
                    cout << endl;
                }
                // Lower half (start from n-1 to avoid double middle row)
                for (int i = n - 1; i >= 1; i--) {
                    for (int j = 1; j <= n - i; j++) cout << " ";
                    for (int k = 1; k <= i; k++) cout << "* ";
                    cout << endl;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}