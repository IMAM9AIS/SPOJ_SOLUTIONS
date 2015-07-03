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
int ar[10000000];
int main()
{
	int n,k;
	s(n);s(k);
	while(k--)
	{
		int s,d;
		s(s);s(d);
		ar[s]++;
		ar[d+1]-=1;
	}
	for(int i=1;i<=n;i++)
		ar[i]=ar[i]+ar[i-1];	
	sort(ar,ar+n);
	printf("%d\n",ar[n/2]);
}

