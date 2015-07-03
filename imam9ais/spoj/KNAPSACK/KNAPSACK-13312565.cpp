#include<bits/stdc++.h>
using namespace std;
int dp[2005][2005];
int v[2005];
int w[2005];
int main()
{
	int k,n;
	scanf("%d %d",&k,&n);

	for(int i=0;i<n;i++)
		scanf("%d %d",&w[i],&v[i]);
	for(int i=n;i>=0;i--)
	{
		for(int wl=0;wl<=k;wl++)
		{
			if(i==n)
				dp[i][wl]=0;
			else if(w[i]>wl)
				dp[i][wl]=dp[i+1][wl];
			else
				dp[i][wl]=max(v[i]+dp[i+1][wl-w[i]],dp[i+1][wl]);
		}
	}
	printf("%d\n",dp[0][k]);
}

