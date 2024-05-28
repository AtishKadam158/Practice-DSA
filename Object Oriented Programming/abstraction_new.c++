#include <bits/stdc++.h>
using namespace std;
//Drawable is abstract class
//Abstract class - class that cannot be instantiated directly 
//and serves as a blueprint for other classes. 
//It contains at least one pure virtual function, 
//which makes the class abstract.
class Drawable {
public:
    virtual void draw() = 0;
    virtual void setColor(int r, int g, int b) = 0;
};

//Abstract interface
//An interface is a special case of an abstract class in C++. 
//It is a class containing only pure virtual functions 
//and no member variables or non-virtual functions. 

class Circle : public Drawable {
public:
    void draw() override {
        cout << "Drawing a Circle." << std::endl;
    }
    void setColor(int r, int g, int b) override {
        cout << "Setting Circle color: R=" << r << " G=" << g << " B=" << b << std::endl;
    }
};

class Rectangle : public Drawable {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << std::endl;
    }
    void setColor(int r, int g, int b) override {
        cout << "Setting Rectangle color: R=" << r << " G=" << g << " B=" << b << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.draw();
    circle.setColor(255, 0, 0); // Setting Circle color to red (R=255, G=0, B=0)

    rectangle.draw();
    rectangle.setColor(0, 0, 255); // Setting Rectangle color to blue (R=0, G=0, B=255)

    return 0;
}
