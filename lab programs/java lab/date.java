import java.util.*;
class Date{
    String date1,date2;
    void input(){
      Scanner s=new Scanner(System.in);
      System.out.println("Enter 2 dates: in dd-mm-yyyy");
      date1=s.next();
      date2=s.next();
     }
     void Compare(){
       if (date1.compareTo(date2) > 0) {
            System.out.println("Date1 is after Date2");
        } 
       else if (date1.compareTo(date2) < 0) {
            System.out.println("Date1 is before Date2");
        } 
       else if (date1.compareTo(date2) == 0) {
            System.out.println("Date1 is equal to Date2");
        } 
       else {
            System.out.println("I don't know");
        }
     }
}
class Run{
  public static void main(String args[]){
     Date d=new Date();
     d.input();
     d.Compare();
}}