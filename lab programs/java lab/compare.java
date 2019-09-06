import java.util.*;
class Compare{
   public static void main(String args[]){
       Scanner s=new Scanner(System.in);
       String s1,s2;
       System.out.println("Enter 2 strings");
       s1=s.nextLine();
       s2=s.nextLine();
       if(s1.equalsIgnoreCase(s2))
           System.out.println("EQUAL STRINGS");
       else
           System.out.println("NOT EQUAL");
}
}
    