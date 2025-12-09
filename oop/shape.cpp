#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Calculating Area..." << endl;
    }
};

class Rectangle : public Shape {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    void area() override {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int r) : radius(r) {}

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* s;
    Rectangle rect(10, 5);
    Circle circ(7);

    s = &rect;
    s->area(); 

    s = &circ;
    s->area();

    return 0;
}