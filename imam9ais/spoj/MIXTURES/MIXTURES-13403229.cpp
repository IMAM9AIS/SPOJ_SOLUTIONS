#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[200];
ll dp[200][200];
ll sumof(int beg,int end)
{
	ll sum=0;
	for(int i=beg;i<=end;i++)
		sum=sum+ar[i];
	return sum;
}

ll minsmoke(int i,int j)
{
	if(i==j)
	{
		dp[i][j]=0;
		return 0;
	}
	else
	{
		int min1=INT_MAX;
		for(int k=i;k<j;k++)
		{
			if(dp[i][k]==-1)
				dp[i][k]=minsmoke(i,k);	
			if(dp[k+1][j]==-1)
				dp[k+1][j]=minsmoke(k+1,j);
			ll c=(sumof(i,k)%100)*(sumof(k+1,j)%100) + dp[i][k]+dp[k+1][j];
			if(c<min1)
				min1=c;		
		}
		dp[i][j]=min1;
		return min1;
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			scanf("%lld",&ar[i]);
		memset(dp,-1,sizeof dp);
		cout<<minsmoke(0,n-1)<<endl;
	}
}

		
