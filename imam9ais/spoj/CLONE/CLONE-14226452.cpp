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
map<string,int> mp;
int ar[40000];
VS v;
int main()
{
	while(1)
	{

		int n,m;
		s(n);s(m);
		if(n==0 && m==0)
				break;
		mp.clear();
		mem(ar,0);
		v.clear();
		rep(i,n)
		{
				string s;
				cin>>s;
				mp[s]++;
				v.pb(s);
		}
		rep(i,n)
		{
			int a=mp[v[i]];
			ar[a]++;
			mp[v[i]]=0;
		}
		for(int i=1;i<=n;i++)
		{
			printf("%d\n",ar[i]);
		}
	}
}

