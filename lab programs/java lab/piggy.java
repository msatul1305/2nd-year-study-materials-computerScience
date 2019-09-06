import java.util.*;
class Addamt{
      int amt=50,xtra;
      Addamt(){System.out.println("no amt is added and total money in piggy bank is= " + amt);}
      Addamt(int x){
         xtra=x;
         System.out.println("total money in piggy bank before addition of amount is= " + amt);
         amt=amt+xtra;
         System.out.println("total money in piggy bank after addition of " + xtra + " amount is= " + amt);
      }
 }
class Run{
     public static void main(String args[]){
           Scanner s=new Scanner(System.in);
           int n;
           Addamt a1=new Addamt();
           System.out.println("Enter the xtra amount to be added");
           n=s.nextInt();
           Addamt a2=new Addamt(n);
   }
}
            