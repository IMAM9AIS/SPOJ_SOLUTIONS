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
#define INF INT_MIN
#define VP vector<pp> 
#define QP queue<pp>
#define MAXN 100000
typedef long long ll;
using namespace std;
struct node
{
	ll segmentsum;
	ll bestprefix;
	ll bestsuffix;
	ll bestsum;
	node()
	{
		segmentsum=bestprefix=bestsuffix=bestsum=-10000001;
	}
};
int ar[MAXN+1];
struct node t[4*MAXN +1];
int mv=0;
int hash[50005];
struct node merge(struct node  a, struct node l,struct node   r)
{
	a.segmentsum=l.segmentsum+r.segmentsum;
	a.bestprefix=max(l.segmentsum+r.bestprefix,l.bestprefix);
	a.bestsuffix=max(l.bestsuffix+r.segmentsum,r.bestsuffix);
	a.bestsum=max(l.bestsum,max(r.bestsum,l.bestsuffix+r.bestprefix));
	return a;
}
	
void build(int v,int tl,int tr)
{
	if(tl==tr){
		hash[tl]=v;
		t[v].segmentsum=t[v].bestprefix=t[v].bestsuffix=t[v].bestsum=ar[tl];
		}
	else
	{
		int tm=tl+tr>>1;
		build(2*v,tl,tm);
		build(2*v+1,tm+1,tr);
		mv=max(2*v,mv);
		mv=max(2*v+1,mv);
		struct node a=merge(t[v],t[2*v],t[2*v+1]);
		t[v]=a;
	}
}
struct node query(int v,int tl,int tr,int l,int r)
{
	if(l>r){
		struct node nu;
//		nu=(struct node)malloc(sizeof(struct node));
		return nu;
		}
	if(tl==l && tr==r)
		return t[v];
	else
	{
		int tm=tl+tr>>1;
		struct node a=query(2*v,tl,tm,l,min(tm,r));
		struct node b=query(2*v+1,tm+1,tr,max(tm+1,l),r);
		struct node at;
		struct node ans=merge(at,a,b);
		return ans;
	}
		 
		
	
}
void mergeup(int pos)
{
	pos=pos/2;
	while(pos!=0)
	{
		struct node l=t[2*pos];
		struct node r=t[2*pos+1];
		struct node re=merge(t[pos],l,r);
		t[pos].bestsum=re.bestsum;
		t[pos].segmentsum=re.segmentsum;
		t[pos].bestprefix=re.bestprefix;
		t[pos].bestsuffix=re.bestsuffix;
		pos=pos/2;
	}
}
void update(int pos,int val,int n)
{
//	cout<<pos<<endl;
//	cout<<"update"<<pos<<endl;
	t[pos].segmentsum=t[pos].bestprefix=t[pos].bestsuffix=t[pos].bestsum=val;
	mergeup(pos);
}
void change(int v,int tl,int tr,int pos,int val)
{
	if(tl==tr)
	{
		t[v].segmentsum=t[v].bestsum=t[v].bestprefix=t[v].bestsuffix=val;
		return ;
	}
	else 
	{
		int tm=tl+tr>>1;
		if(pos<=tm)
			change(2*v,tl,tm,pos,val);
		else
			change(2*v+1,tm+1,tr,pos,val);
		t[v]=merge(t[v],t[2*v],t[2*v+1]);
	}
}

int main()
{
int n;	
	s(n);
	rep(i,n)
		scanf("%d",&ar[i]);
	build(1,0,n-1);
//	display(1);
	int m;
	s(m);
	while(m--)
	{
		int q,l,r;
		cin>>q>>l>>r;
		if(q==1)
		{
			struct node ans=query(1,0,n-1,l-1,r-1);
			printf("%lld\n",ans.bestsum);
		}
		else
		{
			change(1,0,n-1,l-1,r);
//			display(1);
		}
	}
//	rep(i,n)
//		cout<<i<<" "<<hash[i]<<endl;
	
	return 0;
}

