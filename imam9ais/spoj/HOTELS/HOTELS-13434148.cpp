#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[3000000];
int main()
{
	ll n;ll sumreq;
	scanf("%lld %lld",&n,&sumreq);
	for(int i=0;i<n;i++)
		scanf("%lld",&ar[i]);
	ll b=0;ll e=0;ll sum=0;ll maxsum=0;
	while(e<n)
	{
		sum=sum+ar[e];
		while(sum>sumreq)
		{
			sum=sum-ar[b];
			b++;
			if(b>e){
				e=b;
				sum=ar[b];
				break;
			}
		}
		maxsum=max(maxsum,sum);
		e++;
	}

		
	cout<<maxsum<<endl;
}

		
