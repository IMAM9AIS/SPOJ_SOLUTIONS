#include<bits/stdc++.h>
using namespace std;
int dp1[105][300];
int dp2[105][10000];
int risk[105][105];
int time1[105][105];
int y;
int T;
int risklimit;
int n;
int minrisk(int pos,int t)
{
	if(t>T)
	{
		dp1[pos][t]=9999;
		return 9999;
	}
	else if(pos==n-1)
	{
		dp1[pos][t]=0;
		y=1;
		return 0;
	}
	else
	{
		int minc=9999;
		for(int i=0;i<n;i++)
		{
			if(i!=pos)
			{
				if(dp1[i][t+time1[pos][i]]==-1)
					dp1[i][t+time1[pos][i]]=minrisk(i,t+time1[pos][i]);
				int c= risk[pos][i]+dp1[i][t+time1[pos][i]];
				if(c<minc)
					minc=c;
			}
		}
		dp1[pos][t]=minc;
		return minc;
	}
}
int mintime(int pos,int risk1)
{
		if(risk1>risklimit)
		{	dp2[pos][risk1]=9999;
			return 9999;}
		else if(risk1==risklimit && pos==n-1){
			dp2[pos][risk1]=0;
			return 0;
		}
		else if(pos==n-1)
		{	
			dp2[pos][risk1]=9999;
			return 9999;
		}
		else
		{
			int mint=9999;
			for(int i=0;i<n;i++)
			{
				if(i!=pos)
				{
					if(dp2[i][risk1+risk[pos][i]]==-1)
						dp2[i][risk1+risk[pos][i]]=mintime(i,risk[pos][i]+risk1);
					int c=time1[pos][i]+dp2[i][risk1+risk[pos][i]];
					if(c<mint)
						mint=c;
				}
			}
			dp2[pos][risk1]=mint;
			return mint;
		}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{

		cin>>n>>T;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&time1[i][j]);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			scanf("%d",&risk[i][j]);
		y=0;
		memset(dp1,-1,sizeof dp1);
		int a=minrisk(0,0);
		if(y!=0)
		{
		memset(dp2,-1,sizeof dp2);
		risklimit=a;
		int b=mintime(0,0);
		cout<<a<<" "<<b<<endl;
		}
		else
		printf("-1\n");
	}
	
	
		
}
