import java.util.*;
class Largest{
         int num1,num2;
         void Lar(){
         Random n=new Random();
         num1=n.nextInt(6);
         num2=n.nextInt(50);
}
         void compare(){
         Lar();
         if(num1>num2)
            System.out.println(num1 + " is greater than " + num2);
         else
            System.out.println(num2 + " is greater than " + num1);  
}
}
class Run{
   public static void main(String args[]){
         
         Largest l=new Largest();
         l.compare();
}}