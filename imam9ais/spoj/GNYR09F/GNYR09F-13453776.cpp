#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int dp[105][2][1000];
int ways(int pos,int pre,int count)
{
	if(pos==n)
	{
		if(count==k)
		{
			dp[pos][pre][count]=1;
			return 1;
		}
		else
		{	dp[pos][pre][count]=0;
			return 0;
		}
	}
	else
	{
		if(pos==0)
		{	if(dp[1][1][0]==-1)
				dp[1][1][0]=ways(1,1,0);
			if(dp[1][0][0]==-1)
				dp[1][0][0]=ways(1,0,0);
			//dp[pre][pos][count]=dp[1][1][0]+dp[1][0][0];
			return (dp[1][1][0]+dp[1][0][0]);
		}
		else
		{
			if(pre==1)
			{
				if(dp[pos+1][1][count+1]==-1)
					dp[pos+1][1][count+1]=ways(pos+1,1,count+1);
				if(dp[pos+1][0][count]==-1)
					dp[pos+1][0][count]=ways(pos+1,0,count);
				//dp[pos][pre][count]=dp[pos+1][1][count+1]+dp[pos+1][0][count];
				return (dp[pos+1][1][count+1]+dp[pos+1][0][count]);
			}
			else
			{
				if(dp[pos+1][1][count]==-1)
					dp[pos+1][1][count]=ways(pos+1,1,count);
				if(dp[pos+1][0][count]==-1)
					dp[pos+1][0][count]=ways(pos+1,0,count);
				//dp[pos][pre][count]=dp[pos+1][1][count]+dp[pos+1][0][count];
				return (dp[pos+1][1][count]+dp[pos+1][0][count]);
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d %d %d",&a,&n,&k);
		memset(dp,-1,sizeof dp);
		int a1=ways(0,0,0);
		cout<<a<<" "<<a1<<endl;
	}
}

