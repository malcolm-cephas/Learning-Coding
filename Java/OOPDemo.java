/**
 * Aim: 2. Demonstrate OOP principles (Encapsulation, Inheritance, Polymorphism, Abstraction).
 */
// Abstraction
abstract class Animal {
    // Encapsulation: Private field and public accessors
    private String name;
    public Animal(String name) { this.name = name; }
    public String getName() { return name; }
    
    public abstract void makeSound(); // Abstract method
}

// Inheritance
class Dog extends Animal {
    public Dog(String name) { super(name); }
    
    // Polymorphism: Method overriding
    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Woof!");
    }
}

public class OOPDemo {
    public static void main(String[] args) {
        Animal myDog = new Dog("Buddy");
        myDog.makeSound(); // Polymorphic call
    }
}
