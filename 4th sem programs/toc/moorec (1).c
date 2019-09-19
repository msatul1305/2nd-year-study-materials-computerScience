#include<stdio.h>
#include<string.h>
int main(){
	int arr[5][2]={1,0,1,2,3,0,1,4,1,0};
	int c=0,cst,i=0,l,count=0;
	char str[100],ch;
	printf("enter the string for no of occurances of abab:\n");
	scanf("%s",str);
	l=strlen(str);
	cst=0;
	while(i<l){
		if(str[i]!='a'&&str[i]!='b'){
			printf("invalid string..exiting..");
			exit(0);
		}
		i++;
	}
	i=0;
	printf("0");
	while(i<l){
		ch=str[i]-97;
		cst=arr[cst][ch];
		if(cst==4){
			printf("1");
			count++;
		}
		else {
			printf("0");
		}
		
		i++;
	}
	printf("\nthe no of occurances of abab is %d\n",count);
	
	
}
