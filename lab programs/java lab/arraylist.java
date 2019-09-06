import java.util.*;
class Arrlist{
      public static void main(String args[]){
          Scanner s=new Scanner(System.in);
          String str;
          System.out.println("Enter a string");
          str=s.nextLine();
          char[] arr=new char[str.length()];
          for(int i=0;i<str.length();i++){
               arr[i]=str.charAt(i);
          }
          for(int i=0;i<str.length();i++){
               System.out.println(arr[i]);
          }
}
}
          