#include<iostream>
using namespace std;
class matric
{
	int a[3][3];
		public:
	matric()
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			cin>>a[i][j];
		}
	}
		void disp()
		{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			cout<<a[i][j]<<"\t";
		}
		}
		void add(matric m)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				a[i][j]=a[i][j]+m.a[i][j];
	
			}
					}
};
main()
{
	matric m1,m2;
	m1.add(m2);
	m1.disp();
	
}
