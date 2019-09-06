#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int val;
	node *link;
};
node *top=NULL;
	void push();
	void pop();
	void disp();


main()
{
	int num;
	while(num!=4)
	{
	cout<<"choose your option:\n1.push\n2.pop\n3.Display\n4.Exit\n";
	cin>>num;
	switch(num)
	{
		case 1:push();break;
		case 2:pop();break;
		case 3:disp();break;
		case 4:exit(0);				
		//what is endl?
			
	}	
	}
}
void push()
{
	int ch=1,it;
	while(ch==1)
	{
		cout<<"Enter the item to be pushed\n";
		cin>>it;
		if(top==NULL)
		{
			top=new node;
			top->val=it;
			top->link=NULL;
		}
		else
		{
			node *ptr=new node;
			ptr->val=it;
			ptr->link=top;
			top=ptr;
		}
		cout<<"Do you want to push more?\n1.yes\n2.No\n";
		cin>>ch;
		
}
}
void pop()
{
	int item;
	if(top==NULL)
	cout<<"underflow!Can't Delete anymore....\n";
	else 
	{
		node *ptr=new node;
		ptr->val=top->val;
		ptr->link=NULL;
		top=top->link;
		cout<<ptr->val<<" is Deleted!\n";
		delete(ptr);
	}
}
void disp()
{
	node *ptr=top;
//		for(ptr=top;ptr!=NULL;ptr=ptr->link)
//		cout<<ptr->val<<"\t";
//		cout<<"\n";
	while(ptr!=NULL)
	{
		cout<<ptr->val<<"->";
		ptr=ptr->link;
	}
	cout<<endl;
}
