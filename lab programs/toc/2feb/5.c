//not a substring as 101
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[4][2]={0,1,2,1,0,3,3,3};
 printf("not a substring as 101\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'&&str[i]!='1')
  {
   printf("string not permissible\n");
   goto label;
  }
  i++;
 }
 i=1;
 int crt=str[0]-'0';
 while(i!=l)
 {
  int n=str[i]-'0';
  crt=arr[crt][n];
  i++;
 }
 if(crt==3)
 printf("not accepted");
 else
 printf("accepted");
}
