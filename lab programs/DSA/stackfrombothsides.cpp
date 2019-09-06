#include<iostream>
using namespace std;
void push1();
void pop1();
void disp1();
void push2();
void pop2();
void disp2();
const int n=10;
int top1=-1,top2=n,stack[n];
main()
{
	int c;
	while(c!=7)
	{
	cout<<"enter option:\n1.Push in stack 1\n2.Pop from stack 1\n3.Display Stack 1\n4.Push in Stack 2\n5.Pop from stack 2\n6.Display Stack 2\n7.Exit:\n";
	cin>>c;	
	switch(c)
	{
		case 1:push1();
			break;
			case 2:pop1();
				break;
				case 3:disp1();
					break;
					case 4:push2();
						break;
						case 5:pop2();
							break;
							case 6:disp2();
								break;
								case 7:exit(0);
								break;
	}
	}
}
	void push1()
	{
		int item;
		if(top1+1==top2)
		{
			cout<<"Overflow!Can't insert anymore...\n";
		}
		else{
			top1++;
			cout<<"enter the item to be inserted:\n";
			cin>>item;
			stack[top1]=item;
			
		}
	}
	
	void push2()
	{
		int item;
		if(top1+1==top2)
		{
			cout<<"Overflow!Can't insert anymore...\n";
		}
		else{
			top2--;
			cout<<"enter the item to be inserted:\n";
			cin>>item;
			stack[top2]=item;
			
		}
	}
	void pop1()
	{
		if(top1==-1)
		cout<<"underflow!Nothing to Delete...\n";
		else{
			int item=stack[top1];
			cout<<item<<" is deleted!\n";
			top1--;
		}
	}
	void pop2()
	{
		if(top2==n)
		cout<<"underflow!Nothing to Delete...\n";
		else{
			int item=stack[top2];
			cout<<item<<" is Deleted!\n";
			top2++;
		}
	}
	void disp1()
	{
		for(int i=0;i<=top1;i++)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
	void disp2()
	{
		for(int i=n-1;i>=top2;i--)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
