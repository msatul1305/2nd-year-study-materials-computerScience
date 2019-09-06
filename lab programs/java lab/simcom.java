import java.util.*;
class Interest{
    int yr;
    double p,rate,amt;
    void simple(){
       Scanner s=new Scanner(System.in);
       System.out.println("Enter the principal amount");
       p=s.nextInt();
       System.out.println("Enter the duration");
       yr=s.nextInt();
       System.out.println("Enter the rate of interest");
       rate=s.nextInt();
       amt=p+(p*yr*rate)/100;
       System.out.println("Simple Interest Amount after " + yr + " years =" + amt);
    }
    void compound(){
        amt=p*Math.pow((1+(rate/100)),yr);
        System.out.println("Compound Interest Amount after " + yr + " years =" + amt);
    }
}
class Run{
     public static void main(String args[]){
        Interest i=new Interest();
        i.simple();
        i.compound();
}
}        
        