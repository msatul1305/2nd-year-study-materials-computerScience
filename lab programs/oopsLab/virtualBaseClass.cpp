#include<iostream>
using namespace std;
class a
{
public:
	 virtual void getd()
	{
		cout<<"a";
	}
	
};
class b:public a
{
	public:
	void getd()
	{
		cout<<"b";
	}
};
main()
{
	a *a2;
	a2=new b;
	a2->getd();
}
