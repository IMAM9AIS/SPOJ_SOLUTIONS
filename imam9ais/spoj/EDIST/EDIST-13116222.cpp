#include<bits/stdc++.h>
using namespace std;
int dp[2005][2005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string a,b;char aa[2001];char bb[2001];scanf("%s %s",aa,bb);
		a=aa;b=bb;

	int m=a.length();
	int n=b.length();
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 &&j==0)
				dp[i][j]=0;
			else if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else
			{
				
				int a1=dp[i-1][j-1]+(a[i-1]!=b[j-1]);
				int b1=dp[i][j-1]+1;
				int c1=dp[i-1][j]+1;
				dp[i][j]=min(min(a1,b1),c1);
			}
		}
	}
	cout<<dp[m][n]<<endl;
	}
	return 0;
}

