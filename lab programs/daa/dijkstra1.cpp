#include <iostream>
#include <limits.h>
using namespace std;
#define V 4

int minDistance(int dis[V],bool sptSet[V])
{
	int k,min=INT_MAX;
	for(int i=0;i<V;i++)
	{
		if(sptSet[i]==false&&dis[i]!=INT_MAX)
		{
			if(min>dis[i])
			{
				min=dis[i];
				k=i;
			}
		}
	}
	return k;
}
void print(int dis[V],int src)
{
	cout<<"source is "<<src<<":\n";
	for(int i=0;i<V;i++)
	{
		cout<<"shortest distance of "<<i<<" :"<<dis[i]<<"\n";
	}
}
void dijkstra(int graph[V][V],int src)
{
	int dis[V];
	bool sptSet[V];
	for(int i=0;i<V;i++)
	{
		dis[i]=INT_MAX;
		sptSet[i]=false;
	}
	dis[src]=0;
	for(int i=0;i<V-1;i++)
	{
		int u=minDistance(dis,sptSet);
		sptSet[u]=true;
		for(int v=0;v<V;v++)
		{
			if(sptSet[v]==false && dis[u]!=INT_MAX && graph[u][v] && (dis[u]+graph[u][v]<dis[v]))
				dis[v]=dis[u]+graph[u][v];
		}
	}
	print(dis,src);
}
int main()
{
   /* Let us create the example graph discussed above */
   int graph[V][V] = {{0, 4, 7, 0},
                      {4, 0, 3, 0},
                      {7, 3, 0, 3},
                      {0, 0, 3, 0}
                     };
  
    dijkstra(graph, 0);
    
}

