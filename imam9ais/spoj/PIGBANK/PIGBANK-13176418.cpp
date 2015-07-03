#include<bits/stdc++.h>
using namespace std;
int dp[10001][501];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;int b;int f=0;
		scanf("%d %d",&a,&b);
		int sum=b-a;
		int n;
		scanf("%d",&n);
		int w[n];int v[n];
		for(int i=0;i<n;i++)
			scanf("%d %d",&v[i],&w[i]);
		for(int s=0;s<=sum;s++)
		{
			
			for(int i=n;i>=0;i--)
			{
				if(i==n)
				{
					if(s==0)
						dp[0][i]=0;
					else
						dp[s][i]=INT_MAX;;
				}
				else if(s==0)
					dp[s][i]=0;
				else
				{
				int tym=0;int min1=INT_MAX;
					while(tym*w[i]<=s)
					{
						int va=tym*v[i];
						int wu=tym*w[i];
						int t=INT_MAX;
							if(s-wu>=0)
							t=dp[s-wu][i+1];
						if(t!=INT_MAX)
						min1=min(min1,va+t);
						tym++;
					}
					dp[s][i]=min1;
					if(min1!=INT_MAX && s==sum && i==0)
						f=1;		
				}
			}
		}
		if(f)
			printf("The minimum amount of money in the piggy-bank is %d.\n",dp[sum][0]);
		else
			printf("This is impossible.\n");
	}
}

	
