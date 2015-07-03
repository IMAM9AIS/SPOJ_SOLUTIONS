#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tc( ll t,ll ar[],ll n,ll task)
{
	ll tot=0;
	ll i;	
	for(i=0;i<n;i++)
	{
		tot= tot+ (ll)t/ar[i];
	}
	return (tot>=task);
}
ll binary(ll ar[],ll n,ll ma,ll task)
{
	ll beg=1,end=ma;
	ll re=1;
	while(beg<=end)
	{
		ll mid=(beg+end)/2;
		if(tc(mid,ar,n,task))
		{
			re=mid;
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	return re;
}

	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,task;scanf("%lld %lld",&n,&task);
		ll ar[n+1];
		ll i;ll ma=INT_MIN;
		for(i=0;i<n;i++)
		{
			ll k;scanf("%lld",&k);
			ma=max(ma,k);
			ar[i]=k;
		}
		ma=ma*task;
		ll  mintime=binary(ar,n,ma,task);
		printf("%lld\n",mintime);
	}
	return 0;
}

		
	

