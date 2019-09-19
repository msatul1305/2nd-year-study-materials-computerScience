#include<iostream>
using namespace std;
main()
{
	string s1,s2,res;
	cin>>s1>>s2;
	int l1=s1.length(),l2=s2.length();
	int arr[l1+1][l2+1];
	for(int i=0;i<=l1;i++)
	{
		for(int j=0;j<=l2;j++)
			arr[i][j]=0;
	}
	int ct=0;
	for(int i=1;i<=l1;i++)
	{
		for(int j=1;j<=l2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				arr[i][j]=arr[i-1][j-1]+1;
				if(ct<arr[i][j])
				{
					ct++;
					res=res+s1[i-1];
				}
			}
			else
			{
				if(arr[i][j-1]>arr[i-1][j])
				arr[i][j]=arr[i][j-1];
				else
				arr[i][j]=arr[i-1][j];
			}
		}
	}
	cout<<ct<<" "<<res;
	
}
