#include<iostream>
using namespace std;
int fact(int *a,int d)
{
	int j=0;
	for(int i=1;i<=d;i++)
	{
		if(d%i==0)
		{
			a[j]=i;
		    j++;
		}
			
	}
	cout<<"factors of "<<d<<": ";
	for(int i=0;i<j;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	return j;
}
main()
{
	int a[100],b[100],n,d,sum=0,k=0;
	cout<<"enter the numerator and denominator:";
	cin>>n>>d;
	int l=fact(a,d);
	int bitmsk=1<<l;
	for(int i=1;i<bitmsk;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(i&(1<<j))
			{
				b[k]=a[j];
				sum+=a[j];
				k++;
			}
		}
		if(sum==n)
		{
			for(int x=0;x<k;x++)
			cout<<b[x]<<" ";
			cout<<"\n";
		}
		sum=0;k=0;
	}
	//cout<<"\n";
}
