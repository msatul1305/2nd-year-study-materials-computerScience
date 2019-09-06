#include<iostream>
using namespace std;
struct node
{
    int val;
    struct node *next;
}*head;
void insert(); 
void change();
void display();
 
main()
{
    int choice, nodes, element, position, i;
    head = NULL;
    while (choice!=3)
    {
        cout<<"1.Insert\n2.Display\n3.Exit\n";
        cout<<"Enter your choice : \n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
        	change();
			display();
			break;
        case 3:
            cout<<"Exiting..."<<endl;
            exit(0);
            break;  
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}

void insert()
{
    int item;
    cout<<"Enter the item to be inserted: "; 
    cin>>item;
    node *temp, *p;
     temp =new node;
    if(temp==NULL)
	{
		cout<<"No free memory available,sorry! :(";
	}
	else
	{
		temp->val=item;
		temp->next=NULL;
		if (head==NULL)
		{
			head=temp;
		}
		else 
		{
	    p = head;
	    while (p->next != NULL)
	    {         
	        p = p->next;        
	    }
	    p->next = temp;
	}
	}
}
void change()
{
    node *temp;
    if (head == NULL)
    {
    	cout<<endl;
    }
    temp = head;
//    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
    	if(temp->val%2!=0)
//        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void display()
{
    node *temp;
    if (head == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = head;
    cout<<"Alternate Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next->next;
    }
    cout<<"NULL"<<endl;
}
