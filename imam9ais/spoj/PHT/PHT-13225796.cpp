#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int tym=1;tym<=t;tym++)
	{
		long long int n;
		scanf("%lld",&n);long long int ans;
		ans=sqrt(n+1)-1;
		printf("Case %d: %lld\n",tym,ans);
	}
	return 0;
}

