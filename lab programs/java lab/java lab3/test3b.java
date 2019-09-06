import java.util.*;
public class test3b
{
	public static void main(String args[])
	{
int i=0;
	Scanner in=new Scanner(System.in); 
	String s1=in.nextLine();
	String s2=in.nextLine();
	if(s1.length()!=s2.length())
	System.out.println("Not Equal");
	else
	{
	for(i=0;i<s1.length();i++)
	{
	if(s1.charAt(i)==s2.charAt(i))i++;
else break;
	}}
if(i!=s1.length()) System.out.println("Not Equal");
		
else if(i==s1.length())
System.out.println("equal");
}
}