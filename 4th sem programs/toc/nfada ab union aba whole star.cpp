#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N_SYM 2
#define N_STATE 7
char nfa[N_STATE][N_SYM][5]={{"1",""},{"","2"},{"3",""},{"1","2"}};
char dfa[1][N_SYM+1][5];
int cRow=1, cClm=0;
void sort(char *str)
{
	int len=strlen(str);
	int i,j;
	for(i=0;i<len;i++)
		for(j=0;j<len;j++)
			if(str[i]<str[j])
				str[i]=(str[i]+str[j])-(str[j]=str[i]);
}

int addNewState(char *str)
{
    int i;
    for(i=0;i<cRow;i++) 
                       if(!strcmp(dfa[i][0],str))
                                                 return 0;
    strcpy(dfa[cRow][0],str);
    cRow++;
    return 1;
}
void addString(char *str1, char *str2)
{
     int i,j;
     for(i=0;i<strlen(str2);i++)
     {
                                for(j=0;j<strlen(str1);j++)
                                                           if(str2[i]==str1[j])break;
                                if(j==strlen(str1))
                                {
                                 	str1[j]=str2[i];
                                 	str1[j+1]='\0';
                                }
     }
     sort(str1);
}
void nfa_dfa()
{
	int i,j,s=0;
	dfa[0][0][0]='0';
	dfa[0][0][1]='\0';
	char str[10]="";
	do
	{
                     		 for(i=1;i<=N_SYM;i++)
                      	{
                                           	for(j=0,str[0]='\0';j<strlen(dfa[s][0]);j++)
                                           	{
				addString(str,nfa[dfa[s][0][j]-48][i-1]);
			}
			strcpy(dfa[s][i],str);
			addNewState(str);
		}
	}while(s++<cRow);
     
}
int main()
{
	int i=0,j=0;
	nfa_dfa();
	printf("STATES");
	for(i=0;i<N_SYM;i++)
		printf("\t  %d",i);
	printf("\n");
	for(i=0;i<cRow;i++,printf("\n\n"))
		for(j=0;j<=N_SYM;j++){
			if(strcmp(dfa[i][j],"")==0)
				printf("()\t");
				else
			printf("(%s)\t",dfa[i][j]);
		}
	//getch();
	return 0;				
}
