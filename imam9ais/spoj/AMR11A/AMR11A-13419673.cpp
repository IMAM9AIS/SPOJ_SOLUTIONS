#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int ar[505][505];
int dp[505][505];
int r,c;
int ispossible(int );
int k;
int binary(int beg,int end)
{

	int mid=(beg+end)/2;
	int pos=0;
	while(beg<=end)
	{
		if(ispossible(mid))
		{
			pos=mid;
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	return pos;
}
int ispossible(	int val)
{

	dp[0][0]=val;
	for(int i=1;i<c;i++)
	{
		if(dp[0][i-1]>0)
		dp[0][i]=dp[0][i-1]+ar[0][i];
		else
		dp[0][i]=-1;
	}
	for(int j=1;j<r;j++)
	{
		if(dp[j-1][0]>0)
		dp[j][0]=dp[j-1][0]+ar[j][0];
		else
		dp[j][0]=-1;
	}

	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			if(dp[i][j-1]>0 || dp[i-1][j]>0){
			int max1=max(dp[i][j-1],dp[i-1][j]);
			dp[i][j]=ar[i][j]+max1;}
			else
			dp[i][j]=-1;
		}
	}
//	if(val==2)
//		cout<<dp[r-1][c-1]<<endl;
	if(dp[r-1][c-1]>=1)
		return 1;
	else
		return 0;
}
int main()
{
	int t;k=0;
	scanint(t);
	while(t--)
	{

		scanint(r);scanint(c);
		for(int i=0;i<r;i++)
		{		
			for(int j=0;j<c;j++)
			{	int a;scanf("%d",&a);
				ar[i][j]=a;
			}	
		}
		
		int a=binary(1,1000000);
		printf("%d\n",a);
	}
}
		
