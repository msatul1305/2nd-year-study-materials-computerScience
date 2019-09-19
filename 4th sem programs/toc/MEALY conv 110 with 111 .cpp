#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int trans[6][2]={{0,1},{0,2},{3,2},{0,1}};
char out[6][2]={{'0','1'},{'0','1'},{'1','1'},{'0','1'}};
int main()
{	
	char str[100],ch;
	int i,l,cst=0,o;
	cout<<"Enter the string:\n";
	cin>>str;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		ch=str[i]-48;
		cout<<out[cst][ch];
		o=cst;
		cst=trans[cst][ch];
	}
//	cout<<"\nOutput: "<<out[o][ch];
	return 0;
}



