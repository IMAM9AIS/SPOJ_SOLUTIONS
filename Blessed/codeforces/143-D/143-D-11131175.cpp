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

int main()
{
		#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
		#endif
		int n,m;
		s(n);s(m);
		int c=0;
		
		for(int i=1;i<=n;i++)
		{		
				int j;
				if(i%2!=0)
					j=1;
				else
					j=2;
				for(;j<=m;j+=2)
						c++;
		}
		if(n==1)
				cout<<m<<endl;
		else if(m==1)
				cout<<n<<endl;
		else if(n==2)
		{
				int t=m/4;
				int ans=t*2*2;
				int rem=m%4;
				if(rem==1||rem==2)
						ans=ans+(rem*2);
				else if(rem>2)	
						ans=ans+2*2;
				cout<<ans<<endl;
		}
		else if(m==2)
		{
				int t=n/4;
				int ans=t*2*2;
				int rem=n%4;
				if(rem==1||rem==2)
						ans=ans+(rem*2);
				else if(rem>2)
						ans=ans+ (2*2);
				cout<<ans<<endl;
		}
		else
			cout<<c<<endl;
	
		
	}