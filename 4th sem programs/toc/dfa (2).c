#include<stdio.h>
//#include<string.h>
//#include<process.h>
int main(){
int c=0,cst,l,i=0,arr[4][2]={1,2,1,2,3,2,3,3};
char str[100];
char ch;
printf("enter the string to check for (a^m*b^n)");
scanf("%s",str);
l=strlen(str);
while(i<l){
if(str[i]!='a'&&str[i]!='b'){
printf("invalid string");
exit(0);
}
i++;
}

i=0;
while(i<l){
ch=str[i]-97;
cst=arr[cst][ch];
i++;
}
if(cst==1||cst==2)printf("accepted");
else printf("not accepted");

return 0;
}
