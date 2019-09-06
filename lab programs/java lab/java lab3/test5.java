import java.util.*;
public class test5
{
	public static void main(String args[])
	{
int i=0;
	Scanner in=new Scanner(System.in); 
	String s1=in.nextLine();
	String s2=in.nextLine();


	if(s1.length()!=s2.length())
	System.out.println("Not Equal");
	else if(s1.equals(s2))
	{
	System.out.println("equal");
	}
	else
	System.out.println("Not Equal");
		
	if(s1.length()!=s2.length())
	System.out.println("Not Equal");
	else if(s1.equalsIgnoreCase(s2))
	{
	System.out.println("equal ignoring case");
	}
	else
	System.out.println("Not Equal");
	
}
}