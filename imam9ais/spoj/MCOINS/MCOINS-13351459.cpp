#include<bits/stdc++.h>
using namespace std;
int dp[1000005]={0};
int main()
{
	int k,l,m;
	scanf("%d %d %d",&l,&k,&m);
	dp[0]=0;
	dp[1]=1;
	string re="";
	for(int i=2;i<=1000000;i++)
	{
		if(i-1>=0 && dp[i-1]==0)
			dp[i]=1;
		if(i-l>=0 && dp[i-l]==0)
			dp[i]=1;
		if(i-k>=0 && dp[i-k]==0)
			dp[i]=1;
	}
	for(int i=1;i<=m;i++)
	{
		int n;
		scanf("%d",&n);
		if(dp[n]==1)
			re=re+"A";
		else
			re=re+"B";
	}
	cout<<re<<endl;
}
	
