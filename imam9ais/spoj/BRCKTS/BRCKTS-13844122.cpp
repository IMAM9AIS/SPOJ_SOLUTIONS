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
struct node
{
	int opening;
	int closing;
	node()
	{
		opening=closing=0;
	}
};
int n;
char s[30005];
struct node t[10000000];
int hash[30005];
int mv=0;
struct node merge(struct node m,struct node l,struct node r)
{
	int bf=l.opening-r.closing;
	if(bf==0){
		l.opening=0;
		r.closing=0;
	}
	if(bf>0)
	{
		l.opening=bf;
		r.closing=0;
	}
	if(bf<0)
	{
		l.opening=0;
		r.closing=abs(bf);
	}
	if(l.opening>0)
	{
		m.closing=l.closing;
		m.opening=l.opening+r.opening;
	}
	if(l.opening==0)
	{
		m.closing=l.closing+r.closing;
		m.opening=r.opening;
	}
	if(r.closing>0)
	{
		m.closing=l.closing+r.closing;
		m.opening=r.opening;
	}
	if(r.closing==0)
	{
		m.closing=l.closing;
		m.opening=l.opening+r.opening;
	}
	return m;
}

void build(int v,int tl,int tr)
{
	if(tl==tr)
	{
		if(s[tl]=='('){
			t[v].opening=1;
			t[v].closing=0;
			}
		else
		{	t[v].opening=0;
			t[v].closing=1;
		}
		hash[tl]=v;
		mv=v>mv?v:mv;
		
	}
	else
	{
		int tm=tl+tr>>1;
		build(2*v,tl,tm);
		build(2*v+1,tm+1,tr);
		struct node a;
		t[v]=merge(a,t[2*v],t[2*v+1]);
	}
}
void display(int v)
{
	if(v&1)
	{
		cout<<v<<" "<<"c->"<<" "<<t[v].closing<<" "<<"o->"<<t[v].opening<<endl;
	}
	else
		cout<<v<<" "<<"o->"<<t[v].opening<<" c->"<<t[v].closing<<endl;
	if(2*v<=mv)
	display(2*v);
	if(2*v+1<=mv)
	display(2*v+1);
}
void update(int pos)
{
	if(t[pos].opening==1)
	{
		t[pos].opening=0;t[pos].closing=1;
	}
	else
	{
		t[pos].closing=0;t[pos].opening=1;
	}
	pos>>=1;
	while(pos!=0)
	{
		t[pos]=merge(t[pos],t[2*pos],t[2*pos+1]);
		pos>>=1;
	}
}
int main()
{
	int t1=10;int test=1;
	while(t1--)
		{
			printf("Test %d:\n",test++);
		s(n);
		scanf("%s",s);
		build(1,0,n-1);
		//display(1);
		int m;
		s(m);
		while(m--)
		{
			int k;s(k);
			if(k==0)
			{
				if((t[1].opening+t[1].closing)==0)
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
			{
				k--;
				update(hash[k]);
		//		display(1);
			}
		}
		rep(i,mv+1)
		{
			t[i].opening=t[i].closing=0;
		}
	}
}
		
