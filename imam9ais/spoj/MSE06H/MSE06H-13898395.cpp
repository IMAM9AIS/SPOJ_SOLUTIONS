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
int bit[1005];
int n;
int m;
void update(int pos,int val)
{
	while(pos<=m)
	{
		bit[pos]+=val;
		pos=pos+(pos&(-pos));
	}
}
ll query(int pos)
{
	ll ans=0;
	while(pos>0)
	{
		ans+=bit[pos];
		pos=pos-(pos&(-pos));
	}
	return ans;
}

int main()
{
	int t;
	s(t);int ca=1;
	while(t--)
	{
		int k;
		s(n);s(m);s(k);
		VP v;
		rep(i,k)
		{
			int ss,dd;
			s(ss);s(dd);
			v.pb(pp(ss,dd));
		}
		sort(v.begin(),v.end(),greater<pp>());
		mem(bit,0);
		update(v[0].second,1);
		ll ans=0;
		for(int i=1;i<k;i++)
		{
			int p=v[i].second;
			update(p,1);
			ans=ans+query(p-1);
		}
		printf("Test case %d: %lld\n",ca++,ans);
	
			
	}
}
	
