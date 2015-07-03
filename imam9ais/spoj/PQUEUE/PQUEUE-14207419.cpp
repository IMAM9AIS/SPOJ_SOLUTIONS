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
int main()
{
		int t;
		s(t);
		while(t--)
		{
			VP v;
			map<int,int> mp;
			int n,m;
			s(n);s(m);
			rep(i,n)
			{
				int p;
				s(p);
				v.pb(pp(p,i));
				mp[p]++;
			}

			int pos=0;int re=0;
			while(1)
			{
				
				
				
					int val=v[pos].first;int done=1;
					for(int i=val+1;i<=9;i++)
					{
						if(mp[i])
						{
							done=0;
							break;
						}
					}
					if(done)
					{
						re++;
						if(v[pos].second==m)
							break;
						mp[val]--;
					}
					else
					{
						v.pb(pp(v[pos].first,v[pos].second));
						
					}
				
				pos++;
			}
			printf("%d\n",re);
		


		}
}
