#include<bits/stdc++.h>
using namespace std;
typedef int ll;
ll dp[10005][10005];
vector<struct node> v;
struct node 
{
	ll cap;
	ll ass;
};
int main()
{
	int n;
        cin>>n;
	memset(dp,-1,sizeof dp);
//	cout<<dp[0][0]<<endl;
        for(int i=0;i<n;i++)
        {
                ll a,c;
                scanf("%d %d",&c,&a);
                struct node p;
                p.ass=a;p.cap=c;
                v.push_back(p);
        }
	for(int pos=n;pos>=0;pos--)
	{
		for(int count=pos+1;count>=1;count--)
		{
			if(pos==n && count==1)
				dp[pos][count]=0;
			else
			{
				if(dp[pos+1][count+1]!=-1 && dp[pos+1][count-1]!=-1)
				dp[pos][count]=min(v[pos].ass+dp[pos+1][count+1],v[pos].cap+dp[pos+1][count-1]);
				else if(dp[pos+1][count+1]==-1 && dp[pos+1][count-1]==-1)
					dp[pos][count]=-1;
				else if(dp[pos+1][count+1]==-1)
					dp[pos][count]=v[pos].cap+dp[pos+1][count-1];
				else if(dp[pos+1][count-1]==-1)
					dp[pos][count]=v[pos].ass+dp[pos+1][count+1];
			}
		}
	}
	printf("%d\n",dp[0][1]);
}

