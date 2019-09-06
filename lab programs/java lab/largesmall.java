import java.util.*;
class LS{
     public static void main(String args[]){
       Scanner s=new Scanner(System.in);
       int num,max,min;
       System.out.println("Enter how many number integer you want in the array");
       num=s.nextInt();
       int [] arr= new int[num];
       System.out.println("Enter the numbers");
       for(int i=0;i<num;i++){
           arr[i]=s.nextInt();
        }
       max=arr[0];
       min=arr[0];
       for(int j=0;j<num;j++){
           if(arr[j]>=max)
              max=arr[j];
           if(arr[j]<min)
              min=arr[j];
        }
        System.out.println("Largest=" + max + "," + "Smallest=" + min);
}}
        
            
             