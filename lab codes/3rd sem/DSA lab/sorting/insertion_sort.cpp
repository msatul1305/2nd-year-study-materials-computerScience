#include<iostream>
using namespace std;
void insert(int a[],int n)
{
	int hole,v;
	for(int i=1;i<n;i++)
	{
		hole=i;
		v=a[i];
		while(hole>0&&a[hole-1]>v)
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=v;
	}
}
main()
{
	int a[10]={2,1,4,5,6,7,1,1,3,2};
	
    insert(a,10);
    for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
}
