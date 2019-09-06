#include<iostream>
using namespace std;
struct node
{
    int val;
    struct node *next;
}*head;

        void insert_begin();
        void insert_pos();
        void insert_last(); 
        void delete_pos();
        void reverse();
        void display();
 
main()
{
    int choice, nodes, element, position, i;
    head = NULL;
    while (1)
    {
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Delete a Particular Node"<<endl;
        cout<<"5.Display Linked List"<<endl;
        cout<<"6.Reverse Linked List "<<endl;
        cout<<"7.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
        case 1:
            insert_begin();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            delete_pos();
            break;
        case 5:
            display();
            break;
        case 6:
            reverse();
            break;
        case 7:
            cout<<"Exiting..."<<endl;
            exit(1);
            break;  
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}
void insert_begin()
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
	    if (head == NULL)
	    {
	        head = temp;
	        head->next = NULL;          
	    } 
	    else
	    {
	        p = head;
	        head = temp;
	        head->next = p;
	    }
	}
	cout<<endl;
}
 

void insert_last()
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
	    p = head;
	    while (p->next != NULL)
	    {         
	        p = p->next;        
	    }
	    p->next = temp;
	}
	cout<<endl;
}

void insert_pos()
{
    int item, pos, counter = 0; 
     cout<<"Enter the postion at which node to be inserted: ";
    cin>>pos;
    cout<<"Enter the item to be inserted: ";
    cin>>item;
    node *temp, *p, *ptr;
     temp =new node;
    if(temp==NULL)
	{
		cout<<"No free memory available,sorry! :(";
	}
	else
	{
		temp->val=item;
		temp->next=NULL;
	}
    int i;
    p = head;
    while (p != NULL)	//calculates length of list
    {
        p = p->next;
        counter++;
    }
    if (pos == 1)
    {
    	insert_begin();
    }
    else if (pos > 1  && pos <= counter)
    {
        p = head;
        for (i = 1; i < pos; i++)
        {
            ptr = p;
            p = p->next;
        }
        ptr->next = temp;
        temp->next = p;
    }
	//    else if(pos==counter+1)
	//    insert_last();
    else
    {
        cout<<"Positon out of range"<<endl;
    }
    cout<<endl;
}
 

void delete_pos()
{
    int pos, i, counter = 0;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of item to be deleted: ";
    cin>>pos;
    node *p, *ptr;
    p = head;
    if (pos == 1)
    {
        head = p->next;
    }
    else
    {
        while (p != NULL)	//calulate length of the list
        {
            p = p->next;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            p = head;
            for (i = 1;i < pos;i++)
            {
                ptr = p;
                p = p->next;
            }
            ptr->next = p->next;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        cout<<p->val<<" Deleted"<<endl;
		delete(p);
        
    }
}
 
void reverse()
{
    node *ptr1, *ptr2, *ptr3;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (head->next == NULL)
    {
        return;
    }  
    ptr1 = head;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;         
    }
    head = ptr2;
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
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
