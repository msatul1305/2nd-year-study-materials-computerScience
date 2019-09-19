#include<stdio.h>
#include<string.h>
int main(){
	int arr[4][2]={0,1,3,2,3,2,0,1};
	int c=0,cst,i=0,l,ch=0;
	char str[100],outpu;
	
	printf("enter the string for ending with 11 or 10:\n");
	scanf("%s",str);
	l=strlen(str);
	cst=0;
	//printf("string is %s,length is %d",str,l);
	while(i<l){
		if(str[i]!='0'&&str[i]!='1'){
			printf("invalid string..exiting..");
			exit(0);
		}
		i++;
	}
	i=0;
	//printf("%c",str[0]);
	printf("C");
	while(i<l){
		ch=str[i]-'0';
		cst=arr[cst][ch];
		//printf("current character=%d and cs=%d",ch,cst);
		if(cst==2){
			printf("A");
			outpu='A';
		}
		else if(cst==3){
			printf("B");
			outpu='B';
		}
		else {
			printf("C");
			outpu='C';
		}
		
		i++;
	}
	printf("\noutput is :%c\n",outpu);
	
	
}
