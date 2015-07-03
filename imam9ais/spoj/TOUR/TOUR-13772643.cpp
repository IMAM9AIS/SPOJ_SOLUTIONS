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
#define pll(n) printf("%d",&n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
typedef long long ll;
using namespace std;
VI v[1005];
VI vt[1005];
int visited[1005];
VI topo;
int value[1005];
int input[1005];
void dfs1(int p)
{
	visited[p]=1;
	rep(i,sz(v[p]))
	{
		if(!visited[v[p][i]])
			dfs1(v[p][i]);
	}
	topo.pb(p);
}
void dfs2(int p,int co)
{
	visited[p]=0;
	value[p]=co;
	rep(i,sz(vt[p]))
	{
		if(visited[vt[p][i]])
			dfs2(vt[p][i],co);
	}
}
int main()
{
	int t;
	s(t);
	while(t--)
	{
	
			
		topo.clear();
		int n;
		s(n);
		for(int i=1;i<=n;i++)
		{
			v[i].clear();
			vt[i].clear();
			value[i]=0;input[i]=0;
		}
			
		rep(i,n)
		{
			int k;s(k);
			while(k--)
			{
				int a;s(a);
				v[a].pb(i+1);
				vt[i+1].pb(a);
			}
		}
		mem(visited,0);
		rep(i,n)
		{
			if(!visited[i+1])	
				dfs1(i+1);
		}
		int co=0;
		for(int i=topo.size()-1;i>=0;i--)
		{
			if(visited[topo[i]])
				dfs2(topo[i],co++);
		}
		mem(input,0);
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<sz(v[i]);j++)
			{
				if(value[i]!=value[v[i][j]])
					input[value[v[i][j]]]++;
			}
		}
		int count=0;
		for(int i=0;i<co;i++)
		{
//			cout<<i<<" "<<input[i]<<endl;
			if(input[i]==0)
				count++;
		}
		if(count>1)
			cout<<"0"<<endl;
		else
		{
			count=0;
			for(int i=1;i<=n;i++)
			{
//				cout<<input[value[i]]<<endl;
				if(input[value[i]]==0)
					count++;
			}
			cout<<count<<endl;
		}
	}
}

			
