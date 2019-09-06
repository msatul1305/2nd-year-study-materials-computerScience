import java.util.*;
import java.lang.*;
public class a1
{
public static double simple(double amt,double rate,double time)
	{
	double si;
	si=amt*rate*time/100;
	return si;
	}
public static double comp(double amt,double rate,double time)
	{
	double ci;
	ci=amt*(Math.pow((1+(rate/100)),time));
return ci;
	}
 public static void main(String args[])
 {
 double p,r,t,si,ci;
 Scanner in=new Scanner(System.in);
p=in.nextDouble();
r=in.nextDouble();
t=in.nextDouble();
si=simple(p,r,t);
ci=comp(p,r,t);	
System.out.println("SI="+si);
System.out.println("CI="+ci);
 }
}