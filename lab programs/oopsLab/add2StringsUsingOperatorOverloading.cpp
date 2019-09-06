#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	char s[10];
	public:
		abc(char a[10])
		{
		strcpy(s,a);	
		}
		void operator + (abc a2)
		{
			strcat(s,a2.s);
		}
		void disp()
		{
			cout<<s;
		}
		
};
main()
{
	abc a1("hello"),a2("world");
	a1+a2;
	a1.disp();
}
