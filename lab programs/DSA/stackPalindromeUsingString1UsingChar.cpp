#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int n=100;
int top=-1;
int i=0;
	char pal[100];
	void push(char []);
	void pop(char []);
	void disp(char []);
	void pali(char s[]);
main()
{
	char stack[n];
	int num;
	while(num!=4)
	{
	cout<<"choose your option:\n1.push\n2.pop\n3.Display\n4.Exit\n";
	cin>>num;
	switch(num)
	{
		case 1:push(stack);break;
		case 2:pop(stack);break;
		case 3:disp(stack);break;
		case 4:exit(0);
		//what is endl?
			
	}	
	}
}
void push(char s[])
{
	int ch=1;
	char item;
	while(ch==1)
	{
		cout<<"Enter the item to be pushed\n";
		cin>>item;
		if(top==n-1)
		cout<<"over flow,can't push anymore!\n";
		else 
		{
		top++;
		s[top]=item;
		}
		cout<<"Do you want to push more?\n1.yes\n2.No\n";
		cin>>ch;
		
	}
}
void pop(char s[])
{
	char item;
	if(top==-1)
	{
	cout<<"underflow!Can't Delete anymore....\n";
	pali(s);
}
	else 
	{
		pal[i++]=s[top];
		item=s[top];
		top--;
		cout<<item<<" is Deleted!\n";
		
}

}
void pali(char s[])
{
		if(strcmp(pal,s)==0)
	cout<<endl<<pal<<" is same as "<<s<<" and is Palindrome\n";
	else 
	cout<<endl<<pal<<" is not same as "<<s<<endl<<"not Palindrome\n";
}
void disp(char s[])
{
	for(int i=0;i<=top;i++)
	cout<<s[i];
	cout<<"\n";
}

