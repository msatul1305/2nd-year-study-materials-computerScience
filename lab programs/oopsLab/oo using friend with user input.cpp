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
	void operator ++(inc c)
	{
			c.x=c.x+2;
			c.y=c.y+8.5; 
	}
	
main()
{
	int k;float l;
	cout<<"enter integer value:";
	cin>>k;
	cout<<"enter float value";
	cin>>l;
	inc a(k,l);
	cout<<"initial values"<<endl;
	a.disp();
	++a;
	cout<<"after ++"<<endl;
	a.disp();
}
