import java.util.*;
class date
{
int mon,date,yr;
	date(int x,int y,int z)
	{
	date=x;
	mon=y;
	yr=z;	
	}
	void comp(int d,int m,int y)
	{
	if(y>yr)
	System.out.println(date+" "+mon+" "+yr+" is before");
	else if(y==yr && m>mon)
	System.out.println(date+" "+mon+" "+yr+" is before");
	else if(mon==m&&d>date)
	System.out.println(date+" "+mon+" "+yr+" is before");
	else 
		System.out.println(d+" "+m+" "+y+" "+"is before");
	}
	public static void main(String args[])
	{
	int dd1,mm1,yy1,dd2,mm2,yy2;
	System.out.println("enter the date1");
	Scanner in=new Scanner(System.in);
	dd1=in.nextInt();
	mm1=in.nextInt();
	yy1=in.nextInt();
	date d1=new date(dd1,mm1,yy1);
	System.out.println("enter the 2nd date");
	dd2=in.nextInt();
	mm2=in.nextInt();
	yy2=in.nextInt();
	 d1.comp(dd2,mm2,yy2);
	}
}