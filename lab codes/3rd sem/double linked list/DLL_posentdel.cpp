#include<iostream>
using namespace std;
typedef struct node
{
	int val;
	node *pre;
	node *next;
}node_t;
node_t *head=NULL;
node_t *current=NULL;
void dis();
void ent(int);
void fuc(int,int,int);
main()
{
	int i,n,p,v;
	cout<<"enter the no of elements:";
	cin>>n;
	ent(n);
	dis();
	cout<<"enter the position and the value to be entered:";
	cin>>p>>v;
	fuc(p,v,n);
	dis();
}
void fuc(int p,int v,int n)
{
	if(p==1)
	{
	    head->pre=new node_t;
	    head->pre->next=head;
	    head=head->pre;
	    head->pre=NULL;
	    head->val=v;
	}
	else if(p==n+1)
	{
		current=head;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=new node_t;
		current->next->pre=current;
		current->next->val=v;
		current->next->next=NULL;
	}
	else
	{
		node_t *temp=new node_t;
		current=head;
		for(int i=0;i<p-2;i++)
		{
			current=current->next;
		}
		temp->pre=current;
		temp->next=current->next;
		temp->val=v;
		current->next=temp;
	}
}
void ent(int n)
{
	
	int v,i;
	if(n==1)
	{
		head=new node_t;
	    head->pre=NULL;
	    head->next=NULL;
	    cout<<"enter the value:";
	    cin>>v;
	    head->val=v;
	}
	else if(n>1)
	{
		cout<<"enter the values:";
		cin>>v;
		head=new node_t;
	    head->pre=NULL;
	    head->val=v;
	    head->next=new node_t;
	    current=head->next;
	    current->pre=head;
	    for(i=0;i<n-2;i++)
	    {
	    	cin>>v;
	    	current->val=v;
	    	current->next=new node_t;
	    	current->next->pre=current;
	    	current=current->next;
		}
		cin>>v;
		current->val=v;
		current->next=NULL;
	}
	
}
void dis()
{
	current=head;
	while(current!=NULL)
	{
		cout<<current->val<<" ";
		current=current->next;
	}
}

