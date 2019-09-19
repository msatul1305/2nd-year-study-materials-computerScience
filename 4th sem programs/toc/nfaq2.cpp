//(ab)*(ba)* union (a)a*
#include<iostream>
#include<string.h>
using namespace std;
char mat[6][2][5] = {{"15","3"},{"2","2"},{"1","3"},{"4",""},{"","3"},{"5",""}};
char str[100];
int l,count = 0;

void solve(int c,int i){
	if(i<=l){
		for(int p = 0;p<strlen(mat[c][str[i]-'a']) ;p++)
			solve(mat[c][str[i]-'a'][p] - '0',i+1);
		if(i == l && (c == 2 || c==4 || c==5))
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

