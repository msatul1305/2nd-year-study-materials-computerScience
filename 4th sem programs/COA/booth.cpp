#include<iostream>
using namespace std;
int binary(int num,int *arr)
{
	int i=num;
	if(num<0)
	i=-i;
	int k=0;
	while(i!=0)
	{
		arr[k]=i%2;
		i/=2;
		k++;
	}
	arr[k]=0;
	return k;
}
void same(int n1,int n2,int *arr1,int *arr2)
{
	if(n1<n2)
	{
		while(n1!=n2)
		{
			n1++;
			arr1[n1]=0;
		}
	}
	if(n2<n1)
	{
		while(n2!=n1)
		{
			n2++;
			arr2[n2]=0;
		}
	}
}
void neg(int *arr,int size)
{
	for(int i=0;i<=size;i++)
	{
		if(arr[i]==0)
		arr[i]=1;
		else
		arr[i]=0;
	}
	int car=1;
	for(int i=0;i<=size;i++)
	{
		if((arr[i]+car)==2)
		{
			arr[i]=0;
			car=1;
		}
		else if((arr[i]+car)==1)
		{
			arr[i]=1;
			car=0;
		}
		else if((arr[i]+car)==0)
		{
			arr[i]=0;
			car=0;
		}
	}
}
void sum(int *arr,int *arr1,int size)
{
	int car=0;
	for(int i=0;i<=size;i++)
	{
		if((arr[i]+arr1[i]+car)==3)
		{
			arr[i]=1;
			car=1;
		}
		else if((arr[i]+arr1[i]+car)==2)
		{
			arr[i]=0;
			car=1;
		}
		else if((arr[i]+arr1[i]+car)==1)
		{
			arr[i]=1;
			car=0;
		}
		else if((arr[i]+arr1[i]+car)==0)
		{
			arr[i]=0;
			car=0;
		}
	}
}
void sub(int *arr,int *arr1,int size)
{
	neg(arr1,size);
	sum(arr,arr1,size);
	neg(arr1,size);
}
int shift(int *arr,int *arr2,int ff,int size)
{
	ff=arr2[0];
	for(int i=0;i<size;i++)
	{
		arr2[i]=arr2[i+1];
	}
	arr2[size]=arr[0];
	for(int i=0;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	return ff;
}
void booth(int *arr1,int *arr2,int size)
{
	int arr[size];
	for(int i=0;i<=size;i++)
	arr[i]=0;
	int ff=0;
	int count=size+1;
	while(count!=0)
	{
		if(arr2[0]==1&&ff==0)
		sub(arr,arr1,size);
		else if(arr2[0]==0&&ff==1)
		sum(arr,arr1,size);
		ff=shift(arr,arr2,ff,size);
		count--;
	}
	cout<<"result:\n";
	for(int i=size;i>=0;i--)
		cout<<arr[i]<<" ";

	for(int i=size;i>=0;i--)
		cout<<arr2[i]<<" ";
		cout<<endl;
		
}
main()
{
	int num1,num2,arr1[50],arr2[50];
	cin>>num1>>num2;
	int n1=binary(num1,arr1);
	int n2=binary(num2,arr2);
	same(n1,n2,arr1,arr2);
	int size=n1>n2?n1:n2;
	if(num1<0)
	neg(arr1,size);
	if(num2<0)
	neg(arr2,size);
	booth(arr1,arr2,size);
	cout<<num1*num2;
}
