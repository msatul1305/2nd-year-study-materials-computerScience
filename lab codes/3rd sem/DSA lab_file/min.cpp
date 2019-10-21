#include<iostream>
using namespace std;
#include<fstream>
#include<stdlib.h>
void push(int a[],int);
void pop(int a[]);
void dis(int a[]);
void isEmpty();
void isFull();
void getMin(int a[]);
void load(int a[]);
int size=10,top=-1;
int main()
{
    int v,k,s[size];
    char c;
    label:
        cout<<"menu\n1.push\n2.pop\n3.display\n4.minimum\n5.isEmpty\n6.isFull\n7.load data from file:\n";
        cin>>k;
        if(k==1)
        {
            cout<<"enter a value:";
            cin>>v;
            push(s,v);
        }
        else if(k==2)
            pop(s);
        else if(k==3)
            dis(s);
        else if(k==4)
             getMin(s);
        else if(k==5)
             isEmpty();
        else if(k==6)
             isFull();
        else if(k==7)
             load(s);
        cout<<"\n enter y for continuing session or enter n for session ending:";
        cin>>c;
        if(c=='y')
            goto label;
        else if(c=='n')
            exit(0);
}

void push(int s[10],int v)
{

    if(top==size-1)
        cout<<"overflow ";
    else
    {
        top++;
        s[top]=v;
    }
    dis(s);
}

void pop(int s[10])
{

    if(top==-1)
        cout<<"underflow";
    else
        top--;
    dis(s);
}
void dis(int s[10])
{
        for(int i=0;i<=top;i++)
        cout<<s[i]<<" ";
}
void getMin(int s[10])
{
    int m;
    if(top==-1)
        cout<<"no elements";
    else
    {
        m=s[0];
        for(int i=1;i<=top;i++)
        {
            m=m<s[i]?m:s[i];
        }
        cout<<m<<endl;
    }
}
void isEmpty()
{
    if(top==-1)
        cout<<"stack is empty";
    else
        cout<<"not empty";
}
void isFull()
{
    if(top==size-1)
        cout<<"stack is full";
    else
        cout<<"not full";
}
void load(int s[10])
{
	ifstream fin;
	fin.open("file.txt",ios::in);
	int item;
	while(!fin.eof())
	{
		if(top<size)
		{
			top++;
			fin>>item;
		    s[top]=item;
		}
		else
		{
			cout<<"overflow";
		}
	}
	dis(s);
}
