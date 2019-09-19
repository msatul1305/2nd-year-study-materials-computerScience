//1 in 3rd pos from right
#include<iostream>
#include<string.h>
using namespace std;
char mat[4][2][3] = {{"01","03"},{"2",""},{"2","2"},{"","2"}};
char str[100];
int l,count = 0;

void solve(int c,int i){
	if(i<=l){
		for(int p = 0;p<strlen(mat[c][str[i]-'0']) ;p++)
			solve(mat[c][str[i]-'0'][p] - '0',i+1);
		if(i == l && c == 2)
				count++;		
	}
}

int main(){
	cin>>str;
	l = strlen(str);
	solve(0,0);
	if(count>0)
		cout<<"Accepted in "<<count<<" number of ways\n";
	else
		cout<<"Not Accepted\n";
	return 0;
}

