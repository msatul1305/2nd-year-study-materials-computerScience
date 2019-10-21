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
main()
{
	head=new node_t;
	head->val=2;
	head->next=NULL;
	head->pre=NULL;
	dis();
}
void dis()
{
	node_t *current=head;
	while(current!=NULL)
	{
		cout<<current->val;
		current=current->next;
	}
}

