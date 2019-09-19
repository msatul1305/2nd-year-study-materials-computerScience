#include<bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> i3tuple;
int link[20],size[20];

int find(int x) 
{
	while (x != link[x]) 
	x = link[x];
	return x;
}

void unite(int a, int b) 
{
	a = find(a);
	b = find(b);
	if (size[a] < size[b]) swap(a,b);
	size[a] += size[b];
	link[b] = a;
}

bool same(int a, int b) 
{
	return find(a) == find(b);
}

int main()
{
	vector <i3tuple> edge;
	vector <i3tuple> tree;
	int n=5,ed=6;
	edge.push_back(i3tuple{5,1,2});
	edge.push_back(i3tuple{2,2,3});
	edge.push_back(i3tuple{6,3,4});
	edge.push_back(i3tuple{9,1,4});
	edge.push_back(i3tuple{1,1,5});
	edge.push_back(i3tuple{2,4,5});
	
	sort(edge.begin(),edge.end(),
       [](const i3tuple& a,
       const i3tuple & b) -> bool
       {
         return get<0>(a) < get<0>(b);
       });
       
    for (int i = 1; i <= ed; i++) 
    link[i] = i;
	for (int i = 1; i <= ed; i++) 
	size[i] = 1;
	
	for(auto t: edge)
	{
		int a,b,w;
		tie(w,a,b)=t;
		if(!same(a,b))
		{
			tree.push_back(i3tuple{w,a,b});
			unite(a,b);
		}
	}
	
	cout<<"graph:\n";
	for(i3tuple t: edge)
  	{
        cout << "weight:"<<get<0>(t)<<" edge:"<< get<1>(t)<<"-"<<get<2>(t)<<"\n";
    };
    cout<<"tree:\n";
	for(i3tuple t: tree)
  	{
        cout << "weight:"<<get<0>(t)<<" edge:"<< get<1>(t)<<"-"<<get<2>(t)<<"\n";
    };
}
