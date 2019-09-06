#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Stradd
{
	char ch[200];
	public:
		void get()
		{   
			gets(ch);
		}
		friend Stradd operator +(Stradd &a1,Stradd &a2)
		{
			strcat(a1.ch,a2.ch);	
		}
		void put()
		{
			puts(ch);
		}
};
int main()
{
	Stradd a1,a2;
	cout<<"\nEnter first string ";
	a1.get();
    cout<<"\nEnter second string ";
	a2.get();
	a1+a2;
	cout<<"\nResult: ";
	a1.put();
}
