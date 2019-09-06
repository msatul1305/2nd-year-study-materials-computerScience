#include<iostream>
#include<string.h>
using namespace std;
main(){
char str[100];
cout<<"enter the string";
cin>>str;
int l=strlen(str);
int i,j,k;
int bitmsk=1<<l;
for(i=0;i<bitmsk;i++){
	//if(i==0)cout<<"empty subsequence";
		for(j=0;j<l;j++){
			if(i&(1<<j))cout<<str[j];
			}
			if(i!=0)cout<<" ";
	}
	cout<<endl;

}
