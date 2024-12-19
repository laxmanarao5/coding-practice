import java.lang.*;

public class Question8a{
    public static void main(String args[]){
        Product[] obj = new Product[3];
        obj[0] = new Product(23907,"Dell Laptop");
        obj[1] = new Product(91240,"HP 630");
        obj[2] = new Product(29823,"LG");
        System.out.println("Product object data");
        obj[0].display();
        obj[1].display();
        obj[2].display();
    }
}
class Product{
    int prod_id;
    String prod_name;
    Product(int pid, String n){
        prod_id = pid;
        prod_name = n;
    }
    public void display(){
        System.out.println("Product id = "+prod_id+" Product name = "+prod_name);
    }
}