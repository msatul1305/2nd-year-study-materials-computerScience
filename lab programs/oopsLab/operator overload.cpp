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
		void operator ++ ()
		{
			x=x+2;
			y=y+8.5;
		 } 
};
main()
{
	inc a(3,4);
	cout<<"initial values"<<endl;
	a.disp();
	++a;
	cout<<"after ++"<<endl;
	a.disp();
}
