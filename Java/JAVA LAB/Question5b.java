import java.lang.*;

interface Vehicle{
    void setCapacity();
    void ac();
}

class Lorry implements Vehicle{
    public void setCapacity(){
        System.out.println("No of Seats 3");
    }
    public void ac(){
        System.out.println("No AC");
    }
}

class Car implements Vehicle{
    public void setCapacity(){
        System.out.println("No of Seats 6");
    }
    public void ac(){
        System.out.println("AC");
    }
}

abstract class Bus implements Vehicle{
    public void setCapacity(){
        System.out.println("No of Seats 3");
    }
    public abstract void ac();
}

class NonAc extends Bus{
    public void ac(){
        System.out.println("AC");
    }
}

class Question5b{
    public static void main(String arg[]){
        Vehicle l = new Lorry();
        l.setCapacity();
        l.ac();
        Vehicle c = new Car();
        c.setCapacity();
        c.ac();
        Vehicle b = new NonAc();
        b.setCapacity();
        b.ac();
    }
}