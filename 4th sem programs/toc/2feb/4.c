//not starting with 110
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=1,arr[5][2]={4,1,4,2,3,4,3,3,4,4};
 gets(str);
 l=strlen(str);
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
