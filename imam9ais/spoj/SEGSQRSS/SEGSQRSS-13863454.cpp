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
VP t(9999999);
int ar[9999999];
pp merge(int l,int r)
{
	int a=-1;
	int b=t[l].second+t[r].second;
	return pp(a,b);
}
	
void build(int v,int tl,int tr)
{
	if(tl==tr)
	{
		t[v].first=ar[tl];
		t[v].second=ar[tl]*ar[tl];
	}
	else
	{
		int tm=tl+tr>>1;
		build(2*v,tl,tm);
		build(2*v+1,tm+1,tr);
		t[v]=merge(2*v,2*v+1);
	}
}
void update(int v,int tl,int tr,int l,int r,int x,int cas)
{
	if(r<tl || l>tr)
		return ;
	else if(tl==tr)
	{
		if(cas==1)
		{
			t[v].first+=x;
			t[v].second=t[v].first*t[v].first;
		}
		else
		{
			t[v].first=x;
			t[v].second=x*x;
		}
	}
	else
	{
		int tm=tl+tr>>1;
		update(2*v,tl,tm,l,r,x,cas);
		update(2*v+1,tm+1,tr,l,r,x,cas);
		t[v]=merge(2*v,2*v+1);
	}
}
int query(int v,int tl,int tr,int l,int r)
{
	if(l>r)
		return 0;
	if(tl==l && tr==r)
		return t[v].second;
	else
	{
		int tm=tl+tr>>1;
		return query(2*v,tl,tm,l,min(r,tm))+query(2*v+1,tm+1,tr,max(l,tm+1),r);
	}
}

		
int main()
{
	int t;
	s(t);int k=1;
	while(t--)
	{
		printf("Case %d:\n",k++);
		int n,q;
		s(n);s(q);
		rep(i,n)
		{
			int a;s(a);
			ar[i]=a;
		}
		build(1,0,n-1);
		while(q--)
		{
			int type,st,nd;
			s(type);s(st);s(nd);
			if(type==2)
			printf("%d\n",query(1,0,n-1,st-1,nd-1));
			else
			{
				int x;
				s(x);
				update(1,0,n-1,st-1,nd-1,x,type);
			}
		}
	
	}
}

			


