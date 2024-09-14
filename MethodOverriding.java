class Animal {
    void sound() {
    System.out.println("Animal makes a sound");
    }
    }
    class Dog extends Animal {
    void sound() {
    System.out.println("Dog barks");
    }
    }
    public class MethodOverriding {
    public static void main(String[] args) {
    Animal a = new Dog(); // Upcasting
    a.sound(); // Calls Dog's sound method due to run-time polymorphism
    }}