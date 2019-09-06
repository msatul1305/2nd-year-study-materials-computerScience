 #include<iostream>
 #include<fstream>
#include<stdlib.h>
//ifstream *f1;
using namespace std;
const int n=5;
int top=-1;
	void push(int []);
	void pop(int []);
	void disp(int []);
main()
{
	int stack[n];
	int num;
	while(num!=4)
	{
	cout<<"choose your option:\n1.push\n2.pop\n3.Display\n4.Exit\n";
	cin>>num;
	switch(num)
	{
		case 1:push(stack);break;
		case 2:pop(stack);break;
		case 3:disp(stack);break;
		case 4:exit(0);
		//what is endl?

	}
	}
}
void push(int s[])
{
	ifstream f1;
    f1.open("file.txt",ios::in);
	int ch=1,item;
	while(!f1.eof())
	{
	    f1>>item;
        if(top==n-1)
		cout<<"over flow,can't push anymore!\n";
		else
		{
		top++;
		s[top]=item;
		}
	}
		cout<<"File Items Sucessfully Pushed Onto Stack";
		f1.close();

}
void pop(int s[])
{
	int item;
	if(top==-1)
	cout<<"underflow!Can't Delete anymore....\n";
	else
	{
		item=s[top];
		top--;
		cout<<item<<" is Deleted!\n";
	}
}
void disp(int s[])
{
	for(int i=0;i<=top;i++)
	cout<<s[i]<<"\t";
	cout<<"\n";
}
