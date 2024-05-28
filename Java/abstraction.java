abstract class Shape {
    // Abstract method that has no implementation
    public abstract double calculateArea();

    // Concrete method with implementation
    public void display() {
        System.out.println("This is a shape.");
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

class Square extends Shape {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    public double calculateArea() {
        return side * side;
    }
}

public class abstraction {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        System.out.println("Area of the circle: " + circle.calculateArea());
        circle.display();

        Square square = new Square(4.0);
        System.out.println("Area of the square: " + square.calculateArea());
        square.display();
    }
}
