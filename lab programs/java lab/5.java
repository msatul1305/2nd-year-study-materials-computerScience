import java.util.Scanner;

class Compare{

int d1,m1,y1;
Compare()
{
System.out.println("enter date");
Scanner s=new Scanner(System.in);
d1=s.nextInt();
m1=s.nextInt();
y1=s.nextInt();
}
void comp(Compare c)
{
 if(y1>c.y1)
  System.out.println(d1+"/"+m1+"/"+y1+" is greater");
 else if(m1>c.m1&&y1>=c.y1)
System.out.println(d1+"/"+m1+"/"+y1+" is greater");
else if(d1>c.d1&&m1>=c.m1&&y1>=c.y1)
System.out.println(d1+"/"+m1+"/"+y1+" is greater");
else
System.out.println(c.d1+"/"+c.m1+"/"+c.y1+" is greater");
}
public static void main(String args[])
{
Compare c1=new Compare();
Compare c2=new Compare();
c1.comp(c2);
}
}