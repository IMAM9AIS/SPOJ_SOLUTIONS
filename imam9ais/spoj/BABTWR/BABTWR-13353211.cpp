#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int dp[100][100];
struct node
{
	int l;
	int b;
	int h;
};
int comp(struct node a1,struct node b1)
{
	if(a1.l*a1.b>b1.l *b1.b)
		return 1;
	else
		return 0;
}
vector<struct node> v;
int len;
int maxh(int i,int pre)
{
	if(i==v.size())
	{	dp[i][pre]=0;
		return 0;
	}
	else if(max(v[i].l,v[i].b)<max(v[pre].l,v[pre].b) && min(v[i].l,v[i].b)<min(v[pre].l,v[pre].b))
	{
		if(dp[i+1][i]==-1)
			dp[i+1][i]=maxh(i+1,i);
		if(dp[i+1][pre]==-1)
			dp[i+1][pre]=maxh(i+1,pre);
		return max((v[i].h+ dp[i+1][i]),dp[i+1][pre]);
	}
	else
	{
		if(dp[i+1][pre]==-1)
			dp[i+1][pre]=maxh(i+1,pre);
		return dp[i+1][pre];
	}
}
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		v.clear();
	len=0;int l,b,h;
	struct node p;
	p.l=9999;p.b=9999;p.h=0;len++;
	v.push_back(p);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&l,&b,&h);
		int x=l;int y=b;int z=h;
		struct node p;
		
			p.l=x;p.b=y;p.h=z;v.pb(p);
				
			 p.l=z;p.b=y;p.h=x;v.pb(p);
			 p.l=z;p.b=x;p.h=y;v.pb(p);
		
	}
	sort(v.begin(),v.end(),comp);
	memset(dp,-1,sizeof(dp));
	int hq=maxh(1,0);
	cout<<hq<<endl;
	}

}

		
