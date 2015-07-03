#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<=(int)(n);i++)
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
typedef unsigned long long ll;
using namespace std;
int main()
{
	int t;
	s(t);
	while(t--)
	{
		ll n,k;
		sll(n);sll(k);
		ll r=n-k;
		n=n-1;
		if(r>n/2)
			r=n-r;
		long long ans=1;
	//	cout<<n<<" "<<r<<endl;
		FOR(i,1,r)
		{
			ans=ans*(n-(i-1));
			ans=ans/i;
		}
		if(ans==0)
			ans=1;
		cout<<ans<<endl;
	}
}

		
		 
