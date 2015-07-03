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
#define endl '\n'
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b)
{
	if(a==0)
			return b;
	else
			return gcd(b%a,a);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n;
		cin>>n;
		if(n==1)
		{
				cout<<1<<endl;return 0;
		}
		else if(n==2)
		{
				cout<<2<<endl;return 0;
		}
		else
		{
				//if(!(n&1))
				//		n--;

				ll ans=1LL*n*(n-1);ll max1=-1;ll lcm;
				for(int i=n-2;i>=1;i--)
				{
						ll t=gcd(ans,i);
						lcm=(ans*i)/t;
						if(lcm>max1){
								max1=lcm;
							}

				}
				//cout<<max1<<endl;
				if(n>3)
						n--;

				ans=1LL*n*(n-1);
				for(int i=n-2;i>=1;i--)
				{
						ll t=gcd(ans,i);
						lcm=(ans*i)/t;
						if(lcm>max1){
								max1=lcm;
							}

				}
				cout<<max1<<endl;
		}
}