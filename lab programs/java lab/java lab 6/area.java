import java.util.*;
class area
{
double ar;
	area(double l,double b)
	{
	ar=l*b;
	System.out.println("Area of Rectangle is"+ar);
	}
	
	area(int x,int y,int z)
	{
	int s=(x+y+z)/2;
	ar=Math.sqrt(s*(s-x)*(s-y)*(s-z));
	System.out.println("Area of Triangle is"+ar);
	}
public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	double ll,bb;
	int xx,yy,zz;
	System.out.println("enter sides of rectangle");
	ll=in.nextDouble();
	bb=in.nextDouble(); 
	area a1=new area(ll,bb);
	System.out.println("enter sides of a Triangle");
	xx=in.nextInt();
	yy=in.nextInt();
	zz=in.nextInt();
	area a2=new area(xx,yy,zz);

	}
}