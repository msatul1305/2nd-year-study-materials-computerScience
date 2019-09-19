#include<stdio.h>
int main(){
int c=0,cst,l,i=0,arr[5][2]={1,3,1,2,1,2,4,3,4,3};
char str[100],ch;
printf("enter the string to check for start and end with same symbol:");
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
ch=str[i]-'a';
cst=arr[cst][ch];
i++;
}
if(cst==1||cst==3)printf("accepted");
else printf("not accepted");

return 0;
}
