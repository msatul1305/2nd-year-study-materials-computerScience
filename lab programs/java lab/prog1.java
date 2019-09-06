import java.util.*;
class Circle{
    int radius;
    void c_input(int x){
       radius=x;
    }
    void c_area(){
       double area;
       area=3.14*radius*radius;
       System.out.println("Area of circle= " + area);

    }
}
class Run{
     public static void main(String args[]){
       Scanner s=new Scanner(System.in);
       Circle c=new Circle();
       int num;
       System.out.println("Enter the radius of circle");
       num=s.nextInt();
       c.c_input(num);
       c.c_area();
}}
       
    
           