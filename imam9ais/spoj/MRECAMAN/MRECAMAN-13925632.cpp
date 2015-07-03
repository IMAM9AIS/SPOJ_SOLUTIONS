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
int dp[1000000];
long long hash[9999999];
int main()
{
	dp[0]=0;
	hash[0]=1;
	for(int i=1;i<=500000;i++)
	{
		int t=dp[i-1]-i;	
		if(t<0 || hash[t])
		{
			t=dp[i-1]+i;
		}
		dp[i]=t;
		hash[t]=1;
	}
	while(1)
	{
		int k;
		s(k);
		if(k==-1)break;
		printf("%d\n",dp[k]);
	}
}

