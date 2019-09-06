import java.util.*;
class peri
{
	int a,l,b;
	double r;
	peri(int a)
	{
	System.out.println("perimeter of square:"+4*a);
	}
	peri(double r)
	{
	System.out.println("perimeter of circle:"+6.28*r);
	}
	peri(int l,int b)
	{
	System.out.println("perimeter of rectangle:"+(2*(l+b)));
	}
	public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	int aa,ll,bb;
	Double rr;
	System.out.println("enter the side of square");
	aa=in.nextInt();
System.out.println("enter the sides of rectangle");
	ll=in.nextInt();
	bb=in.nextInt();
System.out.println("enter the radius of circle");
	rr=in.nextDouble();
	 peri p1=new peri(aa),p2=new peri(ll,bb),p3=new peri(rr);       
	}
}