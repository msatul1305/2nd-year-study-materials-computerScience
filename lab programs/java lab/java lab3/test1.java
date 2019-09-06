import java.util.*;
public class test1
{
	public static void main(String args[])
	{
	int arr[]=new int[10];
	Scanner in=new Scanner(System.in);
	for(int i=0;i<arr.length;i++)
	{
	arr[i]=in.nextInt();
	} 
System.out.println("Even no.s are");
	for(int i=0;i<arr.length;i++)
	{
	if(arr[i]%2==0)
	{
	System.out.println(arr[i]);
	}
	}
System.out.println("Odd no.s are");
for(int i=0;i<arr.length;i++)
	{

	if(arr[i]%2!=0)
	{
	System.out.println(arr[i]);
	}
	}	
	}

}