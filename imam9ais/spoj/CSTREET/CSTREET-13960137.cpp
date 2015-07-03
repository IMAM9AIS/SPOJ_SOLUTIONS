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
int parent[1005];
void union1(int x,int y)
{
	int a=min(x,y);
	int b=max(x,y);
	parent[a]=b;
}

int find(int x)
{
	if(parent[x]==-1)
		return x;
	else
		return find(parent[x]);
}

int main()
{
	int t;	
	s(t);
	while(t--)
	{
		mem(parent,-1);
		int p,n,m;
		s(p);s(n);s(m);
		priority_queue<pp1,vector<pp1>,greater<pp1> > q;
		rep(i,m)
		{
			int a,b,c;
			s(a);s(b);s(c);
			q.push(pp1(c,pp(a,b)));
		}
		int edge=0;ll ans=0;
//		cout<<endl;
		while(!q.empty() && (edge!=n-1))
		{
			int l=q.top().first;
			int s=q.top().second.first;
			int d=q.top().second.second;
//			cout<<l<<" "<<s<<" "<<d<<endl;
			int f1=find(s);
			int f2=find(d);
			if(f1!=f2)			
			{
				union1(f1,f2);
				ans+=(l*p);
				edge++;
			}
			q.pop();
		}
		printf("%lld\n",ans);
	}
}

