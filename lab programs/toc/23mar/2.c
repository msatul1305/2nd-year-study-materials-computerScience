//ends with 11, 10
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],res;
 int l,i=0,arr[4][2]={0,1,3,2,3,2,0,1};
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 int crt=0;
 i=0;
 printf("C");
 while(i!=l)
 {
  	int n=str[i]-'0';
  	//val=val+10*i+n;
  	crt=arr[crt][n];
  	i++;
  	if(crt==2)
  	{
  		printf("A");
  		res='A';
	}
	
	else if(crt==3)
	{
		res='B';
		printf("B");
	}
	else
	{
		printf("C");
		res='C';
	}
 }
 printf("\nresult is %c",res);
}
