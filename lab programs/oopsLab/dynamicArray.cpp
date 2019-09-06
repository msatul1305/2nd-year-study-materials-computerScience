#include<iostream>
using namespace std;
class array
{
	int **p=0,ro,co;
public:
	array(int r,int c)
	{
		ro=r;
		co=c;
	p=new int *[r];
	for(int i=0;i<r;i++)
	p[i]=new int [c];
	}
	void getd()
	{
		cout<<"enter the values";
		for(int i=0;i<ro;i++)
		{
		for(int j=0;j<co;j++)
		cin>>p[i][j];	
		}	
	}
	void putd()
	{
		for(int i=0;i<ro;i++)
		{
		for(int j=0;j<co;j++)
		cout<<p[i][j];
		cout<<endl;	
		}	
	}		
};
main()
{
	array a1(2,2);
	a1.getd();
}
