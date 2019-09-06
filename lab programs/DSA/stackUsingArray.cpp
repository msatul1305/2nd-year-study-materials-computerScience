 #include<iostream>
#include<stdlib.h>
using namespace std;
const int n=5;
int top=-1;
	void push(int []);
	void pop(int []);
	void disp(int []);
main()
{
	int stack[n];
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
void push(int s[])
{
	int ch=1,item;
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
void pop(int s[])
{
	int item;
	if(top==-1)
	cout<<"underflow!Can't Delete anymore....\n";
	else 
	{
		item=s[top];
		top--;
		cout<<item<<" is Deleted!\n";
	}
}
void disp(int s[])
{
	for(int i=0;i<=top;i++)
	cout<<s[i]<<"\t";
	cout<<"\n";
}
