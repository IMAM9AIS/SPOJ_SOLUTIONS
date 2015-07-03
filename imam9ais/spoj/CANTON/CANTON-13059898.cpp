#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i=1;
		int sum=0;
		while(1)
		{
			sum+=i;
			if(sum>=n)
				break;
			i++;
		}
		int pos=n-(sum-i);
		int d=i+1;int np;int dp;
		if(d%2==0)
		{
			np=pos;
			dp=d-pos;
		}
		else
		{
			np=d-pos;
			dp=pos;		
		}
	printf("TERM %d IS %d/%d\n",n,dp,np);
	}
	return 0;
}

		
