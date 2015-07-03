#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
char ar[100][100];
int r;
int c;
int arh[100][100];
int arv[100][100];
int graph[2500][2500];
int hor;
int ver;
int ispossible(int parent[],int seen[],int u)
{
	rep(i,ver)
	{
		if(graph[u][i] && !seen[i])
		{
			seen[i]=1;
			if(parent[i]<0 || ispossible(parent,seen,parent[i]))
			{
				parent[i]=u;
				return 1;
			}
		}
	}
	return 0;
}
int bipartite()
{
	int ans=0;int parent[ver];
	rep(i,ver)
		parent[i]=-1;
		
	rep(i,hor)
	{
		int seen[ver];
		rep(j,ver)
			seen[j]=0;
		
		if(ispossible(parent,seen,i))
			ans++;
	}
	return ans;
}
int main()
{
	int t;
	s(t);
	while(t--)
	{
		rep(i,2500)
			rep(j,2500)
				graph[i][j]=0;
		
		mem(arh,-1);
		mem(arv,-1);
		s(r);
		s(c);
		rep(i,r){
				string s;cin>>s;
				rep(j,c)
				{
					char ch=s[j];
					ar[i][j]=ch;
				}
			}
	hor=0;ver=0;
		rep(i,r)
		{
			rep(j,c)
			{
				if(ar[i][j]=='*')
				{
					if(j==0 || arh[i][j-1]==-1)
						arh[i][j]=hor++;
					else
					arh[i][j]=arh[i][j-1];
				}
			}
		}
		rep(i,c)
		{
			rep(j,r)
			{
				if(ar[j][i]=='*')
				{
					if(j==0|| arv[j-1][i]==-1)
						arv[j][i]=ver++;
					else
						arv[j][i]=arv[j-1][i];
				}
			}
		}
		rep(i,r)
		{
			rep(j,c)
			{
				if(ar[i][j]=='*')
					graph[arh[i][j]][arv[i][j]]=1;
			}
		}
		int ans=bipartite();
		cout<<ans<<endl;
		
	}
}

