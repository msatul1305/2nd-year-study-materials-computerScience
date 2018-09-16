#include<bits/stdc++.h>
#include<climits>
using namespace std;
typedef tuple<int,int,int> i3tuple;
main()
{
	vector <pair<int,int>> adj[6];
	vector <i3tuple> tree;
	adj[1].push_back({2,5});
	adj[1].push_back({4,3});
	adj[1].push_back({5,1});
	adj[2].push_back({1,5});
	adj[2].push_back({3,2});
	adj[3].push_back({2,2});
	adj[3].push_back({4,6});
	adj[4].push_back({1,9});
	adj[4].push_back({3,6}); 
	adj[4].push_back({5,2});
	adj[5].push_back({1,1});
	adj[5].push_back({4,2});

	priority_queue< i3tuple , vector< i3tuple >, greater< i3tuple > > q;
	int dis[5],n=5;
	bool processed[5];
	for(int i=1;i<=n;i++)
	{
		dis[i]=INT_MAX;
		processed[i]=false;
	}
	int x=1;
	dis[x]=0;
	q.push(i3tuple{0,1,1});
	while(!q.empty())
	{
		int wt=get<0>(q.top()), c=get<1>(q.top()), a=get<2>(q.top());
		q.pop();
		if(processed[a])
		continue;
		processed[a]=true;
		if(a!=c)
		{
			tree.push_back(i3tuple{wt,a,c});
		}
		for(auto u:adj[a])
		{
			int b=u.first,w=u.second;
			if(w<dis[b])
			{
				dis[b]=w;
				q.push(i3tuple{dis[b],a,b});
			}
		}
	}
	for(i3tuple t: tree)
  	{
        cout <<"weight: "<< get<0>(t)<<"  edge: "<< get<1>(t)<<"-"<<get<2>(t)<<"\n";
    };
}
