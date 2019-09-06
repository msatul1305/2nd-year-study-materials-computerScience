import java.util.*;
public class addamt
{
int amt=50;
	addamt()
	{
	amt=amt+0;
	}
	addamt(int am)
	{
	amt=amt+am;
System.out.println("the final value of amount is:\n"+amt);
	}
	
	public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	System.out.println("Enter the amount to be added");
	int a=in.nextInt();
	addamt at=new addamt(a);
	
	
	}
}