//string of even length
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[2][2]={1,1,0,0};
 printf("string of even length\n");
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
 if(crt==0)
 printf("accepted");
 else
 printf("not accepted");
}
