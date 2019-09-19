#include<stdio.h>
#include<string.h>
char tt[6][2][3]={{"15","3"},{"","2"},{"1","3"},{"4",""},{"","3"},{"5",""}};
char str[50];
int l,count=0;
void rec(int cst, int i)
{
	if(i==l)
	{
		if(cst==0||cst==2||cst==4||cst==5)
		count++;
	}
	else
	{
		int val=str[i]-'a',j=0,temp=cst;
		for(j=0;j<2;j++)
		{
			cst=tt[temp][val][j]-'0';
			rec(cst,i+1);
		}
	}

}

main()
{
	printf("Enter the string\n");
	scanf("%s",str);
	l=strlen(str);
	rec(0,0);
	if(count==0)
		printf("Rejected\n",count);
	else
		printf("Accepted\n",count);
	return 0;
}

