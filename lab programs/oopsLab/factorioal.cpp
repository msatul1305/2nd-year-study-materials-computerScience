#include<iostream>
using namespace std;
class factorial
{
	protected:
	int a;
	public:
	//void read(){cin>>a;}
		int calc(int a)
		{
			int fact=1;
			for(int i=1;i<=a;i++)
				fact*=i;
				//cout<<"factorial of"<<a<<"is"<<fact<<endl;
				return fact;
		}
//		void disp()
//		{
//			cout<<fact;
//		}
	};
	class comb:public factorial
	{
		int n,r,d;
		public:void read(){cin>>n>>r;}
		//void di(){cout<<n<<" "<<r;}
		void com(){d=calc(n)/(calc(n-r)*calc(r));}
		void disp(){cout<<d;}
	};
main()
{
//	factorial f;
//	f.read();
//	f.calc();
//	f.disp();
comb c;
c.read();
//c.di();
c.com();
c.disp();
}
