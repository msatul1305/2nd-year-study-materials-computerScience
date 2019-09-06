class supera
{
int x;
	supera(int x)
	{	
	this.x=x;
	}
	void display()
	{
	System.out.println("super="+x);
	}
}
class sub extends supera
{
int y;
	sub(int x,int y)
	{
	super(x);
	this.y=y;
	}
	void display()
	{
	System.out.println("sup x="+x);
	System.out.println("sub y="+y);
	}
	}
class test
{
public static void main(String args[])
	{
	sub s1=new sub(10,20);
	s1.display();
	}
}
