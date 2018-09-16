//string starting and ending with same symbol
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[5][2]={1,3,1,2,1,2,4,3,4,3};
 printf("string starting and ending with same symbol\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='a'&&str[i]!='b')
  {
   printf("string not permissible:");
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
 if(crt==1||crt==3)
 printf("accepted");
 else
 printf("not accepted");
}
