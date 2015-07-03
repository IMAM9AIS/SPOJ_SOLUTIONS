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
int ar[1000007];
vector<pp1> v;
int re[1000006];
int ans[1000005];
#define B 555
int comp(pp1 a,pp1 b)
{
	if(a.first/B!=b.first/B)
		return a.first/B<b.first/B;
	else
		return a.second.first<b.second.first;
}
int answer=0;
void add(int pos)
{
	re[ar[pos]]++;
	if(re[ar[pos]]==1)
		answer++;
}
void remove(int pos)
{
	re[ar[pos]]--;
	if(re[ar[pos]]==0)
		answer--;
}

	
	
int main()
{
	int n;
	s(n);
	rep(i,n)
	{
		int k;
		s(k);
		ar[i]=k;
	}
	int q;
	s(q);
	rep(i,q)
	{
		int l,r;
		s(l);s(r);l--;r--;
		v.pb(pp1(l,pp(r,i)));
	}
	sort(v.begin(),v.end(),comp);
	int currentl,currentr;
	currentl=0;
	currentr=0;
	int l;
	int r;

	rep(i,q)
	{
		l=v[i].first;
		r=v[i].second.first;
		while(currentl<l)
		{
			remove(currentl);
			currentl++;
		}
		while(currentl>l)
		{
			add(currentl-1);
			currentl--;
		}
		while(currentr<=r)
		{
			add(currentr);
			currentr++;
		}
		while(currentr>r+1)
		{
			 remove(currentr-1);
			currentr--;
		}
		ans[v[i].second.second]=answer;
		
	}
	rep(i,q)
	{
		printf("%d\n",ans[i]);
	}
}		
