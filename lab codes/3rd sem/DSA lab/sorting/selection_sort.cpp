#include<iostream>
using namespace std;
main()
{
	int a[10]={2,1,4,5,6,7,1,1,3,2},min=0,index,temp;
	for(int i=0;i<9;i++)
	{
		min=i;
		for(int j=i+1;j<10;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
}
