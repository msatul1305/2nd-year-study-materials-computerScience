import java.util.*;
class Triangle{
    double a,b,c;
    double area;
    void getData(){
       Scanner s=new Scanner(System.in);
       System.out.println("Enter the sides of triangle");
       a=s.nextInt();
       b=s.nextInt();
       c=s.nextInt();
    }
    void triarea(){
       double semi=(a+b+c)/2;
       double k=(semi)*(semi-a)*(semi-b)*(semi-c);
       area=Math.sqrt(k);
       if(k<=0){
           System.out.println("Triangle cannot be formed");
       }
       else
       System.out.println("area of triangle= " + area);
    }
}
class Run{
     public static void main(String args[]){
     Triangle t=new Triangle();
     t.getData();
     t.triarea();
}}
       