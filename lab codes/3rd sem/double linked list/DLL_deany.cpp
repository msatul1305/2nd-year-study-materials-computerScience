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
void del(int);
main()
{
	int i,v,n;
	cout<<"enter the no of elements:";
	cin>>n;
	ent(n);
	dis();
	cout<<"enter the element to be deleted:";
	cin>>v;
	del(v);
	cout<<"\nelements after deletion:\n";
	dis();
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
void del(int v)
{
	current=head;
	while(current->next!=NULL)
	{
		if(current==head&&current->val==v)
	    {
	    	head->next->pre=NULL;
		    head=head->next;
		    current=head;
		}
		
		else if(current->next->next==NULL&&current->next->val==v)
		{
			delete current->next;
			current->next=NULL;
		}
		else if(current->next->val==v)
		{
			current->next=current->next->next;
			current->next->pre=current;
		}
		
		else
		current=current->next;
	}
	if(head->val==v)
	head=NULL;
	
}
