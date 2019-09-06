import java.util.*;
class area
{
int l,b,ar;
	area(int x,int y)
	{
	l=x;b=y;
	}
	void calc()
	{
	ar=l*b;
	}
}
class volume extends area
{
	int a,bb,c,v;	
	volume(int p,int q,int r)
	{
	super(p,q);
	a=p;bb=q;c=r;
	}
	
	void calc()
	{
	v=a*bb*c;
	System.out.println("area is"+ar);
	System.out.println("volume is"+v);
	}
	public static void main(String args[])
	{
	volume vv=new volume(1,2,3);
	vv.calc();
	}
	
}