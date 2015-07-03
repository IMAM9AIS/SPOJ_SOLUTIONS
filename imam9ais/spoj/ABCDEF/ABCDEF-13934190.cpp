#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<ll>
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
map<ll,ll> mp;
int main()
{
	int n;
	s(n);	
	VI v;
	rep(i,n)
	{
		ll a;sll(a);
		v.pb(a);
	}
//	cout<<"d1"<<endl;
	VI v1;
	VI v2;
	rep(i,n)	
	{
		rep(j,n)
		{
			rep(k,n)
			{
				ll c=v[k];
			ll a=v[i];
			ll b=v[j];
			v1.pb(a*b+c);
			}
		}
	}
//	cout<<"d2"<<endl;

//	cout<<"d3"<<endl;
	rep(i,n)
	{
		rep(j,n)
		{
			rep(k,n)
			{
				ll d=v[i];
				ll f=v[j];
				ll e=v[k];
				if(d!=0){
					v2.pb((f+e)*d);
					}
			}
		}
	}
//	cout<<"d"<<endl;
	int ans=0;
	vector<ll>::iterator it;
	SORT(v2);
	rep(i,v1.size())
	{
		ll f=v1[i];
		it=lower_bound(v2.begin(),v2.end(),f);
		int pos1=it-v2.begin();
		if(pos1<v2.size())
		{
			it=upper_bound(v2.begin(),v2.end(),f);
			int pos2=it-v2.begin();
			ans=ans+pos2-pos1;
		}
	
		
	}
	
	printf("%d\n",ans);
}

