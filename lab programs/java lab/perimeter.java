import java.util.*;
class Perimeter{
   int side,len,br;
   double peri,rad;
   Perimeter(int a){
       side=a;
       peri=4*side;
       System.out.println("The perimeter of square is=  " + peri);
   }
   Perimeter(int b,int c){
       len=b;
       br=c;
       peri=2*(len+br);
       System.out.println("The perimeter of srectangle is=  " + peri);
   }
   Perimeter(double d){
       rad=d;
       peri=2*3.14*rad;
       System.out.println("The perimeter of circle is=  " + peri);
   }
}
class Run{
   public static void main(String args[]){
       Scanner s=new Scanner(System.in);
       int a,b,c;
       double d;
       System.out.println("Enter the side of square");
       a=s.nextInt();
       System.out.println("Enter the length and breadth");
       b=s.nextInt();
       c=s.nextInt();
       System.out.println("Enter the radius of circle");
       d=s.nextDouble();
       Perimeter p=new Perimeter(a);
       Perimeter p1=new Perimeter(b,c);
       Perimeter p2=new Perimeter(d);
   }
}
       
       
      