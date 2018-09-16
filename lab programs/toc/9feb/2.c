//odd no of 1
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[2][2]={0,1,1,0};
 printf("odd no of 1\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'&&str[i]!='1')
  {
   printf("string not permissible:\n");
   goto label;
  }
  i++;
 }
 int crt=0;
 i=0;
 while(i!=l)
 {
  int n=str[i]-'0';
  crt=arr[crt][n];
  i++;
 }
 if(crt==1)
 printf("accepted");
 else
 printf("not accepted");
}
