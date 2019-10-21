#include<iostream>
using namespace std;
#include<fstream>
#include<stdlib.h>
void load1(int a[]);
void push1(int a[],int);
void pop1(int a[]);
void dis1(int a[]);
int size=10,top1=-1;
void load2(int a[]);
void push2(int a[],int);
void pop2(int a[]);
void dis2(int a[]);
int top2=-1;
int main()
{
    int v,k,s[size];
    char c;
    label:
        cout<<"menu\n1.push1\n2.pop1\n3.display1\n4.load data from file1\n5.push2\n6.pop2\n7.display2\n8.load data from file2:\n";
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
        	load1(s);
        	break;
        case 5:
            cout<<"enter a value:";
            cin>>v;
            push2(s,v);
            break;
        case 6:
            pop2(s);
            break;
        case 7:
            dis2(s);
            break; 
		 case 8:
        	load2(s);
        	break;	   
        }
        cout<<"\n enter y for continuing session or enter n for session ending:";
        cin>>c;
        if(c=='y')
            goto label;
        else if(c=='n')
            exit(0);
}
void load1(int s[10])
{
	ifstream fin;
	fin.open("file.txt",ios::in);
	int item;
	while(!fin.eof())
	{
		if(top1+top2<size-2)
		{
			top1++;
			fin>>item;
		    s[top1]=item;
		}
		else
		{
			cout<<"overflow";
			break;
		}
	}
	dis1(s);
	fin.close();
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
void load2(int s[10])
{
	ifstream fin;
	fin.open("file1.txt",ios::in);
	int item;
	while(!fin.eof())
	{
		if(top1+top2<size-2)
		{
			top2++;
			fin>>item;
		    s[size-1-top2]=item;
		}
		else
		{
			cout<<"overflow";
			break;
		}
	}
	dis2(s);
	fin.close();
}
