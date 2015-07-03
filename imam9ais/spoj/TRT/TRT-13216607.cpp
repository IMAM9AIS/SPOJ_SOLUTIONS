#include<bits/stdc++.h>
using namespace std;
int ar[2000];
int n;
int dp[2001][2001];
int sum(int i,int j)
{
	
	if(i>j)
	{
		dp[i][j]=0;
		return 0;
	}
	else
	{
		if(dp[i+1][j]==-1)
			dp[i+1][j]=sum(i+1,j);
		if(dp[i][j-1]==-1)
			dp[i][j-1]=sum(i,j-1);
		int a=ar[i]*(n-j+i)+dp[i+1][j];
		int b=ar[j]*(n-j+i)+dp[i][j-1];
		return max(a,b);
	}

}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	memset(dp,-1,sizeof dp);
//	cout<<dp[4][2]<<endl;
	cout<<sum(0,n-1)<<endl;
}
	

