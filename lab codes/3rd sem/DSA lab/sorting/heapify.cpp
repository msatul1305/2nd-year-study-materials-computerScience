#include<iostream>
using namespace std;
void Heapify(int a[],int n,int i)
{
	int temp;
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&a[left]>a[i])
	largest=left;
	if(right<n&&a[right]>a[largest])
	largest=right;
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		Heapify(a,n,largest);
	}
}

void BuildMaxHeap(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		Heapify(a,n,i);
	}
}
main()
{
	int a[6]={2,2,3,8,10,7};
	BuildMaxHeap(a,6);
	for(int i=0;i<6;i++)
	cout<<a[i]<<" ";
}

