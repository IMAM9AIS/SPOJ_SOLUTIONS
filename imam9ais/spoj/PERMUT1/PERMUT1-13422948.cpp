#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[15][1000000]={0};
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	dp[0][0]=1;
	dp[1][0]=1;dp[1][1]=1;
	dp[2][0]=1;dp[2][1]=2;dp[2][2]=2;dp[2][3]=1;
	dp[3][0]=1;dp[3][1]=3;dp[3][2]=5;dp[3][3]=6;dp[3][4]=5;dp[3][5]=3;dp[3][6]=1;
	int now=3;int maxl1=6;int n=4;int m=maxl1;
	while(now!=12)
	{
		for(int pow=0;pow<=n;pow++)
		{
			for(int i=0;i<=maxl1;i++)
			{
				ll coef=dp[now][i]*1;
				ll pow1=(i+pow);
				dp[now+1][pow1]+=coef;
				if(pow1>=m)
					m=pow1;
			}
		}
		now++;n++;maxl1=m;
	}
	int t;
	scanint(t);
	while(t--)
	{
		int n,k;
		scanint(n);scanint(k);
		printf("%lld\n",dp[n-1][k]);
	}
	
	
}

