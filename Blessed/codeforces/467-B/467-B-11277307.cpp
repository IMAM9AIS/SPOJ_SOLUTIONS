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
vector<ll> v;
int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n,m,k;
		cin>>n>>m>>k;
		rep(i,m+1)
		{
				ll a;
				sll(a);
				v.pb(a);
		}
		ll num=v[m];int ans=0;ll one=1;
		for(int i=m-1;i>=0;i--)
		{
				ll t=v[i];
				int pos=0;int dif=0;
				while(pos<n)
				{
						int first=(num&(1<<pos));
						int second=(t&(1<<pos));
						if(first!=second)
						{
								dif++;
						}
						pos++;
				}
				//cout<<dif<<endl;
				if(dif<=k)
				{
					ans++;
				}
		}
		cout<<ans<<endl;

	}