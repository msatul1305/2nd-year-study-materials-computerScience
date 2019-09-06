import java.util.*;
class Largest{
   int num1,num2,num3;
   void Largest(int a,int b,int c){
       num1=a;
       num2=b;
       num3=c;
       if(num1>num2 && num1>num3)
         System.out.println(num1 + "  is largest of 3 numbers");
       else if(num2>num1 && num2>num3)
         System.out.println(num2 + "  is largest of 3 numbers");
       else
         System.out.println(num3 + "  is largest of 3 numbers");
}
}
class Run{
   public static void main(String args[]){
    Scanner s=new Scanner(System.in);
    int x,y,z;
    System.out.println("Enter 3 numbers");
    x=s.nextInt();
    y=s.nextInt();
    z=s.nextInt();
    Largest l=new Largest(x,y,z);
}}
