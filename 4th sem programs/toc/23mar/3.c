//odd no of 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[100];
 int val=0,res,l,i=0,arr[4][3]={0,1,2,3,0,1,2,3,0,1,2,3};
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 int crt=0;
 i=0;
 printf("0");
 while(i!=l)
 {
 	int n=str[i]-'0';
  	val=val+pow(3,i)*n;
  	crt=arr[crt][n];
  	i++;
  	if(crt==0)
  	{
  		res=0;
  		printf("0");
	}
	else if(crt==1)
	{
		res=1;
  		printf("1");
	}
	else if(crt==2)
	{
		res=2;
  		printf("2");
	}
	else 
	{
		res=3;
  		printf("3");
	}
 }
 printf("\nremainder of %d: %d",val,res);
}
