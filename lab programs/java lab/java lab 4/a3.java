import java.util.*;
import java.lang.*;
public class a3
{
public static void main(String args[])
	{
double r;
	area a1=new area();
double ar;
Scanner in=new Scanner(System.in);
r=in.nextDouble();
ar=a1.are(r);
System.out.println("area is"+ar);	
	}
}
class area
{
	double are(double a)
	{ 
	double area1;
	area1=3.14*a*a;
	return area1;
	}
	
}