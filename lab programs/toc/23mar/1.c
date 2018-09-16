//abab
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,cnt=0,i=0,arr[5][2]={1,0,1,2,3,0,1,4,1,0};
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 int crt=0;
 i=0;
 printf("0");
 while(i!=l)
 {
  	int n=str[i]-'a';
  	crt=arr[crt][n];
  	i++;
  	if(crt==4)
  	{
  		printf("1");
  		cnt++;
	}
	else
	printf("0");
 }
 printf("\nno of occurences: %d",cnt);
}
