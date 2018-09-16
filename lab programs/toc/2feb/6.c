//substring with abab
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[5][2]={1,0,1,2,3,0,1,4,4,4};
 printf("substring with abab\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='a'&&str[i]!='b')
  {
   printf("string not permissible\n");
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
 if(crt==4)
 printf("accepted");
 else
 printf("not accepted");
}
