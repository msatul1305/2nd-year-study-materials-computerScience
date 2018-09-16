#include<bits/stdc++.h>
using namespace std;
int fun(int n,int l,int r,int t,int a[10])
{
	int mid=(l+r)/2;
	t++;
	if(a[mid]>n)
	t=fun(n,l,mid-1,t,a);
	else if(a[mid]<n)
	t=fun(n,mid+1,r,t,a);
	return t;
}
int main()
{
	int t,w,b,n,l,r,time[10],a[10]={0,1,2,3,4,15,6,7,8,9};
	sort(a,a+10);
	float sum=0,avg;
	for(int i=0;i<10;i++)
	{
		n=a[i];
		t=0;
		t=fun(n,0,9,t,a);
		time[i]=t;
	}
	b=time[0];
	w=time[0];
	sum=0;
	for(int i=0;i<10;i++)
	{
		if(time[i]<b)
		b=time[i];
		if(time[i]>w)
		w=time[i];
		sum=sum+time[i];
	}
	avg=sum/10;
	cout<<"best case:O["<<b<<"]"<<endl;
	cout<<"worst case:O["<<w<<"]"<<endl;
	cout<<"average case:O["<<avg<<"]"<<endl;
}
