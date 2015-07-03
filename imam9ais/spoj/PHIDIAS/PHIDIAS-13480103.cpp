#include<bits/stdc++.h>
using namespace std;
int W[601];
int H[601];
int n;
int dp[601][601];
int minarea(int w,int h)
{	
	if(dp[w][h]!=-1)
		return dp[w][h];
	int res=w*h;
	for(int i=0;i<n;i++)
	{
		if((W[i]<=w && H[i]<=h))
		{
			res=min(res,minarea(w-W[i],h)+minarea(W[i],h-H[i]));
			res=min(res,minarea(w,h-H[i])+minarea(w-W[i],H[i]));
		}
	}
	dp[w][h]=res;
	return res;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		int L,B;
		scanf("%d %d",&L,&B);
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			W[i]=a;H[i]=b;
		}
		int a=minarea(L,B);
		cout<<a<<endl;
	}
}
	
