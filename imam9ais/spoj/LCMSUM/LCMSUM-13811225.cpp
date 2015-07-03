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
long long m[1000006];
long long ar[1000006];
#define lim 1000000
int main()
{
	for(int i=1;i<=lim;i++)
		m[i]=i;
	for(int i=2;i<=lim;i++)
	{
		if(m[i]==i)
		{
			for(int j=2*i;j<=lim;j=j+i)
				m[j]=m[j]-m[j]/i;
		}
	}
	for(int i=2;i<=lim;i++)
		if(m[i]==i)
			m[i]=i-1;
	for(int i=1;i<=lim;i++)
		for(int j=i;j<=lim;j=j+i)
			ar[j]+=i*m[i];
	int t;
	s(t);
	while(t--)
	{
		int n;s(n);
		long long ans= ((ar[n]+1)*n)/2;
		printf("%lld\n",ans);
	}
}

		

	
	


