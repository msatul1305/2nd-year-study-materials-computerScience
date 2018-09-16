//divisible by 4
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[4][4]={0,1,2,3,2,3,0,1,0,1,2,3,2,3,0,1};
 printf("divisible by 4\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'&&str[i]!='1'&&str[i]!='2'&&str[i]!='3'&&str[i]!='4'&&str[i]!='5'&&str[i]!='6'&&str[i]!='7'&&str[i]!='8'&&str[i]!='9')
  {
   printf("string not permissible:");
   goto label;
  }
  i++;
 }
 int crt=(str[0]-'0')%4;
 i=1;
 while(i!=l)
 {
  int n=str[i]-'0';
  crt=arr[crt][n%4];
  i++;
 }
 if(crt==0)
 printf("accepted");
 else
 printf("not accepted");
}
