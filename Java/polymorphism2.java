// Superclass
class Animal {
    void makeSound() {
        System.out.println("Some generic sound");
    }
}

// Subclass
class Dog extends Animal {
    void makeSound() {
        System.out.println("Woof! Woof!");
    }
}

// Subclass
class Cat extends Animal {
    void makeSound() {
        System.out.println("Meow!");
    }
}

public class polymorphism2 {
    public static void main(String[] args) {
        Animal animal1 = new Dog();
        Animal animal2 = new Cat();

        animal1.makeSound();
        animal2.makeSound();
    }
}