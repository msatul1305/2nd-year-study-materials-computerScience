#include<iostream>
using namespace std;
typedef struct node
{
	int val;
	node *next;
	node *pre;
}node_t;
node_t *head=NULL;
void dis();
void beg(int);
main()
{
	int n;
	head=new node_t;
	head->val=2;
	head->pre=NULL;
	head->next=NULL;
	dis();
	cout<<"\nenter a value at beginning:";
	cin>>n;
	beg(n);
	dis();
}
void beg(int n)
{
	node_t *current=NULL;
	head->pre=new node_t;
	head->pre->next=head;
	head=head->pre;
	head->pre=NULL;
	head->val=n;
}
void dis()
{
	node_t *current=head;
	while(current!=NULL)
	{
		cout<<current->val<<" ";
		current=current->next;
	}
}

