 #include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int n=5;
const int k=100;
int top=-1;
	void push(char [k][n]);
	void pop(char [k][n]);
	void disp(char [k][n]);
main()
{
	char stack[k][n];
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
void push(char s[k][n])
{
	int ch=1;
	char item[100];
	while(ch==1)
	{
		cout<<"Enter the item to be pushed\n";
		cin>>item;
		if(top==n-1)
		cout<<"over flow,can't push anymore!\n";
		else 
		{
		top++;
		strcpy(s[top][],item);
		}
		cout<<"Do you want to push more?\n1.yes\n2.No\n";
		cin>>ch;
		
	}
}
void pop(int s[k][n])
{
	int item,pal=0,r=0,temp;
	if(top==-1)
	cout<<"underflow!Can't Delete anymore....\n";
	else 
	{
		strcpy(item,s[][top]);
		top--;
		cout<<item<<" is Deleted!\n";
	}
	temp=item;
	while(temp>0)
	{
		r=temp%10;
		pal=pal*10+r;
		temp=temp/10;
	}
	if(pal==item)
	cout<<endl<<item<<" is Palindrome\n";
	else 
	cout<<endl<<"not Palindrome\n";
}
void disp(int s[k][n])
{
	for(int i=0;i<=top;i++)
	cout<<s[][i]<<"\t";
	cout<<"\n";
}

