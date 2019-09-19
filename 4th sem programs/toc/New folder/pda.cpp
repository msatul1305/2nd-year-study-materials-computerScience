#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[20];int j=0;
cout<<"Enter a String\n";
	cin>>x;
	vector<char> s;
	vector<char>::iterator i;
	s.push_back('@');
	while(x[j]=='a')
	{
		s.push_back(x[j]);
		j++;
	}
	while(j<strlen(x))
	{
		if(x[j++]=='b')
			s.pop_back();
		else
		{			
			cout<<"\nReject\n";
			exit(0);
		}
	}
	if(*(s.end()-1)=='@')
		cout<<"\n Accept\n";
	else
		cout<<"\nReject\n";
 
	return 0;
}
 
 
 
//PDA 2
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[20];int j=0,l;
	label:
	cout<<"Enter a String\n";
	cin>>x;
	l=strlen(x);
	if(l%2!=0)
	{
		cout<<" \nRejected";
		exit(0);
	}
	vector<char> s;
	vector<char>::iterator i;
	s.push_back('@');
	while(j<l)
	{
		if(j<(l/2)){
			s.push_back(x[j]);
		}
		else
		{
 
			if(x[j]!=*(s.end()-1))
			{
				cout<<" \nRejected\n";
				exit(0);
			}
			else
			{
				s.pop_back();				
			}
		}
		j++;
	}
	cout<<"\nAccepted\n";
	return 0;
}