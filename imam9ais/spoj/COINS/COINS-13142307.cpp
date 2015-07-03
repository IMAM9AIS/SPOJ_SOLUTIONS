#include<bits/stdc++.h>
using namespace std;
 map<unsigned int,unsigned int> dp;
unsigned  int val( int n)
{
	if(n==0)
		return 0;
	else
	{
		if(dp[n/2]==0)
			dp[n/2]=val(n/2);
		if(dp[n/3]==0)
			dp[n/3]=val(n/3);
		if(dp[n/4]==0)
			dp[n/4]=val(n/4);
		 unsigned int a=n;unsigned  int b=n/2+n/3+n/4; unsigned  int  c=dp[n/2]+n/3+n/4;unsigned   int d=dp[n/3]+n/2+n/4; unsigned  int e=dp[n/4]+n/2+n/3;
		 unsigned  int f=dp[n/2]+dp[n/3]+n/4; unsigned  int g=dp[n/2]+dp[n/4]+n/3; unsigned  int h=n/2+dp[n/3]+dp[n/4]; unsigned  int i=dp[n/2]+dp[n/3]+dp[n/4];
		dp[n]=max(a,max(b,max(c,max(d,max(e,max(f,max(g,max(h,i))))))));
		return dp[n];
	}
}
int main()
{
	 int n;

	while(cin>>n)
	{
	
		unsigned  int a=val(n);
		cout<<a<<endl;
	}
	return 0;
}


