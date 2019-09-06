#include<iostream>
#include<math.h>
using namespace std;
class av
{
	protected:
	float avg;
	public:
//	void read()
//	{
//		int n;
//		for(int i=0;i<n;i++)
//		cin>>a[i];
//	}
	float calc(int a[],int n)
	{
		float sum=0,avg;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
		}
		avg=sum/n;
		return avg;
	}
};
class sd:public av
{
	int a[],n,average;
	float stdev;
	public:
		void read()
	{
		cout<<"enter the value of n";
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cout<<a[i];
	}
	void cal()
	{
		int v;
		average=calc(a,n);
		for(int i=0;i<n;i++)
		{
			v=(average-a[i])*(average-a[i]);
		}
		stdev=sqrt(v);
	}
	void disp()
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<" "<<endl;
			cout<<"average is:"<<average<<endl;
			cout<<"sd="<<stdev<<endl;
		}
};
int main()
{
sd s;
s.read();
s.cal();
s.disp();
return 0;	
}
