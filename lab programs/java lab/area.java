import java.util.*;
class Area{
   int len,br;
   double a,b,c;
   double area;
   Area(int b,int c){
       len=b;
       br=c;
       area=len*br;
       System.out.println("The area of srectangle is=  " + area);
   }
   Area(double x,double y,double z){
       a=x;b=y;c=z;
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
       Scanner s=new Scanner(System.in);
       double a,b,c;
       int h,j;
       System.out.println("Enter the sides of triangle");
       a=s.nextDouble();
       b=s.nextDouble();
       c=s.nextDouble();
       System.out.println("Enter the length and breadth");
       h=s.nextInt();
       j=s.nextInt();
       Area p=new Area(a,b,c);
       Area p1=new Area(h,j);
   }
}
       
       
      