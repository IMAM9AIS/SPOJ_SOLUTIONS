#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int wi,n;scanf("%d %d",&wi,&n);
		if(wi==0 && n==0)
			break;
		int w[n];int val[n];
		for(int i=0;i<n;i++)
			scanf("%d %d",&w[i],&val[i]);
		int dp[wi+1][n+1];
		for(int i=0;i<=wi;i++)
		{
			for(int j=0;j<=n;j++)
			{
				if(j==0|| i==0)
					dp[i][j]=0;
				else if(i-w[j-1]>=0)
				{
					dp[i][j]=max(dp[i][j-1],val[j-1]+dp[i-w[j-1]][j-1]);
				}
				else
				{
					dp[i][j]=dp[i][j-1];
				}
			}
		}
		
		int i=wi-1;
		while(dp[wi][n]==dp[i][n])
			i--;
		printf("%d %d\n",i+1,dp[wi][n]);
	}
	return 0;
}


