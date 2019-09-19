#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<char> arr;
	string str;
	cout<<"Enter the string\n";cin>>str;
	arr.push('z');
	int i = 0,m = str.length()/2;
	for(;i < m;i++)
		arr.push(str[i]);		
	for(;i < str.length();i++){
		if(str[i] == arr.top())
			arr.pop();
		else
			break;	
	}
	if(arr.top()=='z' && i == str.length())
		printf("Accepted\n");
	else
		printf("Rejected\n");	
	return 0;
}

