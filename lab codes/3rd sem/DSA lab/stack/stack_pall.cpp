#include<iostream>
using namespace std;
void push(int a[],int);
void pop(int a[]);
void dis(int a[]);
void pall();
static int m;
int size=10,top=-1,a1[10],a2[10];
int main()
{
    int v,k,s[size];
    char c;
    label:
        cout<<"menu\n1.push\n2.pop\n3.display:\n";
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
        a1[top]=v;
    }
    dis(s);
}

void pop(int s[10])
{
    static int j=0;
    m=top;
    if(top==-1)
    {
        cout<<"underflow\n";
        pall();
    }

    else
        {
            a2[j]=s[top];
            top--;
            j++;

        }
        dis(s);
}
void dis(int s[10])
{
    for(int i=0;i<=top;i++)
      {
          cout<<s[i]<<" ";

      }

}
void pall()
{
    int p=0,i=0;
    for(i=0;i<=m;i++)
    {
        if(a1[i]!=a2[i])
            p++;
    }
    if(p==0)
        cout<<"\npallindrome";
    else
        cout<<"not a pallindrome";
}
