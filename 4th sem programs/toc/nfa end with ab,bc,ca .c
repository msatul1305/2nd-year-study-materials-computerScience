#include<stdio.h>
#include<string.h>
char tt[5][3][3]={{"01","02","03"},{"","4",""},{"","","4"},{"4","",""},{"","",""}};
char str[10];
int l,count=0;
void rec(int cst, int i);
main()
{
	printf("Enter the string\n");
	scanf("%s",str);
	l=strlen(str);
	rec(0,0);
	if(count==0)
		printf("Rejected\n");
	else
		printf("Accepted in %d ways\n",count);
	return 0;
}

void rec(int cst, int i)
{
	int id;
	for(id=0;id<strlen(tt[cst][str[i]-'a']) && i<l;id++)
		rec((tt[cst][str[i]-'a'][id]) - '0',i+1);
	if(i==l && (cst==4))
	{
		count++;
		printf("Accepted\n");
	}
}

