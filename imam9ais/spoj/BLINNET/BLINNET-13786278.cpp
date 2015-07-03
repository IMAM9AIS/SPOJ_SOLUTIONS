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
typedef long long ll;
using namespace std;
//vector<pp> v[10005];
map<string,int> mp;
priority_queue<pp1,vector<pp1>,greater<pp1> > q;
int parent[100005];
int find(int u)
{
	while(parent[u]!=-1)
		u=parent[u];
	return u;
}
void union1(int u,int v)
{
	int ma=max(u,v);
	int mi=min(u,v);
	parent[mi]=ma;
}

int main()
{
	int s;
	s(s);
	while(s--)
	{
		int n;
		s(n);
		rep(i,n+1)
			parent[i]=-1;
		while(!q.empty())
			q.pop();
		rep(i,n)
		{
			string s;
			cin>>s;
			mp[s]=i;
			int p;
			s(p);
			while(p--)			
			{
				int neg,cost;
				s(neg);s(cost);
				q.push(pp1(cost,pp(i,neg-1)));
			}
		}
		int i=1;
		long long tot=0;
		while(i<=n-1 && !q.empty())
		{
			int c=q.top().first;
			int s=q.top().second.first;
			int d=q.top().second.second;
			int p1=find(s);
			int p2=find(d);
			if(p1!=p2)
			{
				tot+=c;
				union1(p1,p2);
				i++;
			}
			q.pop();
		}
		if(i==n)
			cout<<tot<<endl;
		else
			cout<<"-1"<<endl;
	
			
	}
}
	
		
		
