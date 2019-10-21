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
	int i,n,k;
	cout<<"enter the no of elements:";
	cin>>n;
	ent(n);
	dis();
	cout<<"\nenter for deleting\n1.at beginning\n2.at end:";
	cin>>k;
	del(k);
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
void del(int k)
{
	if(head->next==NULL)
	{
		head=NULL;
	}
	else if(k==1)
	{
		head->next->pre=NULL;
		head=head->next;
	}
	else if(k==2)
	{
		current=head;
		while(current->next->next!=NULL)
		{
			current=current->next;
		}
		delete current->next;
		current->next=NULL;
	}
	
}
