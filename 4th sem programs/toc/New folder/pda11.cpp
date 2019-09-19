#include<stdio.h>
#include<string.h>
int top=-1;
char stack[15];
void push( char ch)
{
	stack[++top]=ch;
}
void pop()
{
	stack[top--];
}
int main()
{
	char str[50];
	printf("Enter the string: ");
	gets(str);
	int cst=0,state=0;
	int l=strlen(str);
	push('z');
	for(int i=0;i<l;i++)
	{
		if(str[i]=='a' && stack[top]=='z' &&cst==0)
		{
			push('a');
			cst=0;
		}
		else if(str[i]=='a' && stack[top]=='a' && cst==0)
		{
			push('a');
			cst=0;
		}
		else if(str[i]=='b' && stack[top]=='a' && cst==0)
		{
			pop();
			cst=1;
		}
		else if(str[i]=='b' && stack[top]=='a' && cst==1)
		{
			pop();
			cst=1;
		}	
		else if(str[i]=='b' && stack[top]=='z'&& cst==1)
		{
			pop();
			cst=1;
		}
	
	}
	if(stack[top]=='z' && cst==1)
	{
		printf("Accepted");
		cst=2;
	}
	else 
		printf("Rejected");
		
	return 0;

}


