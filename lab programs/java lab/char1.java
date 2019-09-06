import java.util.*;
import java.lang.String;
public class char1
{
	public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	String str=in.next();
int i=0,j=1;

	while(i<str.length())
	{
	char t=str.charAt(i);
	j=i+1;
	while(j<str.length())
	{
	if(str.charAt(j)==t)
	{System.out.println(t);break;}
	j++;
	}
i++;
	}
	}
}