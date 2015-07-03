#include<bits/stdc++.h>
using namespace std;
int ar[2004];
int dp[2004][2004];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
			if(i>j)
				dp[i][j]=0;
	
	int tym=0;
	for(int r=n;r>=0;r--)
	{
		tym++;int co=1;
		for(int c=r;co<=tym;co++,c++)
		{
			dp[r][c]=max(ar[r]*(n-c+r) + dp[r+1][c],ar[c]*(n-c+r)+ dp[r][c-1]);
		}
	}
	cout<<dp[0][n-1]<<endl;
}

			
