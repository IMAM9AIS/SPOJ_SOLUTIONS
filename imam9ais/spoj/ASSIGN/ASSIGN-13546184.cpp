#include<bits/stdc++.h>
using namespace std;
int size;
int adj[25][25];
long long dp[1<<25];
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int countofbits(int n)
{
	int r=0;
	while(n!=0)
	{
		if((n&1)!=0)
			r++;
		n=n>>1;
	}
	return r;
}
long long  minfunc(int maskbit)
{
	if(dp[maskbit]!=-1)
		return dp[maskbit];
	int a=countofbits(maskbit);
	if(a==0)
	{
		dp[maskbit]=1;
		return 1;
	}
	else
	{
		//cout<<a<<endl;
		long long int res=0;	
		for(int i=0;i<size;i++)
		{
			int pos=size-i-1;
			if(adj[a-1][i] && ((maskbit & (1<<pos))!=0))
				res=res+minfunc(maskbit & (~(1<<pos)));
		}
		dp[maskbit]=res;
		return res;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		cin>>size;
		for(int i=0;i<size;i++){
		for(int j=0;j<size;j++)
		{	int e;scanint(e);adj[i][j]=e;}}
	
	int maskbit= (1<<size)-1;
	long long int a=minfunc(maskbit);
	cout<<a<<endl;
	}

}

