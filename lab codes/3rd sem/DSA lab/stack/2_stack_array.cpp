#include<iostream>
using namespace std;
#include<stdlib.h>
void push1(int a[],int);
void pop1(int a[]);
void dis1(int a[]);
int size=10,top1=-1;
void push2(int a[],int);
void pop2(int a[]);
void dis2(int a[]);
int top2=-1;
int main()
{
    int v,k,s[size];
    char c;
    label:
        cout<<"menu\n1.push1\n2.pop1\n3.display1\n4.push2\n5.pop2\n6.display2::\n";
        cin>>k;
        switch(k)
        {
        case 1:
            cout<<"enter a value:";
            cin>>v;
            push1(s,v);
            break;
        case 2:
            pop1(s);
            break;
        case 3:
            dis1(s);
            break;
        case 4:
            cout<<"enter a value:";
            cin>>v;
            push2(s,v);
            break;
        case 5:
            pop2(s);
            break;
        case 6:
            dis2(s);
            break;    
        }
        cout<<"\n enter y for continuing session or enter n for session ending:";
        cin>>c;
        if(c=='y')
            goto label;
        else if(c=='n')
            exit(0);
}

void push1(int s[10],int v)
{

    if(top1+top2==size-2)
        cout<<"overflow ";
    else
    {
        top1++;
        s[top1]=v;
    }
    dis1(s);
}

void pop1(int s[10])
{

    if(top1==-1)
        cout<<"underflow";
    else
        top1--;
    dis1(s);
}
void dis1(int s[10])
{

    for(int i=0;i<=top1;i++)
        cout<<s[i]<<" ";
}


void push2(int s[10],int v)
{

    if(top1+top2==size-2)
        cout<<"overflow ";
    else
    {
        top2++;
        s[size-1-top2]=v;
    }
    dis2(s);
}

void pop2(int s[10])
{

    if(top2==-1)
        cout<<"underflow";
    else
        top2--;
    dis2(s);
}
void dis2(int s[10])
{

    for(int i=size-1;i>=size-1-top2;i--)
        cout<<s[i]<<" ";
}
