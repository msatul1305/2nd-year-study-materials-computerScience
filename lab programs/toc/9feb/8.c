//string with substring 00 but not 000
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[6][2]={1,0,2,0,5,3,4,3,2,3,5,5};
 printf("string with substring 00 but not 000\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'&&str[i]!='1')
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
  int n=str[i]-'0';
  crt=arr[crt][n];
  i++;
 }
 if(crt==2||crt==3||crt==4)
 printf("accepted");
 else
 printf("not accepted");
}
