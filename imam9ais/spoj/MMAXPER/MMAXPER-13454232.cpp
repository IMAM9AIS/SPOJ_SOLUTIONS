#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int l;
	int b;
};
vector<struct node> v;
int n;
int dp[1005][1005];
int maxperi(int pos,int pre)
{
//	cout<<pos<<endl;
	if(pos==n)
	{	
		dp[pos][pre]=0;		
		return 0;
	}
	else
	{
		if(pos==0)
		{
			if(dp[pos+1][v[pos].b]==-1)
				dp[pos+1][v[pos].b]=maxperi(pos+1,v[pos].b);
			if(dp[pos+1][v[pos].l]==-1)
				dp[pos+1][v[pos].l]=maxperi(pos+1,v[pos].l);
			dp[pos][pre]=max(v[pos].l+dp[pos+1][v[pos].b],v[pos].b+dp[pos+1][v[pos].l]);
			//return (max(v[pos].l+maxperi(pos+1,v[pos].b),v[pos].b+maxperi(pos+1,v[pos].l)));
			return dp[pos][pre];
		}
		else
		{
			int h=abs(v[pos].b-pre);
			if(dp[pos+1][v[pos].b]==-1)
				dp[pos+1][v[pos].b]=maxperi(pos+1,v[pos].b);
			int a=h+v[pos].l+dp[pos+1][v[pos].b];
			h=abs(v[pos].l-pre);
			if(dp[pos+1][v[pos].l]==-1)
				dp[pos+1][v[pos].l]=maxperi(pos+1,v[pos].l);
			int b=h+v[pos].b+dp[pos+1][v[pos].l];
			return max(a,b);
		}
	}
}

int main()
{
	scanf("%d",&n);
	int k=n;
	while(k--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		struct node p;
		p.l=a;p.b=b;
		v.push_back(p);
	}
	memset(dp,-1,sizeof dp);
	int re=maxperi(0,0);
	cout<<re<<endl;
}

