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
#define pp pair<int,long long int> 
#define pp1 pair<int,pair<int,int> > 
#define INF INT_MAX
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
    str[i] = '\0';
}

vector<pp> v[100005];
map<string,int> mp;
long long  dist[100005];
int visited[100005];
int n;
long long djkstra(int s,int f)
{
	rep(i,n){
		dist[i]=INF;
		visited[i]=0;
		}
	dist[s]=0;
	visited[s]=1;
	priority_queue<pp,vector<pp>,greater<pp> > pq;
	rep(i,sz(v[s]))
	{
		int t=v[s][i].second;
		long long  cost=v[s][i].first;
		dist[t]=cost;
		pq.push(pp(cost,t));
	}
	while(!pq.empty())
	{
		long long mindis=INT_MAX;int point;
		point=pq.top().second;
		mindis=pq.top().first;
	//	cout<<mindis<<endl;
		pq.pop();
		if(point==f)
			return dist[point];
		if(mindis<=dist[point])
		{
			rep(i,sz(v[point]))
			{
				int p=v[point][i].second;
				int cost=v[point][i].first;
				if( dist[point]+cost<dist[p]){
					dist[p]=dist[point]+cost;
					pq.push(pp(dist[p],p));
				}
			}
		}
	}
}


		
	
int main()
{
	int s;
	scanint(s);
	while(s--)
	{
	//	int n;
		
		scanint(n);
		rep(i,n){
			v[i].clear();
			dist[i]=0;
			}
		mp.clear();
			
		rep(i,n)
		{
			char s[12];
			scanf("%s",s);
			string s1=s;
			mp[s1]=i;
			int p;scanint(p);
			while(p--)
			{
				int nr,cost;
				scanint(nr); scanint(cost);
				v[i].pb(pp(cost,nr-1));
			}
		}
		int r;
		scanint(r);
		while(r--)
		{
			char s1[12],s2[12];
//			getchar();
			scanf("%s",s1);scanf("%s",s2);;string s11=s1;
			string s22=s2;
			int st=mp[s11];
			int fi=mp[s22];
//			getchar();
//			cout<<"d"<<endl;
			long long ans=djkstra(st,fi);
			pll(ans);
			printf("\n");
		}
	}
}

		
					




