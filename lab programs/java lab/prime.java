import java.util.*;
public class prime
{
	public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	int n=in.nextInt();
	int temp=n;
int c=0;
if (n==1)
System.out.println("Neither Prime nor Composite");
	else {
for(int i=2;i<=temp/2;i++)
		{
		if(temp%i==0)
		c++;
		}
if(c==0)
System.out.println(n+"is prime");
else 
System.out.println(n+"is not prime");
	}
}
}