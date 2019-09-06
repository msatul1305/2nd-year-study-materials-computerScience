import java.util.*;
class num
{
int a,b,c;
	num(int x,int y,int z)
	{
	a=x;b=y;c=z;
	}
	void larg()
	{
if(a>b&&a>c)
System.out.println(a+"is largest");
else if(b>c)
System.out.println(b+"is largest");
else 
System.out.println(c+"is largest");

	}
	public static void main(String args[])
	{
	Scanner in=new Scanner(System.in);
	int aa,ll,bb;
aa=in.nextInt();
ll=in.nextInt();
bb=in.nextInt();
	 num n1=new num(aa,ll,bb); 
	n1.larg(); 
	}
}