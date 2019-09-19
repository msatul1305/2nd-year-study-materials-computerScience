#include<iostream>
using namespace std;
int cnt=0;
void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
int partition(int low,int high,int *a)
{
	int i=low;
	int j=high+1;
	int v=a[i];
	while(i<j)
	{
		do{
			i++;
			cnt++;
		}while(a[i]<=v&&i<=high);
		do{
			j--;
			cnt++;
		}while(a[j]>v);
		if(i<j)
		swap(a[i],a[j]);
	}
	swap(a[low],a[i-1]);
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	return (i-1);
}
void quicksort(int low,int high,int *a)
{
	if(low<high)
	{
		int j=partition(low,high,a);
		quicksort(low,j-1,a);
		quicksort(j+1,high,a);
	}
}
main()
{
	//int a[7]={23,42,16,7,18,29,13};
	int a[5]={23,22,21,20,19};
	quicksort(0,4,a);
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<cnt<<"\n";
}
