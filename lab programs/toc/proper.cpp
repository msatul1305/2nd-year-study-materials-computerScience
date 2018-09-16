#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
main()
{
	char s[10];
	int l;
	gets(s);
	l=strlen(s);
	printf("proper prefix               proper suffix\n");
	for(int i=0;i<l;i++)
	{
		char ps[10],ss[10];
		for(int k=0;k<=i;k++)
		ps[k]=s[k];
		for(int j=l-i-1;j<l;j++)
		ss[j-(l-i-1)]=s[j];
		if(ss!=ps)
		printf("%s\t\t\t\t%s\n",ps,ss);
	}
}
