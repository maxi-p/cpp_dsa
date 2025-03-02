#include <iostream>
using std::cout;
using std::endl;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

int main() {
    Shape* shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
    }

    delete shapes[0];
    delete shapes[1];

    return 0;
}
