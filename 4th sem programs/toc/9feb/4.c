//anbm
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[4][2]={1,2,1,2,3,2,3,3};
 printf("anbm\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='a'&&str[i]!='b')
  {
   printf("%c ",str[i]);
   printf("string not accepted:");
   goto label;
  }
  i++;
 }
 i=0;
 int crt=0;
 while(i!=l)
 {
  int n=str[i]-'a';
  crt=arr[crt][n];
  i++;
 }
 if(crt==1||crt==2)
 printf("accepted");
 else
 printf("not accepted");
}