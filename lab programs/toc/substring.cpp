#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			for(int k=j;k<=i;k++){
				cout<<s[k];
				}
				cout<<" ";
			}
			cout<<endl;
	}
}
