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
ll bit1[1000000];
ll bit2[1000000];
int n;
ll query(int pos,int ca)
{	
	ll sum=0;
	while(pos>0)
	{
		if(ca==1)
			sum+=bit1[pos];
		else
			sum+=bit2[pos];
		pos=pos-(pos&(-pos));
	}
	return sum;
}

void update(int pos,ll val,int ca)
{
	while(pos<=n)
	{
		if(ca==1)
			bit1[pos]+=val;
		else
			bit2[pos]+=val;
		pos=pos+(pos&(-pos));
	}
}

		
ll sum(int pos)
{
	return query(pos,1)*pos-query(pos,2);
}

int main()
{
	
	int t;s(t);
	while(t--)
	{
		
		int c;
		s(n);s(c);
		rep(i,n+2){
			bit1[i]=0;
			bit2[i]=0;
		}
		while(c--)
		{
			int ca;s(ca);
			if(ca==0)
			{
				int p,q;ll v;
				s(p);s(q);scanf("%lld",&v);
				update(p,v,1);
				update(q+1,-v,1);
				update(p,v*(p-1),2);
				update(q+1,-1*v*q,2);
			}
			else
			{
				int p,q;
				s(p);s(q);
				ll sum1=sum(p-1);
				ll sum2=sum(q);
				printf("%lld\n",sum2-sum1);
			}
		}
	
	}
}
			
							
