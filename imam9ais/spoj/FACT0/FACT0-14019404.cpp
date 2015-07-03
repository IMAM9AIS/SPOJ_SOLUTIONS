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
#define pp pair<ll,ll> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	
	while(1)
	{
		ll n;
		sll(n);
		if(!n)break;
		VP v;
		ll i=2;
		
		while(i*i<=n)
		{
			ll mu=n;
			int c=0;
			while(mu%i==0)
			{
				mu=mu/i;
				c++;
			}
			if(c>0)
			{
				v.pb(pp(i,c));
			}
			i++;
			n=mu;
			
		}
		
		if(n>1)
			v.pb(pp(n,1));
		int s=sz(v);
		rep(i,s)
		{
			printf("%lld^%lld ",v[i].first,v[i].second);
		}
		printf("\n");
		
	
	}
}
	
