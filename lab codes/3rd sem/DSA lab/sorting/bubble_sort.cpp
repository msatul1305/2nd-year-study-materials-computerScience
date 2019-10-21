#include<iostream>
using namespace std;
main()
{
	int a[10]={2,1,4,5,6,7,1,1,3,2},p=0,temp;
	for(int i=9;i>0;i--)
	{
		p=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				p++;
			}
		}
		if(p==0)
		break;
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
}
