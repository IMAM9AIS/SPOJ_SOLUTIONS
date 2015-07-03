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
vector<pp> car;
vector<pp> per;
VI v[220];
int p;
int t;
int s;
int c;
int ispossible(int seen[],int u,int match[])
{
	rep(i,p)
	{
		if(find(v[u].begin(),v[u].end(),i)!=v[u].end() && !seen[i])
		{
			seen[i]=1;
			if(match[i]==-1 || (ispossible(seen,match[i],match)))
			{	
			match[i]=u;
			return 1;
			}
		}
	}
	return 0;
}
int maxmatch()
{
	int match[p];
	mem(match,-1);
	int ans=0;
	rep(i,t)
	{
		int seen[p];
		memset(seen,0,sizeof seen);
		if(ispossible(seen,i,match))
			ans++;
	}
	return ans;
}
int main()
{
	int k;
	s(k);
	while(k--)
	{
		car.clear();
		per.clear();
		rep(i,201)
			v[i].clear();	
		s(p);s(t);s(s);s(c);
		rep(i,p)
		{
			int x,y;s(x);s(y);
			per.pb(pp(x,y));
		}
		rep(i,t)
		{
			int x,y;
			s(x);s(y);
			car.pb(pp(x,y));
		}
		rep(i,sz(car))
		{
			rep(j,sz(per))
			{
				int cx=car[i].first;
				int cy=car[i].second;
				int px=per[j].first;
				int py=per[j].second;
				int tot=(abs(px-cx)+abs(py-cy))*200;
				if((tot/s)<=c)
				{
					v[i].pb(j);
				}
			}
		}
/**		rep(i,sz(car))
		{
			int t=sz(v[i]);
			cout<<i<<"->";
			rep(j,t)
			{
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	*/
		int ans=maxmatch();
		cout<<ans<<endl;
	}
}

			
