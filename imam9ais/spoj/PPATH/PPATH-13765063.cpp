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

		
		
		
int main()
{
		vector<int> prime;
	int n,m;n=1000;m=9999;
	int num=sqrt(m);
	int ar[num+1];memset(ar,0,sizeof(ar));
	int i;
	int limit=sqrt(num);
	for(i=2;i<=limit;i++){
		if(ar[i]==0){
		int t=i*i;int k=0;
		while(t<=num){
		ar[t]=1;k++;
		t=(i*i)+ k*i;
		}
		}
	}
	for(i=2;i<=num;i++){
	if(ar[i]==0)
		prime.push_back(i);}
	
	int sz=prime.size();int s=m-n+1;
	int re[s];memset(re,0,sizeof(re));
	for(i=0;i<sz;i++)
	{
		int t=prime[i];
		int te=n/t;
		int next=te*t;
		if(next<n)
			next=next+t;
		while(next<=m)
		{
			if(next!=t)
				re[next-n]=1;
			next=next+t;
		}
	}
	for(i=0;i<s;i++)
	{
		if(re[i]==0 && (n+i)!=1)
			primelist.pb(n+i);
	}
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
