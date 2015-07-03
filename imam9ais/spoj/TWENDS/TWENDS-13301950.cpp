#include<bits/stdc++.h>
using namespace std;
int ar[1001];
int dp[1001][1001];
int m;
int maxdif(int i,int j)
{
	if(i>j)
		return 0;
	else if(i==j)
	{
			if(dp[i][j]==m)
				dp[i][j]=(-1*ar[i]);
		return (-1*ar[i]);
	}
	else
	{
		if((j-i+1)%2==0)
		{
			if(dp[i+1][j]==m)dp[i+1][j]=maxdif(i+1,j);if(dp[i][j-1]==m)dp[i][j-1]=maxdif(i,j-1);
			return max((ar[i]+dp[i+1][j]),(ar[j]+dp[i][j-1]));
		}
		else
		{
			//(ar[i]>=ar[j])?(return(ar[i]+maxdif(i+1,j))):(return(ar[j]+maxdif(i,j-1)));
			if(ar[i]>=ar[j])
			{
				if(dp[i+1][j]==m)
					dp[i+1][j]=maxdif(i+1,j);
				return ((-1*ar[i])+dp[i+1][j]);	
			}
			else
			{
				if(dp[i][j-1]==m)
					dp[i][j-1]=maxdif(i,j-1);
				return ((-1*ar[j])+dp[i][j-1]);
			}
	
		}
	}
}
int main()
{
	int g=1;m=-1;
	while(1)
	{
		memset(dp,-1,sizeof dp);
		//cout<<dp[0][1]<<endl;
		int n;
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		int ans=maxdif(0,n-1);
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n",g,ans);
		g++;
	}
	return 0;
}

		
