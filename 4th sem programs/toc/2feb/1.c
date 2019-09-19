//ending with 100
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int check,l,i=0,arr[4][2]={0,1,2,1,3,1,0,1};
 printf("ending with 100\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'||str[i]!='1')
  {
   printf("%c ",str[i]);
   printf("string not accepted:");
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
 printf("accepted");
 else
 printf("not accepted");
}
