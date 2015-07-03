#include<bits/stdc++.h>
#define rep(i,n) for( int (i)=0;(i)<(int)(n);(i)++)
#define sz(v) (int)((v).size())
#define rep1(i,k,n) for(int i=(k);i<(int)(n);i++)
#define VI vector<int>
#define VS vector <string>
#define SORT(c) sort((c).begin(),(c).end())
#define pb push_back
#define gc getchar_unlocked
#define Q queue<int> 
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define p(n) printf("%d",n)
#define pll(n) printf("%d",n)
#define mem(s,v) memset(s,v,sizeof s)
typedef long long ll;
using namespace std;
#define pp pair<int,int>
#define pp1 pair<int,pair<int,int> >
vector<int> primelist;
VI v[9999];
int visited[9999];
int bfs(int a,int b)
{
	queue<pp> q;
	q.push(pp(a,0));
	mem(visited,0);
	visited[a]=1;int ans=0;
	while(!q.empty())
	{
		int t=q.front().first;
		int s=q.front().second;
//		cout<<t<<endl;
		q.pop();
		if(t==b)
			return s;
		rep(i,sz(v[t]))
		{
			int c=v[t][i];
			if(!visited[c])
			{
				q.push(pp(c,s+1));
				visited[c]=1;
			}
		}
	}
	return -1;
}
bool prime[100000];
void sieve(int a,int b)
{
	memset(prime,true,sizeof prime);
	for(int p=2;p*p<=b;p++)
	{
		int l=a/p;
		l=l*p;
		for(int i=l;i<=b;i+=p)
		{
			if(i>=a && i!=p)
				prime[i]=false;
		}
	}
}
	
		
int main()
{
	sieve(1000,9999);
	for(int i=1000;i<=9999;i++)
	{
		if(prime[i])
			primelist.pb(i);
	}
//	cout<<sz(primelist)<<endl;
	rep(i,sz(primelist))
	{
		
		for(int k=0;k<sz(primelist);k++)
		{
			int a=primelist[i];
			int b=primelist[k];
			int mod=10;int c=0;
			while(b!=0&&a!=0)
			{
				int b1=b%mod;int a1=a%mod;
				if(b1!=a1)
					c++;
				b=b/10;a=a/10;
	//			mod=mod/10;
			}
			if(c==1){
				v[primelist[i]].pb(primelist[k]);
				v[primelist[k]].pb(primelist[i]);
				}
				
		}
	}
//	cout<<v[1033][0]<<endl;
	int t;
	s(t);
	while(t--)
	{
		int a;int b;s(a);s(b);
		int ans=bfs(a,b);
		p(ans);
		printf("\n");
	}

			
	
}
