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
ll t[9999999];
ll lazy[9999999];
int hash[9999999];
int mv=0;
int merge(int m,int l,int r)
{
	t[m]=t[l]+t[r];
	return t[m];
}
void build(int v,int tl,int tr)
{
	if(tl==tr)
	{
		t[v]=0;
		hash[tl]=v;mv=max(v,mv);
		lazy[v]=0;
		return ;
	}
	int tm=tl+tr>>1;
	build(2*v,tl,tm);
	build(2*v+1,tm+1,tr);
	t[v]=merge(v,2*v,2*v+1);
}
void update(int v,int tl,int tr,int l,int r,int val)
{
//	cout<<"at"<<v<<endl;
			
	if(r<tl || l>tr){
//		cout<<"l r tl tr"<<l<<" "<<r<<" "<<tl<<" "<<tr<<" ";
//		cout<<"r1"<<endl;
		return ;
		}
	if(l<=tl && r>=tr)
	{
		lazy[v]+=val;
//		cout<<"r2"<<endl;
		return ;
	}
	else
	{
		lazy[2*v]+=lazy[v];
		lazy[2*v+1]+=lazy[v];
		lazy[v]=0;
		int tm=tl+tr>>1;
		update(2*v,tl,tm,l,r,val);
		update(2*v+1,tm+1,tr,l,r,val);
		t[v]=t[2*v]+lazy[2*v]*(tm-tl+1)+t[2*v+1]+lazy[2*v+1]*(tr-tm);
//		cout<<"r3"<<endl;
	}
}
		
ll query(int v,int tl,int tr,int l,int r)
{
	if(l>r)
		return 0;
	if(tl==l && tr==r)
		return t[v]+lazy[v]*(tr-tl+1);
	else
	{
		 lazy[2*v]+=lazy[v];
                lazy[2*v+1]+=lazy[v];
                lazy[v]=0;

		int tm=tl+tr>>1;
		
		ll re= (query(2*v,tl,tm,l,min(r,tm))+query(2*v+1,tm+1,tr,max(l,tm+1),r));
		 t[v]=t[2*v]+lazy[2*v]*(tm-tl+1)+t[2*v+1]+lazy[2*v+1]*(tr-tm);
		return re;
	}
}
/**void display(int v)
{
	cout<<v<<" "<<"lazy"<<lazy[v]<<" "<<"val"<<t[v]<<endl;
	if(v*2<=mv)
		display(v*2);
	if(v*2+1<=mv)
		display(v*2+1);
}
*/


int main()
{
	int tq;
	s(tq);
	while(tq--)
	{
		int n,c;
		s(n);s(c);
		build(1,0,n-1);
//		display(1);
		while(c--)
		{
			int l,p,q,v;
			s(l);s(p);s(q);p--;q--;
			if(l==0)
			{
				s(v);
				update(1,0,n-1,p,q,v);	//			display(1);
			}
			else
			{
				ll ans=query(1,0,n-1,p,q);
				printf("%lld\n",ans);
			}
		}
		rep(i,mv+1)
		{
			t[i]=0;	
			lazy[i]=0;
		}
	}
}

