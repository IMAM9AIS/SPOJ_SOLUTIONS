#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int ar[256];
int mod=1000000007;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(ar,0,sizeof ar);
		string a;
		cin>>a;
		int l=a.length();
		dp[l]=1;
		for(int i=l-1;i>=0;i--)
		{
			dp[i]=2*dp[i+1];
			dp[i]=dp[i]%mod;
			if(ar[a[i]]!=0){
				dp[i]=dp[i]-dp[ar[a[i]]+1];
				if(dp[i]<0)
					dp[i]=dp[i]+mod;
				}
				dp[i]=dp[i]%mod;
			ar[a[i]]=i;
		}
		printf("%d\n",dp[0]);
	}
}

			
