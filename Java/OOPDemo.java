

abstract class Animal {

    private String name;
    public Animal(String name) { this.name = name; }
    public String getName() { return name; }

    public abstract void makeSound();
}


class Dog extends Animal {
    public Dog(String name) { super(name); }


    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Woof!");
    }
}

public class OOPDemo {
    public static void main(String[] args) {
        Animal myDog = new Dog("Buddy");
        myDog.makeSound();
    }
}
