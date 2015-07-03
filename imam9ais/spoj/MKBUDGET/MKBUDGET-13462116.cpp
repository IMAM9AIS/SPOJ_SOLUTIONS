#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll emp;
ll sal;
ll sev;
ll mon;
vector<ll> req;
ll dp[1000][27];
long long  mint(int preemp,int month)
{
	if(month==mon)
	{
		dp[preemp][month]=0;
		return 0;
	}
	else
	{
		ll r=req[month];
		ll sal1,sev1,emp1;	
		emp1=sal1=sev1=0;
		if(r>=preemp)
		{
			ll ned=r-preemp;
			emp1=emp*ned;
			ll now=r;
			sal1=r*sal;
			if(dp[now][month+1]==-1)
				dp[now][month+1]=mint(now,month+1);
			dp[preemp][month]=sal1+emp1+dp[now][month+1];
			return (sal1+emp1+dp[now][month+1]);
		}
		else if(r<preemp)
		{
			ll a=INT_MAX;
			ll cankeep=preemp-r;
			for(ll kept=0;kept<=cankeep;kept++)
			{
				ll now=r+kept;
				sev1=(cankeep-kept)*sev;
				sal1=now*sal;
				emp1=0;
				if(dp[now][month+1]==-1)
					dp[now][month+1]=mint(now,month+1);
				a=min(a,sal1+emp1+sev1+dp[now][month+1]);
			}
			dp[preemp][month]=a;
			return a;
		}
	
	}
}
int main()
{
	int k=1;
	while(1)
	{
		memset(dp,-1,sizeof dp);
		scanf("%lld",&mon);
		if(mon==0)
			break;
		scanf("%lld %lld %lld",&emp,&sal,&sev);
		for(int i=0;i<mon;i++)
		{
			ll a;scanf("%lld",&a);
			req.push_back(a);
		}
		ll a=mint(0,0);
		req.clear();
		printf("Case %d, cost = $%lld\n",k++,a);
	}
}

