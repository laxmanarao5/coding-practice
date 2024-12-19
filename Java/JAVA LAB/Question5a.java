import java.lang.*;

abstract class Animal{
    public abstract void sound();
}

class Dog extends Animal{
    public void sound(){
        System.out.println("Dog Sounds");
    }
}

class Cat extends Animal{
    public void sound(){
        System.out.println("Cat Sounds");
    }
}

class Question5a{
    public static void main(String arg[]){
        System.out.println("Main method called");
        Animal a;
        a = new Dog();
        a.sound();
        a = new Cat();
        a.sound();
    }
}