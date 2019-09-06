#include<iostream>
using namespace std;
int a[100000];
int suffixSum(int);
int prefixSum(int);
	int n,t,minsum=99999999,mini=100001,x,y;
main()
{

	cout<<"enter the no of test cases";
	cin>>t;
	if(t>=1&&t<=10)
	{
		for(int j=0;j<t;j++)
		{
		cout<<"enter the value of n";
		cin>>n;
			if(n>=1)
			{
			cout<<"enter array elements";
				for(int i=0;i<n;i++)
				cin>>a[i];	 
				for(int i=0;i<n;i++)
				{
			
				x=prefixSum(i);
				cout<<"prefix sum="<<x<<endl;
				 y=suffixSum(i);
					cout<<"suffix sum="<<y<<endl;
				int sum=x+y;
					if(sum<minsum)
					{
							minsum=sum;
							
						if(i<=mini)
						i=mini;
					}
					
				}
				cout<<endl<<minsum;
				cout<<endl<<mini;
			}
		}
	}
}
int prefixSum(int i)
{
	int sum=0;
	for(int j=0;j<=i;j++)
	sum+=a[j];
	return sum;
}
int suffixSum(int i)
{
	int sum=0;
	for(int j=n-1;j>=i;j--)
	sum+=a[j];
	return sum;
}


