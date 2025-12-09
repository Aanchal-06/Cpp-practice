#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, elem, pos, choice;

    cout << "Enter initial number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i = 0; i < n; i++) cin >> arr[i];

    while(true) {
        cout << "\n1. Insert at Position\n2. Delete at Position\n3. Display\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice == 4) break;

        switch(choice) {
            case 1:
                cout << "Enter element and position (0 to " << n << "): ";
                cin >> elem >> pos;
                for(i = n; i > pos; i--) arr[i] = arr[i-1]; // Shift Right
                arr[pos] = elem;
                n++;
                cout << "Inserted.\n";
                break;
            case 2:
                cout << "Enter position to delete (0 to " << n-1 << "): ";
                cin >> pos;
                for(i = pos; i < n-1; i++) arr[i] = arr[i+1]; // Shift Left
                n--;
                cout << "Deleted.\n";
                break;
            case 3:
                cout << "Array: ";
                for(i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;
        }
    }
    return 0;
}