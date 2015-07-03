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
#define p(n) printf("%d",&n)
#define pll(n) printf("%lld",&n)
#define mem(s,v) memset(s,v,sizeof s) 
#define pp pair<int,int> 
#define pp1 pair<int,pair<int,int> > 
typedef long long ll;
using namespace std;
int ar[150][150];
int hash[140];
vector<int> vx;
VI vy;
VI v[150];
int n;
int ispossible(int seen[],int parent[],int u)
{
	rep(i,120)
	{
		int t =i;
		if( ar[u][i] && !seen[t])
		{
			seen[t]=1;
			if(parent[t]<0 || (ispossible(seen,parent,parent[t])))
			{
			parent[t]=u;
			return 1;
			}
		}
	}
	return 0;
}
	
int bipartite()
{
	int parent[160];	
	mem(parent,-1);int ans=0;
	rep(i,120)
	{
		int seen[160];	
		mem(seen,0);
		if(ispossible(seen,parent,i))
		{
			ans++;
		}
//		cout<<i<<" "<<ans<<endl;
		
	}
	return ans;
}	
		
int main()
{
	int t;
	s(t);
	while(t--)
	{
//		int n;	
		mem(ar,0);
		s(n);
		rep(i,n)
		{
			int x,y;s(x);s(y);
			ar[x][y]=1;
		}
		int ans=bipartite();
		cout<<ans<<endl;
	}
}
	


