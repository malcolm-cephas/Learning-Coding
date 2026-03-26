
abstract class Shape {
    int dim1, dim2;
    Shape(int d1, int d2) { this.dim1 = d1; this.dim2 = d2; }
    abstract void printArea();
}

class Rectangle extends Shape {
    Rectangle(int w, int h) { super(w, h); }
    void printArea() { System.out.println("Rectangle Area: " + (dim1 * dim2)); }
}

class Triangle extends Shape {
    Triangle(int b, int h) { super(b, h); }
    void printArea() { System.out.println("Triangle Area: " + (0.5 * dim1 * dim2)); }
}

class Circle extends Shape {
    Circle(int r) { super(r, 0); }
    void printArea() { System.out.println("Circle Area: " + (Math.PI * dim1 * dim1)); }
}

public class ShapesArea {
    public static void main(String[] args) {
        Rectangle r = new Rectangle(10, 20); r.printArea();
        Triangle t = new Triangle(15, 25); t.printArea();
        Circle c = new Circle(10); c.printArea();
    }
}
