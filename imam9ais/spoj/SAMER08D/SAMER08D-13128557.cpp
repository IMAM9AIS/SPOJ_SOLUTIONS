#include<bits/stdc++.h>
using namespace std;
int dp[1004][1004];
int main()
{
	int k;
	while(1)
	{
		scanf("%d",&k);
		if(k==0)
		{	
			break;
		}
		string a,b;
		cin>>a>>b;
		int m=a.length();
		int n=b.length();
		int i,j;
		if(k==1)
		{
			for(i=0;i<=m;i++)
			{
				for(j=0;j<=n;j++)
				{
					if(i<=0 || j<=0)
						dp[i][j]=0;
					else
					{
						if(a[i-1]==b[j-1])
							dp[i][j]=1+dp[i-1][j-1];
						else
							dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					}
				}
			}	
			printf("%d\n",dp[m][n]);	
		}
		else	
		{
			for(i=0;i<=m;i++)
			{
				for(j=0;j<=n;j++)
				{
					if(i<=k-1 || j<=k-1)
						dp[i][j]=0;
					
					else if(a[i-1]==b[j-1])
					{
						dp[i][j]=max(dp[i][j-1],dp[i-1][j]);

						int i1=i-1;int j1=j-1;int c=2;
						while(a[i1-1]==b[j1-1])
						{
							if(c>=k)
                                                		dp[i][j]=max(c+dp[i-c][j-c],dp[i][j]);
							i1--;j1--;c++;
							if(i1<1|| j1<1)
							{
								break;
							}
						
						}
				
		
					}
					else
						dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
				}
			}
			printf("%d\n",dp[m][n]);
		}
		
							
	}
	return 0;
}
