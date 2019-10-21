#include<iostream>
using namespace std;
#include<stdlib.h>
#define SIZE 5
void enqueue();
void dequeue();
void display();
int q[SIZE],front=0,rear=0;
main()
{
int ch;
while(1)
{
cout<<"\n 1.add element";
cout<<"\n 2.remove element";
cout<<"\n 3.display";
cout<<"\n 4.exit";
cout<<"\n enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
cout<<"\n invalid choice";
}
}
}
void enqueue()
{
int no;
if (rear==SIZE)
cout<<"overflow";
else
{
cout<<"enter the num:";
cin>>no;
q[rear]=no;
rear++;
display();
}
}

void dequeue()
{
int no,i;
if (front==rear)
cout<<"queue is empty";
else
{
no=q[front];
front++;
cout<<"\n"<<no<<" -removed from the queue\n";
}
}

void display()
{
if (front==rear)
cout<<"the queue is empty";
else
{
cout<<"element in the queue:";
for(int i=front;i<rear;i++)
cout<<q[i]<<" ";
}
}
