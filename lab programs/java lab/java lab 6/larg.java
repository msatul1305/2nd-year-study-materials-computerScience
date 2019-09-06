import java.util.*;
public class larg
{
	int k,l,m;
	larg(int x,int y,int z)
	{
	k=x;
	l=y;
	m=z;	
	}
	void fun1()
	{
	int a=func2();
	System.out.println(a+" is Largest");
	
	}
	int func2()
	{
	if(k>l&&k>m)
	return k;
	else if(l>m)
	return l;
	else 
	return m; 
	}
	public static void main(String args[])
	{
	Random in=new Random();
	int a=in.nextInt(100);
	int b=in.nextInt(100);
	int c=in.nextInt(100);
	larg l=new larg(a,b,c);
	System.out.println("3 no.s are:"+a+" "+b+" "+c);
	l.fun1();
	}
}
