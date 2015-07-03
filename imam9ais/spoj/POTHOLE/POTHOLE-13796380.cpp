#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)  
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",&n)
#define pll(n) printf("%lld",&n)
#define mem(s,v) memset(s,v,sizeof s) 
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
typedef long long ll;
using namespace std;
int ar[210][210];
int n;
int bfs(int parent[])
{
	int visited[n+1];
	mem(visited,0);
	Q q;
	q.push(0);visited[0]=1;parent[0]=-1;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		rep(i,n)
		{
			if(ar[t][i] && !visited[i])
			{
				q.push(i);parent[i]=t;
				visited[i]=1;
			}
		}
	}
	if(parent[n-1]!=-1)
		return 1;
	else
		return 0;
}

			
int maxflow()
{
	int maxflow=0;
	int parent[n+1];
	mem(parent,-1);int c=0;
	while(bfs(parent))
	{
			int v=n-1;
		int u=parent[v];int mint=ar[u][n-1];
		while(u!=-1)
		{
			int t=ar[u][v];
			mint=min(mint,t);
			v=parent[v];
			u=parent[v];
		}
		v=n-1;
		u=parent[n-1];
		while(u!=-1)
		{
			ar[v][u]=ar[v][u]+mint;
			ar[u][v]=ar[u][v]-mint;
			v=parent[v];	
			u=parent[v];
		}
		maxflow+=mint;
		mem(parent,-1);
	}
	
	return maxflow;
}

			
int main()
{
	int t;
	s(t);
	while(t--)
	{
		
		s(n);
		rep(i,n+1)
			rep(j,n+1)
				ar[i][j]=0;
		rep(i,n-1)
		{
			int m;s(m);
			while(m--)
			{
				int k;
				s(k);k--;
				if(i==0||(k)==n-1)
				ar[i][k]=1;	
				else
				ar[i][k]=INF;
			}
		}
		int ans=maxflow();
		cout<<ans<<endl;
	}
}

	
