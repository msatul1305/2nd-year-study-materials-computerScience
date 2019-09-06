 #include<iostream>
#include<stdlib.h>//for exit() function??
using namespace std;
const int n=5;
int top=-1;
	void push(int []);
	void pop(int []);
	void disp(int []);
	int isempty(int []);
	int isfull(int []);
	void getMin(int []);
main()
{
	int stack[n];
	int num;
	while(num!=5)
	{
	cout<<"choose your option:\n1.push\n2.pop\n3.Display\n4.ViewMin\n5.Exit\n";
	cin>>num;
	switch(num)
	{
		case 1:push(stack);break;
		case 2:pop(stack);break;
		case 3:disp(stack);break;
		case 4:getMin(stack);break;
		case 5:exit(0);					
	}	
	}
}
void push(int s[])
{
	int ch=1,item;
	while(ch==1)
	{
		cout<<"Enter the item to be pushed\n";
		cin>>item;
		if(isfull(s));
		else 
		{
		top++;
		s[top]=item;
		}
		cout<<"Do you want to push more?\n1.yes\n2.No\n";
		cin>>ch;
		
	}
}
int isfull(int s[])
{
	if(top==n-1)
	{
	cout<<"over flow,can't push anymore!\n";
	return 1;
	}	
	return 0;
}
void pop(int s[])
{
	int item;
	if(isempty(s));
	else 
	{
		item=s[top];
		top--;
		cout<<item<<" is Deleted!\n";
	}
}
int isempty(int s[])
{
	if(top==-1)
	{
	cout<<"underflow!Can't Delete anymore....\n";
	return 1;
	}
	return 0;
}
void disp(int s[])
{
	for(int i=0;i<=top;i++)
	cout<<s[i]<<"\t";
	cout<<"\n";
}
void getMin(int s[])
{
	int min=s[0];
	if(top==-1)
	cout<<"stack empty!";
	else
	{
	for(int i=0;i<=top;i++)
	{
		if(s[i]<min)
		{
			min=s[i];
		}
	}
	cout<<min<<" is minimum!";
	}
}
