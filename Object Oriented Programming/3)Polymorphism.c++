#include<bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Animal makes a generic sound." <<"\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Dog barks: Woof woof!" << "\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Cat meows: Meow meow!" << "\n";
    }
};

class Bird : public Animal {
public:
    void makeSound() const override {
        cout << "Bird chirps: Chirp chirp!" << "\n";
    }
};

int main() {
    Animal* animals[] = { new Dog(), new Cat(), new Bird() };

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}
