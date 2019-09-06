#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
	void input()
	{
		cin>>hr>>min>>sec;
	}
	void add(time t)
	{
		sec=sec+t.sec;
		if(sec>=60)
		{
			sec=sec-60;
			min++;
		}
		min=min+t.min;
		
		if(min>=60)
		{
			min=min-60;
			hr++;
		}
		hr=hr+t.hr;
	}
	void disp()
	{
		cout<<hr<<":"<<min<<":"<<sec;
	}
};
main()
{
	time t1,t2;
	t1.input();
	t2.input();
	t1.add(t2);
	t1.disp();
}
