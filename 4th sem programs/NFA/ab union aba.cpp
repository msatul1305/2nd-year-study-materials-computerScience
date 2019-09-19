#include<stdio.h>
#include<string.h>
char tt[4][2][3]={{"1",""},{"","2"},{"13",""},{"1",""}};
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
	if(i==l && (cst==2 || cst==3 || cst==0))
	{
		count++;
		printf("Accepted\n");
	}
}
