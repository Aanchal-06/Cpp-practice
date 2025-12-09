#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
};

class Student : public Person {
protected:
    int rollNo;
public:
    void setRoll(int r) {
        rollNo = r;
    }
};

class Topper : public Student {
private:
    float percentage;
public:
    void setPercentage(float p) {
        percentage = p;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Status: Topper" << endl;
    }
};

int main() {
    Topper t;
    t.setName("Aanchal");
    t.setRoll(101);
    t.setPercentage(98.5);
    t.displayDetails();

    return 0;
}