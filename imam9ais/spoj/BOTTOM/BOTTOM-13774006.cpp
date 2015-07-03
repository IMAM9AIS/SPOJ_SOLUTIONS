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
VI v[5005];
VI vt[5005];
VI topo;
VI ans;
VI got[5005];
int visited[5005];
int mark[5005];
vector<pp> edge;
VI real1;
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
void dfs2(int p)
{
	visited[p]=0;
	rep(i,sz(vt[p]))
	{
		int t=vt[p][i];
		if(visited[t])
			dfs2(t);
	}
	ans.pb(p);
}
int main()
{
	while(1)
	{
		int v1,e;
		s(v1);if(!v1)break;
		s(e);
		rep(i,v1+1)
		{
			v[i].clear();
			vt[i].clear();
		}
		
		topo.clear();
		ans.clear();
		real1.clear();
		rep(i,e)
		{
			int st,dt;
			s(st);s(dt);
			v[st].pb(dt);
			vt[dt].pb(st);
			edge.pb(pp(st,dt));
		}
		rep(i,v1+1){
			visited[i]=0;mark[i]=0;
			}
		rep(i,v1)	
		{
			if(!visited[i+1])
				dfs1(i+1);
		}	
		int k=1;		
		for(int i=topo.size()-1;i>=0;i--)
		{
			if(visited[topo[i]]){
				dfs2(topo[i]);
			rep(j,sz(ans)){
				got[k].pb(ans[j]);	
//				cout<<ans[j]<<" ";
			mark[ans[j]]=k;
			}
//			cout<<endl;
			k++;
			ans.clear();
			}
		}
		map<int,int> mp;
		rep(i,sz(edge))
		{
			int a=edge[i].first;
			int b=edge[i].second;
			if(mark[a]!=mark[b]){
//				cout<<a<<" "<<b<<"n"<<endl;
				mp[mark[a]]=1;
			}
		}
		for(int i=1;i<k;i++)
		{
			if(!mp[i])
			{
				for(int j=0;j<sz(got[i]);j++)
					real1.pb(got[i][j]);
			}
		}

		rep(i,k+2)
			got[i].clear();
		SORT(real1);
		rep(i,sz(real1))
			cout<<real1[i]<<" ";
		edge.clear();
		cout<<endl;
			
	}
}

		
	
