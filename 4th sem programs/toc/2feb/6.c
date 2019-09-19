//substring with abab
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[5][2]={1,0,1,2,3,0,1,4,4,4};
 gets(str);
 l=strlen(str);
 int crt=0;
 while(i!=l)
 {
  int n=str[i]-'a';
  crt=arr[crt][n];
  i++;
 }
 if(crt==4)
 printf("accepted");
 else
 printf("not accepted");
}
