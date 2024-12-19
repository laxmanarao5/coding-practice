import java.lang.*;

class Figure{
    double dim1;
    double dim2;
    Figure(double a, double b){
        dim1 = a;
        dim2 = b;
    }
    double area(){
        System.out.println("Area of Fofure Undefined");
        return 0;
    }
}

class Rectangle extends Figure{
    Rectangle(double a, double b){
        super(a,b);
    }
    double area(){
        System.out.println("Area of Rectangle");
        return dim1*dim2;
    }
}

class Triangle extends Figure{
    Triangle(double a, double b){
        super(a,b);
    }
    double area(){
        System.out.println("Area of Triangle");
        return dim1*dim2;
    }
}

class Question4b{
    public static void main(String arg[]){
        System.out.println("Main Method Invoked");
        Figure f;
        f = new Rectangle(9,5);
        System.out.println(f.area());
        f = new Triangle(10,8);
        System.out.println(f.area());
    }
}

