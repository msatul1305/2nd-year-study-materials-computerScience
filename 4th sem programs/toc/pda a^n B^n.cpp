#include<bits/stdc++.h>
using namespace std;
main(){
//	int t;
//	cin>>t;
//	while(t--){
		stack<char>arr;
		string str;
		cout<<"Enter the string\n";
		cin>>str;
		arr.push('z');
		int i=0;
		for(;i<str.length();i++){
		if(str[i]=='a')
				arr.push('a');
			else 
				break;
		}
		for(;i<str.length();i++){
		if(str[i]=='b'&&arr.top()!='z')
			arr.pop();
			else 
				break;
		}
		if(str[i]=='c'&&arr.top()=='z')
		//if(arr.top()=='z'&&i==str.length())
			printf("accepted\n");
		else
			printf("rejected\n");	
			//}
			return 0;
}
