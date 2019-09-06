import java.util.*;
public class palindrome
{
public static void main(String args[])
{
Scanner in=new Scanner(System.in);
	int rev=0,r=0,n=in.nextInt(),temp=n;
	while(temp>0)
	{
	r=temp%10;
	rev=rev*10+r;
	temp=temp/10;
	}
if(rev==n)
System.out.println(n+"is palindrome");
else 
System.out.println(n+"is not palindrome");
}
}
