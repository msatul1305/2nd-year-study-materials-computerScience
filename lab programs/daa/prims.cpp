#include<iostream>
using namespace std;
#include<climits>
int prims(int graph[4][4],int temp[4][4],int tree[4][4],bool *check,int val)
{
	for(int i=0;i<4;i++)
	{
		if(!check[i])
		{
			temp[val][i]=graph[val][i];
			temp[i][val]=graph[i][val];
		}
	}
	
	int min=INT_MAX,a,b;
	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(temp[i][j]!=0 && temp[i][j]<min && (check[i]==false || check[j]==false))
			{
				min=temp[i][j];
				a=i;
				b=j;
			}
		}
	}
	tree[a][b]=min;
	tree[b][a]=min;
	return b;
}
main()
{
	int graph[4][4]={{0,4,7,0},
	{4,0,2,0},
	{7,2,0,8},
	{0,0,8,0}};
	
	cout<<"graph\n";
    for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<graph[i][j]<<" ";
		cout<<"\n";
	}
	
	int temp[4][4],tree[4][4];
	bool check[4];
	for(int i=1;i<=4;i++)
		check[i]=false;
		
	//temp
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		temp[i][j]=INT_MAX;
	}
	
	//tree
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		tree[i][j]=0;
	}
	int val = 0;
	check[0]=true;
	label:
	val=prims(graph,temp,tree,check,val);
	check[val]=true;
	for(int i=0;i<4;i++)
	{
		if(!check[i])
		goto label;
	}
	
	cout<<"tree\n";
    for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<tree[i][j]<<" ";
		cout<<"\n";
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(tree[i][j]!=0)
			cout<<i<<"-"<<j<<" w:"<<tree[i][j]<<"\n";
		}
	}
}
