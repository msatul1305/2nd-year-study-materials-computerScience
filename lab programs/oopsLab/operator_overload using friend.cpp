#include<iostream>
using namespace std;
class inc
{
	int x;
	float y;
	public:
		inc(int a,float b)
		{
			x=a;
			y=b;
		}
		void disp()
		{
			cout<<x<<" "<<y<<endl;
		}
	friend void operator ++ (inc);
		
};
	void operator ++(inc &c)
	{
			c.a=c.a+2;
			c.b=c.b+8.5; 
	}
	
main()
{
	inc c(5,6);
	cout<<"initial values"<<endl;
	c.disp();
	++c;
	cout<<"after ++"<<endl;
	c.disp();
}
