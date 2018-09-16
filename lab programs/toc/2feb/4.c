//not starting with 110
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[5][2]={4,1,4,2,3,4,3,3,4,4};
 printf("not starting with 110\n");
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
 int crt=str[0]-'0';
 i=1;
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
