#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
typedef long long ll;
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int n;
int k;
int ar[200];
ll dp[100][200];
ll countof(int pos,int sum)
{	
	if(dp[pos][sum]!=-1)
		return dp[pos][sum];
	if(sum==0)
	{
		dp[pos][sum]=0;
		return 0;
	}
		
	if(pos==2*n+1)
	{	
		if(sum!=1)
		{	dp[pos][sum]=0;
			return 0;
		}
		else
		{
			dp[pos][sum]=1;
			return 1;
		}
	}
	else
	{
		ll s=0;int is;
		if(ar[pos])
			s=s+countof(pos+1,sum+1);
		else
			s=s+countof(pos+1,sum+1)+countof(pos+1,sum-1);
		dp[pos][sum]=s;
		return s;
	
	}
}
int main()
{
	int t;
	scanint(t);
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		memset(ar,0,sizeof ar);
		cin>>n;
		cin>>k;
		int a;
		rep(i,k){
		scanint(a);
		ar[a]=1;
		}
		ll re=countof(1,1);
		cout<<re<<endl;
	}
}

