import java.util.*;
public class char1
{
	public ststic void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	String str=in.next();
int i=0,j=0;

	while(str[i]!=NULL)
	{
	char t=str[i];
	while(str[j]!=NULL)
	{
	if(str[i+1]==t)
	{System.out.prinln(t);}
	j++;
	}
i++;
	}
	}
}