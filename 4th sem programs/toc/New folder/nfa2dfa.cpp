#include<stdio.h>
#include<string.h>

char nstate[4][2][5]={{"01","03"},{"2",""},{"2","2"},{"","2"}};
char dstate[50][50]={'\0'},k='4',d='D',l;
int i,j;

int main()
{
 for(i=0;i<4;i++)
  for(j=0;j<2;j++)
  {
  	if(strlen(nstate[i][j])>1)
  	{
	 dstate[i][j]=k;
	 if(dstate[nstate[i][j][0]-48][0]!=dstate[nstate[i][j][1]-48][0])
	 {
	  l=k+1;
	  dstate[k][0]=l;
	  k=k+1;
     }
	 else
	 {
	  dstate[k][0]=nstate[i][j][0];	
	 }
	 if(dstate[nstate[i][j][0]-48][1]!=dstate[nstate[i][j][1]-48][1])
	 {
	  l=k+1;
	  dstate[k][1]=l;
	  k=k+1;
     }
	 else
	 {
	  dstate[k][1]=nstate[i][j][1];	
	 }
	 k=k+1;
    }
    else if(strlen(nstate[i][j])==0)
    {
     dstate[i][j]=d;
	}
	else
	{
	 dstate[i][j]=nstate[i][j][0];
	}
  }
 for(i=0;i<k;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%c\t",dstate[i][j]);
  }
  printf("\n");
 }
}

