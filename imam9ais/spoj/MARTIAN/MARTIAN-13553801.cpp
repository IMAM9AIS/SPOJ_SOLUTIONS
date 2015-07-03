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
int n,m;
ll passhori[505][505];
ll passtop[505][505];
int ar1[505][505];
int ar2[505][505];
ll dp[505][505];
ll maxans(int row,int col)
{
	if(row==-1 || col==-1)
	{
		return 0;
	}
	if(dp[row][col]!=-1)
                return dp[row][col];

	else
	{
		ll a=passtop[row][col];
		ll b=passhori[row][col];
	
		dp[row][col]= max(a+maxans(row,col-1),b+maxans(row-1,col));
		return dp[row][col];
	}
}

int main()
{

	while(1)
	{
		memset(dp,-1,sizeof dp);
	//int n,m;
		scanint(n);scanint(m);
		if(!n)break;
	rep(i,n){
	rep(j,m){
		int a;scanint(a);
		ar1[i][j]=a;
	}
	}
	rep(i,n){
		rep(j,m){
		int a;scanint(a);
		ar2[i][j]=a;
		}
	}
	//int passhori[n][m];
	rep(i,n){
		int s=0;
		rep(j,m){
		s+=ar1[i][j];
		passhori[i][j]=s;
		}
	}
	//int passtop[n][m];
	rep(j,m){
		int s=0;
		rep(i,n){
		s+=ar2[i][j];
		passtop[i][j]=s;
		}
	}
	ll ans=maxans(n-1,m-1);
		printf("%lld\n",ans);
	}
}

		

