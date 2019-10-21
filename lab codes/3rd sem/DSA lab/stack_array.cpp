#include<iostream>
using namespace std;
#include<stdlib.h>
void push(int a[],int);
void pop(int a[]);
void dis(int a[]);
int size=10,top=-1;
int main()
{
    int v,k,s[size];
    char c;
    label:
        cout<<"menu\n1.push\n2.pop\n3.display:\n";
        cin>>k;
        switch(k)
        {
        case 1:
            cout<<"enter a value:";
            cin>>v;
            push(s,v);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            dis(s);
            break;
        }
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
