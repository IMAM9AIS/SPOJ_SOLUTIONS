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
int main()
{
	ll ar[15];
	mem(ar,0);
	int po=0;
	ar[1]=1;
	int n=2;
	while(n<=10)
	{
		int re=pow(n,po++);
		ar[n]=re;
		n++;
	}
	int c=1;
	while(cin>>n)
	{
		if(n==0)
			break;
		int re=ar[n];
		printf("Case %d, N = %d, # of different labelings = %d\n",c++,n,re);
	}
}

		
