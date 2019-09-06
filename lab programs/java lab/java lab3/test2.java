import java.util.*;
public class test2
{
	public static void main(String args[])
	{
	int arr[]=new int[10];
	Scanner in=new Scanner(System.in);
	for(int i=0;i<arr.length;i++)
	{
	arr[i]=in.nextInt();
	}
 
int large=arr[0],small=arr[0];
	for(int i=0;i<arr.length;i++)
	{
	if(arr[i]>large)large=arr[i];
	if(arr[i]<small)small=arr[i];
	}
System.out.println("small is"+small);

System.out.println("large is"+large); 	
	}
}