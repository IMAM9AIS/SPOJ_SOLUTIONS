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
ll mp[9999999];
using namespace std;
int main()
{
	ll n;
	sll(n);
	ll ne=0;int f=0;
	ll tym=0;
	while(1)
	{
		tym++;
		

		while(n!=0)
		{
		ll d=n%10;
		ne+=(d*d);
		n=n/10;
		}
		if(ne==1)
		{
			f=1;
			break;
		}
		if(mp[ne])
			break;
		else
		{
			mp[ne]=1;
			n=ne;
			ne=0;
		}
	}
	if(f)
	{
		printf("%lld\n",tym);
	}
	else
		printf("-1\n");
}


