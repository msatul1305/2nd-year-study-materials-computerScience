#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string temp[4][100],suff[4],pref[4];
	int k=0,l=0;
	cout<<"suffixes are:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cout<<s[j];
			temp[i][k++]=s[j];
			}
			suff[l++]=temp[i];
			cout<<endl;
			}
			cout<<endl;
				for(int i=0;i<4;i++)
					cout<<suff[i]<<" ";
				cout<<"k after suffix="<<k;
		cout<<"Prefixes are:"<<endl;
		k=0;l=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<s[j];
				pref[k++]=s[j];
			}
			cout<<endl<<"k afterprefix="<<k;
	}cout<<endl;
	
	
	
}
