#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> adj[n+1];
	for(int i=1;i<=n-1;i++)
	{
		int s,d;scanf("%d %d",&s,&d);
		adj[s].push_back(d);
		adj[d].push_back(s);
	}
	//cout<<"done"<<endl;
	int s=1;int fp=s;int fd=0;	
	/////////bfs 1/////////////
	queue<int> q;vector<int> visited(n+1);vector<int> dist(n+1);
	q.push(s);
	visited[s]=1;	dist[s]=0;
	while(!q.empty())
	{
		int a=q.front();
		q.pop();
	//	cout<<a<<endl;
		for(int i=0;i<adj[a].size();i++)
		{	
			int t=adj[a][i];
			if( !visited[t])
			{
				dist[t]=dist[a]+1;
				if(dist[t]>fd)
				{
					fd=dist[t];
					fp=t;
				}
				q.push(t);
				visited[t]=1;
			}
		}
	}
	//cout<<"done"<<endl;
	//////bfs 2///////
	fill(visited.begin(),visited.end(),0);
	dist[fp]=0;
	q.push(fp);
	visited[fp]=1;dist[fp]=0;
	  while(!q.empty())
        {
                int a=q.front();q.pop();
                for(int i=0;i<adj[a].size();i++)
                {	
			int t=adj[a][i];
                        if( !visited[t])
                        {
                                dist[t]=dist[a]+1;
                                if(dist[t]>fd)
                                {
                                        fd=dist[t];
                                        fp=t;
                                }
                                q.push(t);
                                visited[t]=1;
                        }
                }
        }
	printf("%d\n",fd);
	return 0;

}

	
		
