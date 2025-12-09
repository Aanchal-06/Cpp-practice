#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[3];
    
    cout << "--- ENTER DETAILS FOR 3 STUDENTS ---" << endl;
    for(int i=0; i<3; i++) {
        cout << "\nStudent " << i+1 << ":" << endl;
        s[i].getDetails();
    }

    cout << "\n--- STUDENT RECORDS ---" << endl;
    for(int i=0; i<3; i++) {
        s[i].displayDetails();
    }

    return 0;
}