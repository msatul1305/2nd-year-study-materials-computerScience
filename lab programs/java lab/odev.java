import java.util.*;
class Odev{
   public static void main(String args[]){
       Scanner s=new Scanner(System.in);
       int num;
       System.out.println("Enter how many number integer you want in the array");
       num=s.nextInt();
       int [] arr= new int[num];
       System.out.println("Enter the numbers");
       for(int i=0;i<num;i++){
           arr[i]=s.nextInt();
        }
       for(int i=0;i<num;i++){
           if(arr[i]%2==0)
              System.out.println("EVEN");
           else if(arr[i]%2!=0)
              System.out.println("ODD");
           else
              System.out.println("INVALID INPUT");
        }
     }
}
        
       
     