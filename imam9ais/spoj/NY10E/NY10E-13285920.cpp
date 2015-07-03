#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
long long dp[70][11];
ll number(ll pos,ll prev)
{
	if(pos==n+1)
	{
		dp[pos][prev]=1;
		return 1;
	}
	else
	{	
		ll k=0,s=0, minp=INT_MAX;
		for(ll i=0;i<=9;i++)
		{
			if(i>=prev)
			{
				if(dp[pos+1][i]==-1)	
					dp[pos+1][i]=number(pos+1,i);
				s=s+dp[pos+1][i];

			}
		}
		return s;
		

	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		int d;
		scanf("%d %lld",&d,&n);
		ll ans=number(1,INT_MIN);
		printf("%d %lld\n",d,ans);
	}
}

