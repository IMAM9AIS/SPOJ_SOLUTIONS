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
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF INT_MAX
typedef long long ll;
using namespace std;
vector<pp> v[100005];
map<string,int> mp;
long long  dist[100005];
int visited[100005];
int n;
void ss(int &x)
{   
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

long long djkstra(int s,int f)
{
	rep(i,n){
		dist[i]=INF;
		visited[i]=0;
		}
	dist[s]=0;
	visited[s]=1;	
	rep(i,sz(v[s]))
	{
		int t=v[s][i].first;
		int cost=v[s][i].second;
		dist[t]=cost;
	}
	rep(j,n-1)
	{
		long long mindis=INT_MAX;int point;
		rep(i,n)
		{
			if(dist[i]<mindis && !visited[i])
			{
				mindis=dist[i];
				point=i;
			}
		}
		visited[point]=1;
		if(point==f)
			return dist[point];
		else
		{
			rep(i,sz(v[point]))
			{
				int p=v[point][i].first;
				int cost=v[point][i].second;
				if(!visited[p] && dist[point]+cost<dist[p])
					dist[p]=dist[point]+cost;
			}
		}
	}
}


		
	
int main()
{
	int s;
	ss(s);
	while(s--)
	{
	//	int n;
		
		ss(n);
		rep(i,n){
			v[i].clear();
			dist[i]=0;
			}
		mp.clear();
			
		rep(i,n)
		{
			string s;cin>>s;
			mp[s]=i;
			int p;ss(p);
			while(p--)
			{
				int nr,cost;
				ss(nr); ss(cost);
				v[i].pb(pp(nr-1,cost));
			}
		}
		int r;
		ss(r);
		while(r--)
		{
			string s1,s2;
			cin>>s1>>s2;
			int st=mp[s1];
			int fi=mp[s2];
			long long ans=djkstra(st,fi);
			pll(ans);
			cout<<endl;
		}
	}
}

		
					






