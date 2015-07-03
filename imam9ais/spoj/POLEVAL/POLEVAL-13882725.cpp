#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define mem(s,v) memset(s,v,sizeof s)
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
#define INF 999999
#define VP vector<pp> 
#define QP queue<pp>
typedef long long ll;
using namespace std;
int ar[1006];
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
long long power(int base,int pow1)
{
	if(pow1==1)
		return base;
	else if(pow1==0)
		return 1;
	else
	{
		long long  t=power(base,pow1/2);
		if(pow1%2==0)
		{
			return t*t;
		}
		else
			return t*t*base;
	}
}

			
int main()
{
	int ca=1;
	while(1)
	{
	int n;
		scanint(n);
		if(n==-1)break;
		printf("Case %d:\n",ca++);
	for(int i=n;i>=0;i--)
	{
		int k;		scanint(k);
		ar[i]=k;
	}
	int k1;
	scanint(k1);
	while(k1--)
	{
		int x;
		scanint(x);;long long sum=0;
		for(int i=n;i>=1;i--)
		{
			sum=(sum+ar[i])*x;
		}
		sum+=ar[0];
		printf("%lld\n",sum);
	}
	}
}

