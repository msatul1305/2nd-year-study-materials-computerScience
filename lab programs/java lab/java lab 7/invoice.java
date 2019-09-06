import java.util.*;
class customer
{
int id;
double disc;
String name;
	customer(int i,double d,String n)
	{
	id=i;
	disc=d;
	name=n;
	}
	
}
public class invoice extends customer
{
int cid;
double amt;
String cname;

	invoice(int id,double disc,String name,int a,double b,String c)
	{
	super(id,disc,name);
	cid=a;
	amt=b;
	cname=c;
	}
	void display()
	{
	System.out.println("Item id="+id);
	System.out.println("disc="+disc);
	System.out.println("Item name="+name);
	System.out.println("customer id="+cid);
	System.out.println("customer name="+cname);
	System.out.println("amt="+amt);
	amt=amt-(disc*amt);
	System.out.println("Total amt after discount="+amt);
	}
public static void main(String args[])
	{
	int aa,bb;
	double cc,dd;
	String ee,ff;
	Scanner in=new Scanner(System.in);
		System.out.println("enter the item id:");
		aa=in.nextInt();
		System.out.println("enter the item name:");
		ee=in.next();
		System.out.println("enter the discount:");
		cc=in.nextDouble();
		
	
			
		System.out.println("enter the invoice id:");
		bb=in.nextInt();
		System.out.println("enter the customer name:");
		ff=in.next();
		System.out.println("enter the amt");
		dd=in.nextDouble();
		invoice k=new invoice(aa,cc,ee,bb,dd,ff);
	System.out.println();
		k.display();	
	
	}
}
