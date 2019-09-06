class student
{
int id;
String name;
	student(int i,String n)
	{
	id=i;
	name=n;
	}
	void disp()
	{
	System.out.println("id"+id+"name="+name);
	}	
	public static void main(String args[])
	{
	student a=new student(111,"raja"),b=new student(110,"Raw");
	a.disp();
b.disp();
	
	}
}