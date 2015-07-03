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
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
    {
        int N = n, rev, count = 0;
        rev = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
        while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
        while (count--) pc('0');
    }
typedef long long ll;
using namespace std;
struct node
{
	int l;
	int r;
	int in;
};
#define N 311111
#define A 1111111
#define BLOCK 555
int ar[N];
struct node v[N];
int re[A];
int ans[A];
int comp(struct node a,struct node b)
{
	if(a.l/BLOCK!=b.l/BLOCK)
		return a.l/BLOCK<b.l/BLOCK;
	else
		return a.r<b.r;
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
void scanint(int &x)
{   
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

	
	
int main()
{
	int n;
	scanint(n);
	rep(i,n)
	{
		int k;
		scanint(k);		
		ar[i]=k;
	}
	int q;
	scanint(q);
	rep(i,q)
	{
		int l,r;
		scanint(l);scanint(r);
		l--;r--;
		struct node p;
		p.l=l;
		p.r=r;
		p.in=i;
		v[i]=p;
	}
	sort(v,v+q,comp);
	int currentl,currentr;
	currentl=0;
	currentr=0;
	int l;
	int r;

	rep(i,q)
	{
		l=v[i].l;
		r=v[i].r;
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
		ans[v[i].in]=answer;
		
	}
	rep(i,q)
	{
		writeInt(ans[i]);
		pc('\n');
	}
}		
