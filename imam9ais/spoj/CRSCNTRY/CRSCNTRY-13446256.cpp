#include<bits/stdc++.h>
using namespace std;
int ar1[2002];
int ar2[2002];
int n;
int m;
int dp[2005][2005]={-1};
int lcs(int i,int j)
{
	//cout<<"int"<<i<<" "<<j<<endl;
	if(i>=n || j>=m)
	{	dp[i][j]=-1;
		return 0;
	}
	else if(ar1[i]==ar2[j])
	{	
		if(dp[i+1][j+1]==-1)
			dp[i+1][j+1]=lcs(i+1,j+1);
		return (1+dp[i+1][j+1]);
	}
	else
	{
		if(dp[i+1][j]==-1)	
			dp[i+1][j]=lcs(i+1,j);
		if(dp[i][j+1]==-1)
			dp[i][j+1]=lcs(i,j+1);
		return (max(dp[i+1][j],dp[i][j+1]));
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	int maxdis=0;
		int a;
		while(t--)
		{
			scanf("%d",&a);
			int k=0;
			ar1[k++]=a;
			while(1)
			{
				scanf("%d",&a);
				if(a==0)break;
				ar1[k++]=a;
			}
			n=k;k=0;
			while(1)
			{
				scanf("%d",&a);
				if(a==0)
				{
					 m=k;
					int re=lcs(0,0);
					memset(dp,-1,sizeof dp);

					maxdis=max(re,maxdis);
					k=0;
					scanf("%d",&a);
					if(a==0)
					{
						cout<<maxdis<<endl;maxdis=0;
						break;
					}
				}
					
				ar2[k++]=a;
			}		
		}
			
				
	}