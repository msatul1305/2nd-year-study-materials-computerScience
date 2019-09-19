#include<iostream>
using namespace std;
main()
{
	float num;
	int a=0,b=0,c=0,d=0;
	cout<<"coins available are 1,5,20,25\n";
	cout<<"enter a num:";
	cin>>num;
	a=num/25;
	num=num-25*a;
	b=num/20;
	num=num-20*b;
	c=num/5;
	num=num-5*c;
	d=num;
	cout<<"25:"<<a<<" 20:"<<b<<" 5:"<<c<<" 1:"<<d;
}
