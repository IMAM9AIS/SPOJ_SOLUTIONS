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
ll bit[20000];
int n;
void update(int pos,int val)
{
	while(pos<=n)
	{
		bit[pos]+=val;
		pos+=(pos&(-pos));
	}
}
ll query(int pos)
{
	ll sum=0;
	while(pos>0)
	{		
		sum+=bit[pos];
		pos-=(pos&(-pos));
	}
	return sum;
}

int main()
{
	int t;
	s(t);
	while(t--)
	{
		mem(bit,0);
		int u;
		s(n);s(u);
		while(u--)
		{
			int l,r,val;
			s(l);s(r);s(val);
			update(l+1,val);
			update(r+2,0-val);
		}
		int q;s(q);
		while(q--)
		{
			int pos;s(pos);
			printf("%lld\n",query(pos+1));
		}
	}
}

