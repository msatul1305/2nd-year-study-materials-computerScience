//starting with aba
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[5][2]={1,4,4,2,3,4,3,3,4,4};
 gets(str);
 l=strlen(str);
 int crt=0;
 while(i!=l)
 {
  int n=str[i]-'a';
  crt=arr[crt][n];
  i++;
 }
 if(crt==3)
 printf("accepted");
 else
 printf("not accepted");
}
