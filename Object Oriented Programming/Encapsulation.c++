#include<bits/stdc++.h>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double speed;

public:
    Car(const string& const carMake,const string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear), speed(0.0) {}

    void accelerate(double amount) {
        speed += amount;
    }

    void brake(double amount) {
        if (speed >= amount)
            speed -= amount;
        else
            speed = 0.0;
    }

    double getSpeed() const {
        return speed;
    }

    void displayInfo() const {
        cout << "Car: " << year << " " << make << " " << model << "\n";
        cout << "Current Speed: " << speed << " mph" <<"\n";
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022);

    myCar.displayInfo();
    myCar.accelerate(30.0);
    myCar.displayInfo();
    myCar.brake(15.0);
    myCar.displayInfo();

    return 0;
}
//Encapsulation - The primary purpose of encapsulation is 
//to hide the internal details of an object and 
//provide a well-defined interface for interacting with it.

//1)Data Hiding - the internal state and implementation details of an object
//2)Access modifiers
//3)Information Hiding


//Benefits - 
//1)Improved Security
//2)Code Maintainability
//3)Code Organization
//4)Reduced Complexity