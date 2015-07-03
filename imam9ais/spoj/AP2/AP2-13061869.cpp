#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int k,t,s;
		scanf("%lld %lld %lld",&k,&t,&s);
		long long int n,a,d;
		n=(2*s)/(k+t);
		d=(k-t)/(5-n);
		a=k-(2*d);
		printf("%lld\n",n);
		int i;
		for(i=1;i<=n;i++)
		{	
			printf("%lld ",(a+(i-1)*d));
		}
		printf("\n");
	}
	return 0;
}

