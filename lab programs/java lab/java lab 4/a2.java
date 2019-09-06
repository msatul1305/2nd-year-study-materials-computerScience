import java.util.*;
import java.lang.*;
public class a2
{
public static void main(String args[])
	{
double a,b,c;
	area a1=new area();
double ar;
Scanner in=new Scanner(System.in);
a=in.nextDouble();
b=in.nextDouble();
c=in.nextDouble();
ar=a1.are(a,b,c);
System.out.println("area is"+ar);	
	}
}
class area
{
	double are(double a,double b,double c)
	{ 
	double area1;
	double s=(a+b+c)/2;
	area1=Math.sqrt(s*(s-a)*(s-b)*(s-c));
	return area1;
	}
	
}